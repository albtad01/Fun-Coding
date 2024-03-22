
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTRLEN 101
#define NUMCONT 10
typedef struct {
    char cognome[MAXSTRLEN];
    char nome[MAXSTRLEN];
    char cellulare[MAXSTRLEN];
} RECAPITO;
void InserisciContatto(RECAPITO Contatti[], int *i);
void VisualizzaRubrica(RECAPITO Contatti[], int numcontatti);
void EliminaContatto(RECAPITO Contatti[], int *);

int main(int argc, const char * argv[]) {
    RECAPITO Rubrica[NUMCONT];
    int choice,i=0;
    do{
        printf("\n*MENU* \n 1) INSERISCI CONTATTO\n 2) ELIMINA CONTATTO\n 3) VISUALIZZA RUBRICA\n 4) ESCI\nNUMERO AZIONE: ");
        scanf("%d",&choice);
        if(choice==1) InserisciContatto(Rubrica, &i);
        if(choice==2) EliminaContatto(Rubrica, &i);
        if(choice==3) VisualizzaRubrica(Rubrica, i);
    }while(choice!=4);
    return 4;
}
void InserisciContatto(RECAPITO Contatti[], int *i){
    if(*i<10){
        printf("\n* NUOVO CONTATTO *\n");
        printf("%d* NOME: ",*i+1);
        scanf("%s",Contatti[*i].nome);
        printf("%d* COGNOME: ",*i+1);
        scanf("%s",Contatti[*i].cognome);
        printf("%d* CELLULARE: ",*i+1);
        scanf("%s",Contatti[*i].cellulare);
        *i=*i+1;
    }
    else printf("WARNING: RUBRICA PIENA!\n");
}
void VisualizzaRubrica(RECAPITO Contatti[], int numcontatti){
    int i;
    printf("\n* RUBRICA *\n");
    for(i=0;i<numcontatti;i++)
        printf("%d* %s %s %s\n",i+1,Contatti[i].nome,Contatti[i].cognome,Contatti[i].cellulare);
}
void EliminaContatto(RECAPITO Contatti[], int *numcontatti){
    int del,i;
    printf("\n* ELIMINA CONTATTO *\n");
    VisualizzaRubrica(Contatti, *numcontatti);
    printf("Numero Contatto da eliminare: ");
    scanf("%d",&del);
    del-=1;
    for(i=0;i<*numcontatti;i++){
        //trova il contatto da eliminare
        if(i==del){
            while(i<*numcontatti-1){
                strcpy(Contatti[i].cellulare,Contatti[i+1].cellulare);
                strcpy(Contatti[i].cognome,Contatti[i+1].cognome);
                strcpy(Contatti[i].nome,Contatti[i+1].nome);
                i++;
            }
            *numcontatti=*numcontatti-1;
        }
    }
}
