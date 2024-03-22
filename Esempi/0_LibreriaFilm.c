#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100
//Per immagazzinare i film che vengono inseriti dall’utente dovete usare una lista. In questo caso, il dato contenuto in ogni nodo della lista non sarà un semplice char o un int, ma una struttura di tipo movie. Nella lista i nuovi film devono essere inseriti in modo ordinato a seconda dell’anno in cui è stato girato il film (prima i film più vecchi poi quelli più nuovi).
typedef struct _movie {
    char title[MAX_LEN];
    char type[MAX_LEN]; // Ad esempio: horror, action . . .
    int year; // L’anno in cui è stato girato il film
} movie;
typedef struct el{
    movie film;
    struct el * prox;
}nodo_film;
typedef nodo_film * lista;
lista add(lista listaFilm); //chiede i dati per un nuovo film, lo aggiunge alla lista listaFilm nella posizione corretta, e restituisce la lista aggiornata.
void print(lista listaFilm); //stampa la lista dei film.
lista search(lista listaFilm, char * title); //cerca un film nella lista in base al titolo e restituisce il nodo della lista che contiene tale film.
lista delete(lista listaFilm, lista film); //rimuove un film dalla lista e restituisce la lista modificata
int main(int argc, const char * argv[]) {
    lista libreria=NULL;
    libreria=add(libreria);
    libreria=add(libreria);
    libreria=add(libreria);
    print(libreria);
    libreria=delete(libreria,libreria->prox->prox);
    print(libreria);
    return 0;
}
lista add(lista listaFilm){
    lista new,puntCor=listaFilm,puntPrec=NULL;
    new=(lista)malloc(sizeof(nodo_film));
    printf("Titolo Film: ");
    scanf("%s",new->film.title);
    printf("Genere Film: ");
    scanf("%s",new->film.type);
    printf("Anno Film: ");
    scanf("%d",&new->film.year);
    while(puntCor!=NULL && new->film.year>puntCor->film.year){
        puntPrec=puntCor;
        puntCor=puntCor->prox;
    }
    new->prox=puntCor;
    if(puntPrec!=NULL){ // puntPrec gli dò un successivo solo se esiste come nodo
        puntPrec->prox=new;
        return listaFilm;
    }
    return new; // altrimenti ritorno questo che è la nuova testa della lista
}
void print( lista l ) {
    if ( l==NULL )
        printf(" ---| \n");
    else {
        printf(" %s (%s) [%d] ---> ",l->film.title,l->film.type,l->film.year);
        print(l->prox);
    }
}
lista search(lista listaFilm, char * title){
    lista scroll=listaFilm,find=NULL;
    while(scroll!=NULL){
        if(strcmp(scroll->film.title,title)==0)
            find=scroll;
        scroll=scroll->prox;
    }
    return find;
}
lista delete(lista listaFilm, lista film){
    lista puntPrec=NULL,puntCor=listaFilm;
    while(puntCor!=NULL){
        if(puntCor==film){
            free(puntCor);
            if(puntPrec!=NULL){
                puntPrec->prox=puntCor->prox;
                return listaFilm;
            }
            listaFilm=listaFilm->prox;
            return listaFilm;
        }
        puntPrec=puntCor;
        puntCor=puntCor->prox;
    }
    return listaFilm;
}
