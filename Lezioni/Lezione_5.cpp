// 1) Definisci una struttura "terna" caratterizzata da 3 numeri interi.
// Definire un vettore di 5 terne.
// Ogni terna ha 3 numeri casuali da 1 a 100.
// Dire quante terne hanno somma maggiore di 100.

#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

struct terna{
    int num1;
    int num2;
    int num3;
};

int main() {
    struct terna vet[5];
    // srand(time(NULL));
    int i,cont=0;
    for(i=0;i<5;i++){
        vet[i].num1=rand()%100+1;
        vet[i].num2=rand()%100+1;
        vet[i].num3=rand()%100+1;
        if(vet[i].num1+vet[i].num2+vet[i].num3>100)
            cont++;
        cout<<vet[i].num1<<" "<<vet[i].num2<<" "<<vet[i].num3<<endl;
    }

    cout<<"Le terne maggiore di 100 sono "<<cont<<endl;
    return 0;
}

// 2) Definisci una struttura aspettoPersona caratterizzata da la sua iniziale, altezza e peso
// Definire un vettore aspetto di 3 persone.
// Associare ad ogni persona un valore random di peso da 1 a 100 e di altezza da 150 a 190 ed inserire la sua iniziale da tastiera.
// Stampare a video i vettori ottenuti.
// Stampare l'iniziale della persona più alta.

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct aspettoPersona{
    char iniziale;
    double altezza;
    double peso;
};

int main() {
    struct aspettoPersona vet[3];
    int i;
    char inizialeAltezzaMax = '\0';
    double maxAltezza=0;
    // srand(time(NULL));
    for(i=0;i<3;i++){
        vet[i].peso=rand()%100+1;
        vet[i].altezza=rand()%41+150;
        cout<<"Inserisci un iniziale: "<<endl;
        cin>>vet[i].iniziale;
    }
    for(i=0;i<3;i++){
        cout<<"Iniziale: "<<vet[i].iniziale<<" Peso: "<<vet[i].peso<<" Altezza: "<<vet[i].altezza<<endl;
    }
    for(i=0;i<3;i++){
        if(vet[i].altezza>maxAltezza){
            maxAltezza=vet[i].altezza;
            inizialeAltezzaMax=vet[i].iniziale;
        }
    }
    cout<<"L'iniziale della persona più alta è "<<inizialeAltezzaMax<<endl;
    return 0;
}

// Dato un vettore di 5 celle, inserisci numeri casuali testa (1) e croce (0). Lanciare una moneta per ogni cella finché il vettore non è tutto composto da valori uguali.
// Dire quanti tentativi sono stati eseguiti fino ad ottenere il valore ottenuto.
// 1 0 cont=1
// 1 1 0 cont=2
// 1 1 1 0 cont=3
// 1 1 1 0 cont=4
// 1 1 1 1 0 cont=5
// 1 1 1 1 1 -> stampa cont=5

#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() {
    // srand(time(NULL));
    int vet[5],i,cont=0;
    for(i=0;i<5;i++){
        vet[i]=rand()%2;
        if(i>0){
            while(vet[i]!=vet[i-1]){
                cont++;
                vet[i]=rand()%2;
            }
        }
    }
    cout<<"Abbiamo dovuto rilanciare la monetina "<<cont<<" volte"<<endl;
    return 0;
}
