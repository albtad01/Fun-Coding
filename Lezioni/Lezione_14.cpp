
// Parametri Formali= sono le variabili che inserisci nella DICHIARAZIONE della funzione.
// Parametri Attuali= sono le variabili che inserisci nella CHIAMATA della funzione.

// PASSAGGIO PER COPIA
// La variabile var è rimasta 1

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int AggiungiUnoCopia(int a);

int main() {
    int var=1;
    cout<<AggiungiUnoCopia(var)<<endl;
    return 0;
}
int AggiungiUnoCopia(int a){ // a diventa 1 per copia
    return a+1;
}

// PASSAGGIO PER RIFERIMENTO / INDIRIZZO
// Quando voglio che la variabile si "aggiorni", quindi che cambi nel corso del programma
// var=-3 -> var=3 si aggiorna
// PER RIFERIMENTO = Passi per indirizzo -> variabile si aggiorni continuamente
// PASSARE PER RIFERIMENTO <-> USO IL VOID (nei programmi base)

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void AggiungiUnoRif(int *a); // Dichiarazione: * NomeVariabile
int main() {
    int var=1;
    AggiungiUnoRif(&var); // Chiamata: & NomeVariabile
    cout<<var<<endl;
    return 0;
}
void AggiungiUnoRif(int *a){
    (*a)=(*a)+2;
}

// COMPITO

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void abs(int *a); // void perché la funzione non deve restituire niente: devo passarlo per riferimento
bool isPari(int a);
int main() {
    int a;
    abs(&a);
    cout<<isPari(a)<<endl;
    return 0;
}
void abs(int *a){
    if(*a<0){ // caso numero negativo: *a= -3 -> +3
        *a=*a*-1;
    }
    // caso numero positivo: *a=+3 -> +3
}
bool isPari(int a){
    if(a%2==0) // -2 -> resto 0= pari
        return true;
    else
        return false;
}

// Scrivere funzione "Aggiungi" che prenda una variabile intera passata per riferimento e le aggiunge 5

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void Aggiungi(int *a);
int main() {
    int a=5;
    Aggiungi(&a);
    cout<<a<<endl; // a=6
    Aggiungi(&a); // a=8
    a=a+2; // a=10
    cout<<a<<endl; // a=10
    return 0;
}
void Aggiungi(int *a){
    if(*a%5==0)
        *a=*a+1;
    else
        *a=*a+2; // *a=8
}

// Scrivere una funzione che prende in input un numero intero passato per riferimento (o indirizzo) e ne calcola il suo quadrato se il numero è minore di 10, il suo cubo se il numero è maggiore di 20.
// Si inserisca da tastiera nel main un numero intero e si invochi la funzione.
// Stampare successivamente la variabile modificata.

// Scrivere una funzione che prende in input un numero intero passato in input e ne restituisce il suo quadrato se il numero è minore di 10, il suo cubo se il numero è maggiore di 20, in tutti gli altri casi ritornare il numero stesso.

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void QuadratoCubo(int *a); // per riferimento
int QuadratoCuboC(int a); // per copia
int main() {
    int a;
    cout<<"Inserisci un numero: "<<endl;
    cin>>a;
    QuadratoCubo(&a); // a=4
    cout<<QuadratoCuboC(a)<<endl; // passi per copia: a non si aggiorna
    cout<<a<<endl;
    return 0;
}
void QuadratoCubo(int *a){
    if(*a<10)
        *a=(*a)*(*a);
    else if(*a>20)
        *a=*a**a**a;
}
int QuadratoCuboC(int a){
    if(a<10)
        return a*a;
    else if(a>20)
        return a*a*a;
    else
        return a;
}
