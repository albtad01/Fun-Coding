// CORREZIONE IF/ELSE SCORSO Codici_Rip8

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
        else{
            if(vet[i].numero%5==0)
                vet[i].seme='r';
            else{
                if(vet[i].numero%3==0)
                    vet[i].seme='d';
                else vet[i].seme='p';
        }
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

// Creare una struttura dati Palestrato caratterizzata da:
// -Iniziale Nome - Età - PesoKg - AltezzaCm - CodiceAllenamento
// CodiceAllenamento è un carattere che identifica un allenamento specifico della palestra
// 'A' potenzia Addominali
// 'B' potenzia Braccia
// 'G' potenzia le Gambe
// 'P' pesi
// 'S' schiena
// Creare un vettore di 10 palestrati, ciascuno con iniziale da tastiera, età casuale tra 14 e 60, peso tra 35 e 120 kg, altezza tra 150 e 190 cm e Codice Allenamento che dipende dalle caratteristiche del palestrato:
// Addominali: Età<30 e il Peso<60 kg
// Altrimenti: Braccia se Peso è tra 40 e 100 kg e Altezza < 160 cm
// Altrimenti: Gambe per chi è più alto di 170 cm
// Altrimenti: Pesi per chi è piu pesante di 100
// Altrimenti: schiena

// 1) Stampare gli iscritti in palestra con tutte le loro caratteristiche.
// 2) Ci sono più di 2 iscritti all'allenamento addominali?
// 3) Stampare il numero di iscritti per ciascun corso.
// 4) Qual è l'allenamento meno frequentato?
// 5) Stampare il numero di palestrati che allenano la schiena con un peso tra 70 e 90 kg.
// 6) Dire se ci sono due palestrati CONSECUTIVI nel vettore che partecipano allo stesso allenamento.

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct Palestrato{
    char InizialeNome;
    int Eta;
    double PesoKg;
    double AltezzaCm;
    char CodiceAllenamento;
};

int main() {
    // srand(time(NULL));
    struct Palestrato vet[10];
    int i;
    int contAddominali=0, contBraccia=0, contGambe=0, contPesi=0, contSchiena=0, contPalestrati=0, contConsecutivi=0;
    for(i=0;i<10;i++){
        vet[i].InizialeNome='a'+(char)i;
        vet[i].Eta=rand()%47+14;
        vet[i].PesoKg=rand()%86+35;
        vet[i].AltezzaCm=rand()%41+150;
        if(vet[i].Eta<30 && vet[i].PesoKg<60){
            vet[i].CodiceAllenamento='A';
            contAddominali++;
        }
        else if(vet[i].PesoKg>=40 && vet[i].PesoKg<=100 && vet[i].AltezzaCm<160){
                vet[i].CodiceAllenamento='B';
                contBraccia++;
        }
        else if(vet[i].AltezzaCm>170){
                vet[i].CodiceAllenamento='G';
                contGambe++;
        }
        else if(vet[i].PesoKg>100){
                vet[i].CodiceAllenamento='P';
                contPesi++;
        }
        else{
            vet[i].CodiceAllenamento='S';
            contSchiena++;
            if(vet[i].PesoKg>=70 && vet[i].PesoKg<=90)
                contPalestrati++;
        }
    }
    for(i=0;i<10;i++){
        cout<<"Iniziale Nome: "<<vet[i].InizialeNome<<"\nEta: "<<vet[i].Eta<<"\nPesoKg: "<<vet[i].PesoKg<<"\nAltezzaCm: "<<vet[i].AltezzaCm<<"\nCodiceAllenamento: "<<vet[i].CodiceAllenamento<<"\n\n"<<endl;
    }
    if(contAddominali>2)
        cout<<"Ci sono più di 2 iscritti al Corso Addominali"<<endl;
    else cout<<"Non ci sono più di 2 iscritti al Corso Addominali"<<endl;
    cout<<"Iscritti Addominali: "<<contAddominali<<"\nIscritti Braccia: "<<contBraccia<<"\nIscritti Gambe: "<<contGambe<<"\nIscritti Pesi: "<<contPesi<<"\nIscritti Schiena: "<<contSchiena<<endl;
    if(contAddominali< contBraccia && contAddominali<contGambe && contAddominali<contPesi && contAddominali<contSchiena)
        cout<<"Il corso Addominali è quello meno frequentato (con meno iscritti"<<endl;
    // e uguale per gli altri corsi dopo Addominali
    for(i=0;i<10;i++){
        if(vet[i].CodiceAllenamento=='S' && vet[i].PesoKg>=70 && vet[i].PesoKg<=90)
            contPalestrati++;
    }
    cout<<"I palestrati che allenano la schiena con peso tra 70 e 90 kg sono in "<<contPalestrati<<endl;
    for(i=0;i<10;i++){
        if(vet[i].CodiceAllenamento==vet[i-1].CodiceAllenamento && i!=0)
            contConsecutivi++;
    }
    if(contConsecutivi>=1)
        cout<<"Ci sono due palestrati consecutivi che fanno lo stesso allenamento"<<endl;
    else cout<<"Non ci sono due palestrati consecutivi che fanno lo stesso allenamento"<<endl;
    return 0;
}
