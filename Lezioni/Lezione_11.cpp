// Creare una funzione che dati tre valori naturali, se tra questi c'è (almeno) una coppia restituisce 1 altrimenti -1

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int coppia(int a, int b, int c); // dichiarazione

int main() {
    cout<<coppia(1,1,2); // chiamata
    return 0;
}

int coppia(int a, int b, int c){
    if(a==b || b==c || a==c)
        return 1;
    else
        return -1;
}

// Creare una funzione che ricevuto uno struct frazione rappresenta numeratore e denominatore di una frazione, riduce la frazione ai minimi termini e restituisce la struttura.

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct frazione{
    int numeratore;
    int denominatore;
};
struct frazione MinimiTermini(int num, int den);

int main() {
    return 0;
}

// 3/2 4/3 5/2 sono ridotte ai minimi termini
// 6/3 4/2 non sono ridotte ai minimi termini -> diventano 2/1

struct frazione MinimiTermini(struct frazione fraz){
    int i;
    for(i=1;i<=fraz.numeratore && i<=fraz.denominatore;i++){
        if(fraz.numeratore%i==0 && fraz.denominatore%i==0){ // non è ridotta ai minimi termini
            fraz.numeratore=fraz.numeratore/i;
            fraz.denominatore=fraz.denominatore/i;
        }
    }
    return fraz;
}


// Scrivi una funzione mcd che calcoli il mcd tra due numeri a e b passati come parametro formale.
// MCD= Massimo Comun Divisore

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int mcd (int a, int b);

int main() {
    int num1,num2;
    cout<<"Inserisci un numero: "<<endl;
    cin>>num1;
    cout<<"Inserisci un numero: "<<endl;
    cin>>num2;
    cout<<mcd(num1,num2);
    return 0;
}
// a=6 b=3 -> mcd=3
int mcd (int a, int b){
    int i, divMax=1;
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0)
            divMax=i;
    }
    return divMax;
}

// SANREMO (da continuare)

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct Cantante{
    char InizialeNome;
    char InizialeCanzone;
    int Follower;
    int Riproduzioni;
    int IndicePopolarita;
};

int main() {
    // srand(time(NULL));
    struct Cantante vet[10];
    int i,sommaRiproduzioni=0,prodFollower=1,cont=0;
    for(i=0;i<10;i++){
        cout<<"Inserisci iniziale nome: "<<endl;
        cin>>vet[i].InizialeNome;
        cout<<"Inserisci iniziale canzone: "<<endl;
        cin>>vet[i].InizialeCanzone;
        vet[i].Follower=rand()%50001+50000;
        vet[i].Riproduzioni=rand()%100001+100000;
        vet[i].IndicePopolarita=vet[i].Follower+vet[i].Riproduzioni;
    }
    cout<<vet[0].InizialeCanzone<<endl;
    for(i=0;i<10;i++){
        if(i<5)
            sommaRiproduzioni+=vet[i].Riproduzioni;
    }
    cout<<"Somma Riproduzioni: "<<sommaRiproduzioni<<endl
    for(i=0;i<10;i++){
        if(vet[i].InizialeNome=='a' || vet[i].InizialeNome=='e' || vet[i].InizialeNome=='i'|| vet[i].InizialeNome=='o'|| vet[i].InizialeNome=='u')
            prodFollower*=vet[i].Follower; // prende il valore di follower fino a quel momento e lo moltiplica per il numero di follower di quel cantante
    }
    cout<<"\nProdotto Follower: "<<prodFollower<<endl;
    for(i=0;i<10;i++){
        if(vet[i].IndicePopolarita%2==0)
            cont++;
    }
    cout<<"\nI cantanti popolari sono in "<<cont<<endl;
    // Continua dal punto 6



    return 0;
}
