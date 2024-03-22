// Spiegazione funzioni con esempio facile

// Definire una funzione SOMMA che restituisce la somma tra due numeri interi.

// PRIMA DEL MAIN: Dichiarazione della funzione.
// DOPO IL MAIN: Funzione vera e propria in cui si specifica il funzionamento.
// DENTRO IL MAIN: Chiamata alla funzione.

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
// TIPO CHE RESTITUISCE / NOME DELLA FUNZIONE / ( DATI IN INGRESSO CON IL LORO TIPO )
int somma(int a, int b);

int main() {
    int num1,num2;
    cout<<"Inserisci il numero a: "<<endl;
    cin>>num1;
    cout<<"Inserisci il numero b: "<<endl;
    cin>>num2;
    cout<<somma(num1,num2);  // NOME SENZA IL TIPO / ( DATI IN INGRESSO SENZA IL TIPO )
    return 0;
}

// UGUALE ALLA DICHIARAZIONE. DENTRO LE GRAFFE DICI CHE COSA FA
int somma(int a, int b){
    int somma;
    somma=a+b;
    return somma;
}

// ESERCIZIO 1 WHATSAPP (classe)

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int modifica(int x); // dichiarazione funzione
int main() {
    int a=2,z;
    z=modifica(a);
    z=z-5;
    cout<<modifica(z);
    return 0;
}

int modifica(int x){
    if(x>=0)
        x++;
    else
        x--;
    return x;
}

// ESERCIZIO 2 WHATSAPP (classe)

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int cubo(int n); // PARAMETRO FORMALE: n

int main() {
    int x;
    // srand(time(NULL));
    x=rand()%101;
    cout<<"Il cubo di "<<x<<" è "<<cubo(x)<<endl; // PARAMETRO ATTUALE: x
    return 0;
}

int cubo(int n){ // PARAMETRO FORMALE: n
    int cubo;
    cubo=n*n*n;
    return cubo;
}

// ESERCIZIO 1 COMPITI

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int potenza(int a, int b);
int main() {
    int a=2,b=2;
    cout<<potenza(a,b);
    return 0;
}
// a^0= 1
// a^1= a
// a^2 a*a; a^3 a*a*a; a^b a*...*a

int potenza(int a, int b){
    int i,pot=1;
    for(i=0;i<b;i++){
        pot=pot*a;
    }
    return pot;
}

// ESERCIZIO 2 COMPITI

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int differenzaMaxMin(int a,int b, int c);
int main() {

    return 0;
}

int differenzaMaxMin(int a,int b, int c){
    int max, min, diff;
    // CERCO IL MASSIMO
    if(a>=b && a>=c)
        max=a;
    else if(b>=a && b>=c)
        max=b;
    else
        max=c;
    // CERCO IL MINIMO
    if(a<=b && a<=c)
        min=a;
    else if (b<=a && b<=c)
        min=b;
    else min=c;
    // RESTITUIAMO LA DIFFERENZA TRA MAX E MIN
    diff= max-min;
    return diff;
}

// ESERCIZIO 3 COMPITI

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

bool treDivisori(int n);

int main() {

    return 0;
}

bool treDivisori(int n){
    int i,numDivisori=0;
    // trovo il numero dei divisori
    for(i=1;i<n;i++){
        if(n%i==0)
            numDivisori++;
    }
    // restituiamo true (1) o false (0)
    if(numDivisori>=3)
        return true;
    else
        return false;
}
