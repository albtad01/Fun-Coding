// Creare un funzione ricorsiva per calcolare una funzione definita così:
// per m>0 allora f(n,m)=1+f(n,m-1)
// per m=0 alloa f(n,m)=n
// Dire poi cosa fa

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int f(int n, int m);
using namespace std;
int main() {
    cout<<f(3,2)<<endl;
    return 0;
}
// n=3 m=2
// n=3 m=1
// n=3 m=0
int f(int n, int m){
    if(m>0) // passo induttivo
        return 1+f(n,m-1); // f(3,2)=1+4=5, f(3,1)=1+3=4
    else // caso base
        return n;
}
// Creare una funzione che restituisce il fattoriale di un numero
// 3!=1*2*3 4!=1*2*3*4
// 0!=1
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int fattoriale(int n);
int fattorialeRic(int n);
using namespace std;
int main() {

    return 0;
}
int fattoriale(int n){
    int f=1;
    for(int i=1;i<=n;i++)
        f=i*f;
    return f;
}
int fattorialeRic(int n){
    if(n==1) // caso base
        return 1;
    else // passo induttivo
        return n*fattorialeRic(n-1);
}

// Creare una funzione che restituisce, dati due numeri interi n ed m il valore n^m
// Caso base: n^0=1
// 3^2= 3*3
// 4^3=4*4*4
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int potenzaRic(int n, int m);
using namespace std;
int main() {

    return 0;
}
int potenzaRic(int n, int m){
    if(m==0) // caso base
        return 1;
    else // passo induttivo
        return n*potenzaRic(n, m-1);
}

// Scrivere un programma che, a partire da una stringa inserita da tastiera, dice se il numero di vocali nella stringa è pari oppure dispari
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    char str[100];
    int cont=0;
    cout<<"Inserisci una stringa: "<<endl;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='o'|| str[i]=='u')
            cont++;
    }
    if(cont%2==0)
        cout<<"Il numero delle vocali è pari";
    else
        cout<<"Il numero delle vocali è dispari";
    return 0;
}
// Scrivere un programma che, data una stringa inserita da tastiera, scambia il primo carattere con l'ultimo carattere e lo stampa
// str="informatica" -> "anformatici"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    char str[100],let;
    cout<<"Inserisci una stringa: "<<endl;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i+1]=='\0'){
            let=str[0];
            str[0]=str[i];
            str[i]=let;
        }
    }
    cout<<str<<endl;
    return 0;
}
// Scrivere una funzione che a partire da due numeri interi li trasforma nel loro reciproco
// reciproco *a=2 -> *a=1/*a
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
void Reciproco(int *a, int *b);
int main() {

    return 0;
}
void Reciproco(int *a, int *b){
    *a=1/ *a;
    *b=1/ *b;
}
