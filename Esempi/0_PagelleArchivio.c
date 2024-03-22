// Formalizzare un archivio di pagelle, ciascuna caratterizzata dai dati di un alunno (nome,cognome,data di nascita,sesso) e da una lista di voti; ogni voto è formato dal voto stesso e dalla materia, formata a sua volta da insegnante (nome,cognome) e nomeMateria.
// Si stampi successivamente la media di tutti i voti di matematica presenti nell'archivio, ammesso che ciascuno di essi sia >=6

/// SOLUZIONE

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
  char nome[100];
  char cognome[100];
  int giorno, mese, anno;
  char sesso;
}Alunno;
typedef struct{
    char nome[100];
    char cognome[100];
}Insegnante;
typedef struct{
    char nomeMateria[20];
    Insegnante ins;
}Materia;
typedef struct el{
    int voto;
    Materia mat;
    struct el * next;
}NodoVoti;
typedef NodoVoti * ListaVoti;
typedef struct{
    Alunno alu;
    ListaVoti lis;
}Pagella;
typedef struct arc{
    Pagella pag;
    struct arc * next;
}NodoArchivio;
typedef NodoArchivio * Archivio;

double archivioMatematica(Archivio a){
    double sumVoti=0;
    int numVoti=0;
    Archivio scroll=a;
    ListaVoti scrollVoti=NULL;
    // potrei anche non crearmi scroll e scrollVoti, ma mi aiutano a non far scorrere il puntatore dell'archivio nel caso in cui mi dovessero servire in un'altra funzione
    while(scroll!=NULL){
        scrollVoti=scroll->pag.lis;
        while(scrollVoti!=NULL){
            if(strcmp(scrollVoti->mat.nomeMateria,"matematica")==0 && scrollVoti->voto>=6){
                sumVoti+=scrollVoti->voto;
                numVoti++;
            }
            scrollVoti=scrollVoti->next;
        }
        scroll=scroll->next;
    }
    return sumVoti/numVoti;
}

/// VARIANTI Nella consegna:


// 1) media totale singolo alunno (che ha avuto almeno 6 a matematica)?

double mediaMatematico(Pagella pag){
    int checkMatSuf=0,numVoti=0;
    double sum=0,mean=0;
    Pagella aux=pag;
    while(pag.lis!=NULL){
        if(strcmp(pag.lis->mat.nomeMateria,"matematica")==0 && pag.lis->voto>=6)
            checkMatSuf=1;
        pag.lis=pag.lis->next;
    }
    if(checkMatSuf==1){
        while(aux.lis!=NULL){
            sum+=aux.lis->voto;
            numVoti++;
            aux.lis=aux.lis->next;
        }
        mean=sum/numVoti;
    }
    return mean;
}

// 2) stampa la media di tutti gli alunni che hanno preso almeno 6 a matematica nell'archivio dati

void stampaMediaMatematici(Archivio arch){
    ListaVoti lis;
    int checkMatematico=0,numVoti=0;
    double sum=0,mean=0;
    while(arch!=NULL){
        lis=arch->pag.lis;
        while(arch->pag.lis!=NULL){
            if(strcmp(arch->pag.lis->mat.nomeMateria,"matematica")==0 && arch->pag.lis->voto>=6)
                checkMatematico=1;
            arch->pag.lis=arch->pag.lis->next;
        }
        if(checkMatematico==1){
            while(lis!=NULL){
                sum+=lis->voto;
                numVoti++;
                lis=lis->next;
            }
            mean=sum/numVoti;
            printf("MEDIA %s\t%lf\n",arch->pag.alu.nome,mean);
        }
        sum=0;
        mean=0;
        checkMatematico=0;
        arch=arch->next;
    }
}
