// Scrivere una funzione che prende una lettera e restituisce 1 se la lettera è una vocale, 0 se è una consonante


#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int vocale(char a);

int main() {
    char a;
    cout<<"Inserisci una lettera: "<<endl;
    cin>>a;
    cout<<vocale(a);
    return 0;
}
int vocale(char a){
    if(a=='a' || a=='e') //..
        return 1;
    else
        return 0;
}

// Scrivere una funzione che prende in input 3 numeri interi e restituisce il più piccolo.

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int minore(int num1,int num2,int num3);
int main() {
    int a=2,b=3,c=5;
    cout<<minore(a,b,c);

    return 0;
}
int minore(int num1,int num2,int num3){
    if(num1<num2 && num1<num3)
        return num1;
    else if(num2<num1 && num2<num3)
        return num2;
    else return num3;
}

// Scrivere una funzione che prende in input tre valori interi e restituisce il più grande - il piu piccolo /2
// (Con Approfondimento: Utilizzo di più funzioni in un programma)

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int maggiore(int num1,int num2,int num3);
int minore(int num1,int num2,int num3);
double funzione(int a,int b,int c);

int main() {
    int num1=2,num2=4,num3=9;
    cout<<funzione(num1,num2,num3);
    return 0;
}
double funzione(int a,int b,int c){
    int min, max;
    min=minore(a,b,c);
    max=maggiore(a,b,c);
    return (max-min)/2;
}
int minore(int num1,int num2,int num3){
    if(num1<num2 && num1<num3)
        return num1;
    else if(num2<num1 && num2<num3)
        return num2;
    else return num3;
}
int maggiore(int num1,int num2,int num3){
    if(num1>num2 && num1>num3)
        return num1;
    else if(num2>num1 && num2>num3)
        return num2;
    else return num3;
}

// Soluzione esercizio BioInformatica

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct Paziente{
    int CodPaz;
    int eta;
    int CodVariante;
};

int main() {
    struct Paziente vet[100];
    int i,max=0,min=100,annomin,flag=0,contBeta=0,contDelta=0,contDeltaPlus=0,contOmicron=0;
    // srand(time(NULL));
    for(i=0;i<100;i++){
        vet[i].CodPaz=rand()%8001+1000;
        vet[i].eta=rand()%100+1;
        vet[i].CodVariante=rand()%4+1;
    }
    for(i=0;i<100;i++){
        if(vet[i].CodVariante==4)
            cout<<vet[i].CodPaz;

    }
    for(i=0;i<100;i++){
        if(vet[i].eta>max)
            max=vet[i].eta;
        if(vet[i].eta<min)
            min=vet[i].eta;
    }
    annomin=2022-min;
    cout<<annomin<<endl;
    cout<<max;
    for(i=0;i<100;i++){
        if(vet[i].CodVariante==2 && vet[i+1].CodVariante==2 && vet[i+2].CodVariante==2 && i!=99 && i!=98)
            flag=1;
    }
    if(flag==0)
        cout<<"Non ci sono due consecutivi"<<endl;
    else
        cout<<"Ci sono due consecutivi "<<endl;
    for(i=0;i<100;i++){
        if(vet[i].CodVariante==1)
            contBeta++;
        if(vet[i].CodVariante==2)
            contDelta++;
        if(vet[i].CodVariante==3)
            contDeltaPlus++;
        if(vet[i].CodVariante==4)
            contOmicron++;
    }
    cout<<"Variante Beta: "<<contBeta/100*100<<"%"<<endl;
    if(contBeta>contDelta && contBeta>contDeltaPlus && contBeta>contOmicron)
        cout<<"La variante più diffusa è la Beta"<<endl;
    // ...
    return 0;
}

// Richieste:
// % degli studenti promossi a fine anno
// quanti studenti hanno come numero preferito il 3
// Trova Quanti studenti hanno CodiceStudente dispari
// Dire quanti studenti hanno il numero preferito divisibile per il codice studente

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct Studente{
    int CodiceStudente;
    double MediaVoti;
    int NumeroPreferito;
};
int main() {
    // CODICE STUDENTE DA 1 a 100, Media Voti da 4 a 10, Numero Preferito da 1 a 200
    struct Studente vet[20];
    int i, contSufficienti=0,contTre=0,contDispari=0,cont=0;
    //srand(time(NULL))
    for(i=0;i<20;i++){
        vet[i].CodiceStudente=rand()%100+1;
        vet[i].MediaVoti=rand()%7+4;
        vet[i].NumeroPreferito=rand()%200+1;
        if(vet[i].MediaVoti>=6)
            contSufficienti++;
        if(vet[i].NumeroPreferito==3)
            contTre++;
        if(vet[i].CodiceStudente%2!=0)
            contDispari++;
        if(vet[i].NumeroPreferito%vet[i].CodiceStudente==0)
            cont++;
    }
    cout<<"Il numero degli studenti promossi è in percentuale "<<contSufficienti/20*100<<"%"<<endl;
    cout<<contTre;
    // ...
    return 0;
}

// Richiesta: Trovare i primi 10 multipli di 7
// Soluzione: int i; i parte da 1 e arriva a 10 i<=10 e stampi volta volta:
// 7 14 21 28 ... 70

// A casa: Trovare l'mcm tra due numeri
