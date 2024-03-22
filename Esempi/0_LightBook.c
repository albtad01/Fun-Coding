// Simulazione di un social network sulla falsa riga di Facebook

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_AMICI 2000

typedef struct _persona {
    char nome[10], cognome[10]; // nome e cognome della persona
    struct _persona * amici[MAX_AMICI]; // array contenente gli indirizzi delle persone nella lista utenti che sono amici di questa persona
    int num_amici; // numero di amici contenuti nell'array amici
    struct _persona * next;
} persona;
typedef persona * lista;
lista inserisciPersone(lista light);
lista aggiungiAmico(lista light, lista amicoRichiesta);
void calcolaPersoneRaggiungibili(lista lightp);
void calcolaPersoneRaggiungibili_aux(lista lightp, int i);
void VisualizzaLista(lista light);
int main(){
    lista lis=NULL;
    lis=inserisciPersone(lis);
    lis=inserisciPersone(lis);
    lis=inserisciPersone(lis);
    lis=inserisciPersone(lis);
    VisualizzaLista(lis);
    lis=aggiungiAmico(lis, lis->next->next->next); // il secondo è quello che manda la richiesta
    lis=aggiungiAmico(lis, lis->next->next->next);
    VisualizzaLista(lis);
    calcolaPersoneRaggiungibili(lis->next->next->next);
    return 0;
}

lista inserisciPersone(lista light){
    char nom[20],cog[20];
    printf("Nome: ");
    scanf("%s",nom);
    printf("Cognome: ");
    scanf("%s",cog);
    lista punt;
    punt=(lista)malloc(sizeof(persona));
    strcpy(punt->nome,nom);
    strcpy(punt->cognome,cog);
    punt->num_amici=0;
    punt->next=light;
    return punt;
}
lista aggiungiAmico(lista light, lista amicoRichiesta){
    lista head=light;
    char nom[20],cog[20];
    printf("Nome Amico da aggiungere: ");
    scanf("%s",nom);
    printf("Cognome Amico da aggiungere: ");
    scanf("%s",cog);
    while(light!=NULL){
        if(strcmp(light->nome,nom)==0 && strcmp(light->cognome,cog)==0){
            amicoRichiesta->amici[amicoRichiesta->num_amici]=light;
            amicoRichiesta->num_amici++;
        }
        light=light->next;
    }
    return head;
}
void calcolaPersoneRaggiungibili(lista lightp){
    return calcolaPersoneRaggiungibili_aux(lightp, 0);
}
void calcolaPersoneRaggiungibili_aux(lista lightp, int i){
    if(i>=lightp->num_amici)
        printf("\n");
    else{
        printf("%s %s %dA\n", lightp->amici[i]->nome, lightp->amici[i]->cognome,
               lightp->amici[i]->num_amici);
        calcolaPersoneRaggiungibili_aux(lightp, i+1);
    }
}
void VisualizzaLista(lista light){
    if(light==NULL)
        printf("---|\n");
    else{
        printf("%s %s--->",light->nome,light->cognome);
        VisualizzaLista(light->next);
    }
}
