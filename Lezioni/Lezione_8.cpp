// Definire una struttura dati "Carta" con un numero intero, un seme (caratterizzato da un carattere). Definire successivamente un Mazzo di Carte (Mazzo di 20 carte).
// Associare a ciascuna carta un numero casuale da 1 a 100 e un seme che dipende dal numero:
// - Se il numero è divisibile per 10 è un jolly ('j')
// - Se è divisibile per 5 è un re ('r')
// - Se divisibile per 3 donna ('d')
// - Altrimenti è un picche ('p')
// 1) Contare e stampare il numero di re nel mazzo.
// 2) Dire se ci sono più carte jolly o più carte re.
// 3) Stampare il numero della carta picche più grande.
// 4) Stampare il numero della carta donna più piccola.
// 5) Dire se ci sono due carte jolly consecutive all'interno del mazzo oppure no.

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
struct Carta{
    int numero;
    char seme;
};
int main() {
    // srand(time(NULL));
    struct Carta vet[20];
    int i,contre=0,contjolly=0,max=0,min=100, flagjolly=0;
    for(i=0;i<20;i++){
        vet[i].numero=rand()%100+1;
        if(vet[i].numero%10==0)
            vet[i].seme='j';
        if(vet[i].numero%5==0)
            vet[i].seme='r';
        if(vet[i].numero%3==0)
            vet[i].seme='d';
        else vet[i].seme='p';
    }
    for(i=0;i<20;i++){
        if(vet[i].seme=='r')
            contre++;
        if(vet[i].seme=='j')
            contjolly++;
    }
    cout<<"Il numero di re è "<<contre<<endl;
    if(contre>contjolly)
        cout<<"Ci sono più re rispetto ai jolly"<<endl;
    else{
        if(contjolly>contre)
            cout<<"Ci sono più jolly rispetto ai re"<<endl;
        if(contjolly==contre)
            cout<<"Il numero di jolly è uguale al numero di re"<<endl;
    }
    for(i=0;i<20;i++){
        if(vet[i].seme=='p' && vet[i].numero>max)
            max=vet[i].numero;
    }
    cout<<"Il numero massimo di picche è "<<max<<endl;
    for(i=0;i<20;i++){
        if(vet[i].seme=='d' && vet[i].numero<min)
            min=vet[i].numero;
    }
    cout<<"Il numero minimo di donne è "<<min<<endl;
    for(i=0;i<20;i++){
        if(vet[i].seme=='j' && vet[i+1].seme=='j' && i!=19)
            flagjolly++;
    }
    if(flagjolly>=1)
        cout<<"Ci sono almeno due carte consecutive jolly"<<endl;
    else
        cout<<"Non ci sono almeno due carte consecutive jolly"<<endl;
    return 0;
}

// VEDI DOCUMENTO INVIATO

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
struct iphone{
    int numeromodello;
    double pesokg;
    double larghezzacm;
    double altezzacm;
    char codidentificativo;
};
int main(){
    // srand(time(NULL));
    struct iphone vet[10];
    int i;
    for(i=0;i<10;i++){
        if(i==0){
            vet[i].numeromodello=3;
            vet[i].pesokg=0.2;
            vet[i].altezzacm=4.5;
            vet[i].larghezzacm=4.5;
            vet[i].codidentificativo='a';
        }
        if(i!=0 && i%2!=0){
            vet[i].numeromodello=rand()%11+3;
            vet[i].pesokg=rand()%3;
            vet[i].larghezzacm=rand()%7+2;
            vet[i].altezzacm=rand()%7+2;
            vet[i].codidentificativo='b';
        }
        if(i!=0 && i%2==0){
            vet[i].numeromodello=rand()%10+4;
            vet[i].pesokg=rand()%4;
            vet[i].larghezzacm=rand()%7+3;
            vet[i].altezzacm=rand()%7+3;
            vet[i].codidentificativo='c';
        }
    }
    for(i=0;i<10;i++){
        cout<<"Numero Modello: "<<vet[i].numeromodello<<"\nPeso (Kg): "<<vet[i].pesokg<<"\nLarghezza (Cm): "<<vet[i].larghezzacm<<"\nAltezza (Cm): "<<vet[i].altezzacm<<"\nCodice Identificativo: "<<vet[i].codidentificativo<<"\n\n\n"<<endl;
    }
    return 0;
}
