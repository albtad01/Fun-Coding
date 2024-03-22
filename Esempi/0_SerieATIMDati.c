// Creazione di una struttura dati per i giocatori della Serie A TIM

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char nome[100];
    char cognome[100];
    double patrimonio;
    char nazionalita[20];
}Presidente;
typedef struct{
    char nome[100];
    char cognome[100];
    char nazionalita[20];
    char sesso;
    int numMaglia;
    int eta;
    double stipendio;
}Giocatore;
typedef struct ElGiocatore{
    Giocatore g;
    struct ElGiocatore * next;
}NodoGiocatore;
typedef NodoGiocatore * LisGiocatori;
typedef struct{
    Presidente pres;
    LisGiocatori giocatori;
    char nomeStadio[100];
    int numeroChampions;
    int numeroScudetti;
    double mediaSpettatori;
    char Citta[20];
    char nomeCampionato[30];
}Squadra;
typedef struct ElSquadra{
    Squadra squad;
    struct ElSquadra * next;
}NodoSquadra;
typedef NodoSquadra * LisSquadre;

/// MEDIA DELLE CHAMPIONS VINTE DA SQUADRE DI SERIE A CHE HANNO UN PRESIDENTE CON PATRIMONIO >149 MLN EUR

double MediaChampions(LisSquadre l){
    LisSquadre scroll1=l;
    double sum=0,mean=0;
    int numSquadre=0;
    while(scroll1!=NULL){
        if(scroll1->squad.pres.patrimonio>149147643 && strcmp(scroll1->squad.nomeCampionato,"Serie A TIM")==0){
            sum+=scroll1->squad.numeroChampions;
            numSquadre++;
        }
        scroll1=scroll1->next;
    }
    mean=sum/numSquadre;
    return mean;
}

/// STAMPA IL GIOCATORE ITALIANO PIU VECCHIO CHE GIOCA IN SERIE A

void vecchioSerieA(LisSquadre l, char vecchio[100]){
    LisSquadre scroll1=l;
    LisGiocatori scroll2=NULL;
    int etaMax=0;
    while(scroll1!=NULL){
        if(strcmp(scroll1->squad.nomeCampionato,"Serie A TIM")==0){
            scroll2=scroll1->squad.giocatori;
            while(scroll2!=NULL){
                if(strcmp(scroll2->g.nazionalita,"italia")==0){
                    if(scroll2->g.eta>etaMax){
                        etaMax=scroll2->g.eta;
                        strcpy(vecchio,scroll2->g.cognome);
                    }
                }
                scroll2=scroll2->next;
            }
        }
        scroll1=scroll1->next;
    }
    printf("Giocatore Italiano più vecchio della Serie A Tim: %s\n ",vecchio);
}

/// NAZIONALITA PRESIDENTI CHE HA UN PATRIMONIO INFERIORE ALLA SOMMA TOTALE DELLO STIPENDIO DEI GIOCATORI IN CUI DIRIGE

void presidentiSenzaSoldi(LisSquadre l){
    LisSquadre scroll1=l;
    LisGiocatori scroll2=NULL;
    double sommaStipendi=0;
    while(scroll1!=NULL){
        scroll2=scroll1->squad.giocatori;
        while(scroll2!=NULL){
            sommaStipendi+=scroll2->g.stipendio;
            scroll2=scroll2->next;
        }
        if(sommaStipendi > scroll1->squad.pres.patrimonio)
            printf("Nazionalità presidente in difficoltà: %s\n",scroll1->squad.pres.nazionalita);
        sommaStipendi=0;
        scroll1=scroll1->next;
    }
}

/// TROVA LA MEDIA SPETTATORI DI TUTTI I GIOCATORI DI UNA CERTA NAZIONALITA'

double mediaSpettatori(LisSquadre l, char nazionalita[20]){
    LisSquadre scroll1=l;
    LisGiocatori scroll2=NULL;
    double sumSpettatori=0, meanSpettatori=0;
    int numStadi=0;
    while(scroll1!=NULL){
        scroll2=scroll1->squad.giocatori;
        while(scroll2!=NULL){
            if(strcmp(scroll2->g.nazionalita, nazionalita)==0){
                sumSpettatori+=scroll1->squad.mediaSpettatori;
                numStadi++;
            }
        }
        scroll1=scroll1->next;
    }
    meanSpettatori=sumSpettatori/numStadi;
    return meanSpettatori;
}
