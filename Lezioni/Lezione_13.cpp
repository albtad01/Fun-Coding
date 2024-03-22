// Scrivere una funzione che riceve un numero intero e restituisce 1 se il numero è perfetto, 0 altrimenti.
// Numero perfetto: somma dei suoi divisori ad eccezione di sé stesso = numero stesso.
// 6 è un numero perfetto: 1 2 3 = 6

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int numeroperfetto(int a);
int main() {

    return 0;
}

int numeroperfetto(int a){
    int i,sommadiv=0;
    for(i=1;i<a;i++){
        if(a%i==0)
            sommadiv=sommadiv+i;
    }
    if(sommadiv==a)
        return 1;
    else
        return 0;
}

// Scrivere una funzione che riceve in input due numeri interi e restituisce 1 se i due numeri sono amici, 0 altrimenti.
// Numeri Amici: la somma dei divisori di uno = somma dei divisori dell'altro
// Inserire successivamente due numeri da tastiera nel main e stampare se i due numeri sono amici, oppure no.

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int amici(int a, int b);
int main() {
    int a,b;
    cout<<"Inserire un numero: "<<endl;
    cin>>a;
    cout<<"Inserire un numero: "<<endl;
    cin>>b;
    if(amici(a,b)==1)
        cout<<"I due numeri sono amici"<<endl;
    else
        cout<<"I due numeri NON sono amici"<<endl;
    return 0;
}
int amici(int a, int b){
    int i,sommadiva=0,sommadivb=0;
    for(i=1;i<a;i++){
        if(a%i==0)
            sommadiva=sommadiva+i;
    }
    for(i=1;i<b;i++){
        if(b%i)
            sommadivb=sommadivb+i;
    }
    if(sommadiva==sommadivb)
        return 1;
    else
        return 0;
}
// Scrivere una funzione abs (rinominata absolute: funzione abs già sviluppata dal compilatore), che riceve un numero e stampa il suo valore assoluto.
// val ass -3 = 3, val ass 2 = 2, val ass -5 = 5, val ass 0 = 0.
// Il valore in input viene assegnato nel main random da 1 a 6.

// Scrivere una funzione infpari booleano che riceve un numero e restituisce vero se il numero in input era pari, falso altrimenti.
// Nei casi in cui la funzione non deve restituire alcun valore come tipo mettiamo "void".

// Scrivere una funzione infpari2 booleano che riceve un numero e restituisce vero se il valore assoluto del numero in input era pari, falso altrimenti.

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void absolute(int a);
bool infpari(int b);
bool infpari2(int c);
int main() {
    // srand(time(NULL));

    return 0;
}
void absolute(int a){
    if(a<0){
        a=a*-1;
        cout<<a<<endl;
    }
    if(a>=0){
        cout<<a<<endl;
    }
}
bool infpari(int b){
    if(b%2==0)
        return true;
    else
        return false;
}
bool infpari2(int c){
    if(c>=0){
        if(c%2==0)
            return true;
        else
            return false;
    }
    if(c<0){
        c=c*-1;
        if(c%2==0)
            return true;
        else
            return false;
    }
}

// Scrivere una funzione che riceve in input due numeri e stampa la loro somma diviso due.
// QUANDO RITORNIAMO QUALCOSA (Numero, carattere...): INT, DOUBLE, CHAR...
// QUANDO STAMPIAMO/NON RITORNIAMO QUALCOSA: VOID
// Acquisisci dal main due numeri interi e stampa la loro somma diviso due

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void divisodue(int a, int b);
int main() {
    int a,b;
    cout<<"Inserisci il primo: "<<endl;
    cin>>a;
    cout<<"Inserisci il secondo: "<<endl;
    cin>>b;
    divisodue(a,b);
    return 0;
}
void divisodue(int a, int b){
    cout<<(a+b)/2<<endl;
}
