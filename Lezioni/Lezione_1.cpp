// 21/09/2021

// Generare un numero casuale da 1 a 11

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
    int x;
    srand(time(NULL));
    x=rand()%11+1;

    return 0;
}

// TEORIA

// Tipi
int // Intero
float // Float
char // Carattere

// Vettori
(tipo) (nomeVettore)[GrandezzaMassimaVettore]
int n[5]={1,2,3,4,5}

//Operatori logici
== // UGUALE (O confronto)
!= // DIVERSO
< >
<=
>=
&& // E (and)
|| // O (or)

// Condizioni
if(){  } // Condizione dentro la parentesi tonda soddisfatta (se soddisfatta fa
  // ciò che è scritto tra le graffe)
else{ } // Lo fa soltanto se la condizione dentro l'if non è soddisfatta

// Cicli
while(){ } // Ripete tutto ciò che scrivo tra le graffe fino a che la condizione
// dentro le tonde è soddisfatta (la condizione dentro le tonde viene valutata in partenza)
do{ }while(); // Ripete tutto ciò che scrivo tra le graffe fino a che la condizione
// dentro le tonde è soddisfatta (la condizione dentro le tonde viene valutata dopo)
int i;
for(i=0;i<N;i++) // Come il while, con la condizione al centro, soltanto che aassocio un
// valore alla i nello spazio a sinistra e incremento nello spazio a destra
// E' particolarmente utile per i vettori (definisco ogni spazio del vettore)

// Valori random
// Fuori dal main:
#include<stdlib.h>
#include<time.h>
// Dentro il main:
int n;
srand(time(NULL))
n=rand()%I+S; (I=intervallo S=spostamento)

// Comodità
n+=10; n=n+10;
n-=10; n=n-10;


// Caricare un vettore randomico N=10 di numeri interi (da 1 a 5) e stampare somma e media.
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
    int v[10],i;
    float media,somma=0; // Media=Somma/NumTermini
    // srand(time(NULL));
    for(i=0;i<10;i++){
        v[i]=rand()%5+1;
        somma+=v[i];
    }
    cout<<"La somma è "<<somma<<endl;
    media=somma/10;
    cout<<"La media è "<<media<<endl;
    return 0;
}
