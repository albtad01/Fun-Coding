// Carica un vettore Vet di N componenti con N <=100 con numeri interi minori o uguali a 99
// Successivamente rileggi il vettore aggiornando  un secondo vettore Vet2, formato da 10 componenti, in modo da ottenere, alla fine, la quantità della somma dei valori inferiori a 10 nella prima posizione di Vet2, nella seconda posizione di Vet2 la somma dei valori tra 10 e 19 e così via...
// vet[N]= contenitore di numeri, successione di numeri

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    int N=100,i;
    int Vet[N], Vet2[10];
    for(i=0;i<100;i++){
        Vet[i]=rand()%100;
        if(Vet[i]<10)
            Vet2[0]=Vet2[0]+Vet[i];
        if(Vet[i]>=10 && Vet[i]<=19)
            Vet2[1]=Vet2[1]+Vet[i];
        if(Vet[i]>=10 && Vet[i]<=29)
            Vet2[2]=Vet2[2]+Vet[i];
        // ...
    }
    for(i=0;i<10;i++)
        cout<<Vet2[i]<<endl;
    return 0;
}

// Ragionamenti su passaggi per copia/ riferimento
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
void Fun(int *a, int *b, int c, int d);
int main() {
    int num1=2,num2=4,num3=6,num4=7;
    Fun(&num1,&num2,num3,num4);
    cout<<num1<<endl;
    return 0;
}
void Fun(int *a, int *b, int c, int d){
    int somma=0,prodotto;
    *a=*a+*b;
    prodotto=*b*d;
}

// Scrivere un programma che riceve in input una stringa minuscola.
// Verificare che la stringa e trasforma le prime tre lettere e l'ultima lettera in maiuscola.
// str= 'e' 'l' 'i' 's' 'a' '\0'

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

int main() {
    int i;
    char str[100];
    cout<<"Inserisci una stringa: "<<endl;
    cin>>str;
    for(i=0;str[i]!='\0';i++){
        if(i<=2)
            str[i]=isupper(str[i]);
        if(str[i+1]=='\0')
            str[i]=isupper(str[i]);
    }
    cout<<str<<endl;
    return 0;
}
// Scrivere un programma che riceve in input una stringa, ne calcola la lunghezza N.
// Ricevere un' altra stringa e trasformare le prime N lettere in minuscole
// e successivamente copiare le prime 4 lettere della prima stringa all'interno della seconda stringa.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

int main() {
    char str1[100],str2[100];
    int N,i;
    cout<<"Inserisci la prima stringa: "<<endl;
    cin>>str1;
    N=(int)strlen(str1);
    cout<<"Inserisci la seconda stringa: "<<endl;
    cin>>str2;
    for(i=0;str2[i]!='\0';i++){
        if(i<N)
            str2[i]=tolower(str2[i]);
    }
    strncpy(str2,str1,4);
    return 0;
}
// Scrivere un programma in cui dichiarare un vettore di 10 elementi.
// Inserire all'interno del vettore la successione di Fibonacci

// 1 1 2 3 5 8 13...

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

int main() {
    int vet[100];
    int i;
    for(i=0;i<100;i++){
        if(i==0)
            vet[i]=1;
        else if(i==1)
            vet[i]=vet[i-1];
        else
            vet[i]=vet[i-1]+vet[i-2];
    }
    for(i=0;i<10;i++)
        cout<<vet[i]<<endl;
    return 0;
}
