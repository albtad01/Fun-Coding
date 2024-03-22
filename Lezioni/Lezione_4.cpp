
// 1) Introduzione alle struct: definizione struttura Persona e riempimento variabile.

#include <iostream>
using namespace std;

struct Persona{
    int eta;
    char iniziale;
    char nome[100];
};

int main() {
    struct Persona p;
    int i;
    p.eta=16;
    p.iniziale='e';
    for(i=0;i<100;i++){
        cout<<"Inserisci nome: "<<endl;
        cin>>p.nome[i];
    }
    return 0;
}
// 2) Differenze stampa con un for o con due for applicato alle strutture.

#include <iostream>
using namespace std;

struct Persona{
    int eta;
    char iniziale;
    char nome[100];
};

int main() {
    struct Persona p;
    int i;
    p.eta=16;
    p.iniziale='e';
    for(i=0;i<100;i++){
        cout<<"Inserisci nome: "<<endl;
        cin>>p.nome[i];
        cout<<p.nome<<endl; // così vedi volta volta come si aggiorna il nome
    }
    cout<<p.eta<<endl;
    cout<<p.nome<<endl; // così lo vedi stampato tutto insieme
    return 0;
}

// 3) Definire una struttura dati per un punto nel piano cartesiano ed associare un nome al punto.
// Definisci successivamente un vettore di punti ciascuno con valori a caso.

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

struct point{
    double x;
    double y;
    char nome;
};

int main() {
    struct point vett[10];
    // srand(time(NULL));
    int i;
    for(i=0;i<10;i++){
        vett[i].x=rand();
        vett[i].y=rand();
        vett[i].nome='A'+(char)i;
        cout<< vett[i].x<<endl;
        cout<<vett[i].y<<endl;
        cout<<vett[i].nome<<endl;
    }
    return 0;
}


// 4) Definire la struttura punto, creare un vettore di 10 punti con la x e la y randomici, compresi tra 0 e 100, visualizzare il vettore generato.
// Per ogni punto del vettore dire se si trova sugli assi o in quale quadrante del piano cartesiano.

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct Punto{
    double x;
    double y;
    char nome;
};

int main() {
    // srand(time(NULL));
    struct Punto vett[10];
    int i;
    for(i=0;i<10;i++){
        vett[i].x=rand()%101;
        vett[i].y=rand()%101;
        vett[i].nome='A'+(char)i;
        cout<<vett[i].x<<endl;
        cout<<vett[i].y<<endl;
        cout<<vett[i].nome<<endl;
    }
    for(i=0;i<10;i++){
        if(vett[i].x==0 || vett[i].y==0)
            cout<<"Il punto "<<vett[i].nome<<" si trova negli assi"<<endl;
        if(vett[i].x>0 && vett[i].y>0)
            cout<<"Il punto "<<vett[i].nome<<" si trova nel primo quadrante"<<endl;
        if(vett[i].x<0 && vett[i].y>0)
            cout<<"Il punto "<<vett[i].nome<<" si trova nel secondo quadrante"<<endl;
        if(vett[i].x<0 && vett[i].y<0)
            cout<<"Il punto "<<vett[i].nome<<" si trova nel terzo quadrante"<<endl;
        if(vett[i].x>0 && vett[i].y<0)
            cout<<"Il punto "<<vett[i].nome<<" si trova nel quarto quadrante"<<endl;
    }
    return 0;
}

// 5) Uguale al 4, ma con stampa più "compatta".

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct Punto{
    double x;
    double y;
    char nome;
};

int main() {
    // srand(time(NULL));
    struct Punto vett[10];
    int i;
    for(i=0;i<10;i++){
        vett[i].x=rand()%101;
        vett[i].y=rand()%101;
        vett[i].nome='A'+(char)i;
        cout<<vett[i].nome<<"("<<vett[i].x<<","<<vett[i].y<<")"<<endl;
    }
    for(i=0;i<10;i++){
        if(vett[i].x==0 || vett[i].y==0)
            cout<<"Il punto "<<vett[i].nome<<" si trova negli assi"<<endl;
        if(vett[i].x>0 && vett[i].y>0)
            cout<<"Il punto "<<vett[i].nome<<" si trova nel primo quadrante"<<endl;
        if(vett[i].x<0 && vett[i].y>0)
            cout<<"Il punto "<<vett[i].nome<<" si trova nel secondo quadrante"<<endl;
        if(vett[i].x<0 && vett[i].y<0)
            cout<<"Il punto "<<vett[i].nome<<" si trova nel terzo quadrante"<<endl;
        if(vett[i].x>0 && vett[i].y<0)
            cout<<"Il punto "<<vett[i].nome<<" si trova nel quarto quadrante"<<endl;
    }
    return 0;
}

// 6) Definire una struttura Alunno con nome, cognome, media, professore preferito, altezza e numero preferito.
// Definire successivamente un vettore di alunni di una classe.
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

struct Alunno{
    char nome[10];
    char cognome[10];
    double media;
    char professore[10];
    double altezza;
    int numeropreferito;
};

int main() {
    struct Alunno alu;
    struct Alunno vet[20];
    return 0;
}
