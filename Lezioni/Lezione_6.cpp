// Dichiarare un vettore di 10 elementi e riempirlo con valori da tastiera.
// Stampare il vettore ottenuto.
// Dire quanti numeri all'interno del vettore sono almeno il doppio del numero precedente.

#include <iostream>
using namespace std;

int main() {
    int const N=10;
    int vet[N], i, contadoppi=0;
    for(i=0;i<N;i++){
        cout<<"Inserisci un valore: "<<endl;
        cin>>vet[i];
    }
    for(i=0;i<N;i++){
        cout<<vet[i]<<endl;
    }
    for(i=0;i<N;i++){
        if(vet[i]>=2*vet[i-1] && i!=0)
            contadoppi++;
    }
    cout<<"I numeri almeno doppi del precedente sono "<<contadoppi<<endl;
    return 0;
}

//Dichiarare una struttura punto, caratterizzata da una coordinata x, una coordinata y e un carattere.
// Definire un vettore di 5 punti e riempire ciascun punto con valori casuali della x e della y da 0 a 100 e una lettera che si incrementa.
// Stampare la lettera del punto che ha la somma della coordinata x e della coordinata y più grande.
// * A(-1;-1) B(-2;-3) C(-3;-4) D(-1;-5) E(-3;-9)

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
struct punto{
    double x;
    double y;
    char lettera;
};
int main() {
    // srand(time(NULL));
    struct punto vet[5];
    int i;
    double somma=0,sommamax=0;
    char letterasommamax='a';
    for(i=0;i<5;i++){
        vet[i].x=rand()%101;
        vet[i].y=rand()%101;
        vet[i].lettera='A'+(char)i;
        cout<<vet[i].lettera<<" "<<vet[i].x<<","<<vet[i].y<<endl;
    }
    for(i=0;i<5;i++){
        somma=vet[i].x+vet[i].y;
        if(i==0) // questa riga...
            sommamax=somma; // ... e questa riga contemplano anche il caso di * (punti negativi)
        if(somma>sommamax){
            sommamax=somma;
            letterasommamax=vet[i].lettera;
        }
    }
    cout<<letterasommamax<<endl;
    return 0;
}

// Definire una struttura data che memorizza giorno, mese e anno.
// Creare in modo random 10 date di nascita.
// Fare inserire all'utente la data odierna, e verificare quante date di nascita corrispondono a maggiorenni.

// 11/12/2021
// 16/05/2001 10/10/2000 Caso semplice MAGGIORENNE
// 17/03/2010 Caso semplice NON MAGGIORENNE
// 11/11/2003 Caso in cui si capisce se maggiorenne/minorenne dal mese
// 16/12/2003 Caso in cui si deve valutare il giorno del mese

struct data{
    int giorno; // 1 - 31
    int mese; // 1 - 12
    int anno; // 1900 - 2021
};
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    // srand(time(NULL));
    struct data vet[10];
    struct data DataOdierna;
    int i,contamaggiorenni=0;
    for(i=0;i<10;i++){
        vet[i].giorno=rand()%31+1;
        vet[i].mese=rand()%12+1;
        vet[i].anno=rand()%122+1900; // mettere 2021 anziché il rand per vedere i casi particolari analizzati
        cout<<vet[i].giorno<<","<<vet[i].mese<<","<<vet[i].anno<<endl;
    }
    cout<<"Inserisci la data odierna: "<<endl;
    cout<<"Inserisci il giorno di oggi: "<<endl;
    cin>>DataOdierna.giorno;
    cout<<"Inserisci il mese corrente: "<<endl;
    cin>>DataOdierna.mese;
    cout<<"Inserisci l'anno corrente: "<<endl;
    cin>>DataOdierna.anno;
    for(i=0;i<10;i++){
        if(DataOdierna.anno-vet[i].anno>18)
            contamaggiorenni++;
        if(DataOdierna.anno==vet[i].anno){
            if(DataOdierna.mese>vet[i].mese)
                contamaggiorenni++;
            else if(DataOdierna.mese==vet[i].mese && DataOdierna.giorno>=vet[i].giorno)
                contamaggiorenni++;
        }
    }
    cout<<"I maggiorenni sono "<<contamaggiorenni<<endl;
    return 0;
}
