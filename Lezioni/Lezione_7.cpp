
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;
struct punto{
    double x;
    double y;
    char carattere;
};

int main() {
    // srand(time(NULL));
    struct punto vet[5];
    int i;
    double perimetro=0;
    for(i=0;i<5;i++){
        vet[i].x=rand()%10+1;
        vet[i].y=rand()%10+1;
        vet[i].carattere='A'+(char)i;
    }
    // Ciascun punto del vettore rappresenta un vertice di un poligono.
    // Calcolare il perimetro del poligono.
    // Distanza tra due punti:
    // sqrt((x2-x1)^2+(y2-y1)^2) P1(0;0) P2(1;1)
    for(i=0;i<5;i++){
        if(i!=4)
            perimetro=perimetro+sqrt((vet[i+1].x-vet[i].x)^2+(vet[i+1].y-vet[i].y)^2);
        else
            perimetro=perimetro+sqrt((vet[0].x-vet[i].x)^2+(vet[0].y-vet[i].y)^2);
    }
    cout<<"Il perimetro è "<<perimetro<<endl;
    return 0;
}


// Dichiarare un vettore di 10 elementi con numeri casuali da 120 a 200.
// Stampare a video il vettore
// Trovare l'elemento pari massimo all'interno del vettore.
// vet[10]= 130 150 121 179 173 190 123 145 199 178
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int vet[10],i,maxPari=0;
    for(i=0;i<10;i++){
        vet[i]=rand()%81+120;
        cout<<vet[i]<<" "<<endl;
    }
    for(i=0;i<10;i++){
        if(vet[i]%2==0 && vet[i]>maxPari)
            maxPari=vet[i];
    }
    cout<<"Massimo Pari: "<<maxPari<<endl;
    return 0;
}

// Creare un vettore delle caratteristiche di 10 computer dentro un negozio, con spazio casuale da 100 a 500 giga di archiviazione, giga ram da 2 a 8 giga a caso, peso computer da 1 a 3 kg, e processore con l'iniziale data da tastiera.
// Stamparlo.
// Stampare la % di computer obsoleti (con una ram sotto i 4 gb), dire qual'è lo spazio di archiviazione maggiore tra i 10 computer. Dire l'iniziale del processore con l'iniziale più grande.
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
struct CaratteristichePC{
    double GigaArchiviazione;
    double PesoComputer;
    char InizialeProcessore;
    double GigaRam;
};
int main() {
    // srand(time(NULL));
    struct CaratteristichePC vet[10];
    int i,contaRam=0;
    for(i=0;i<10;i++){
        vet[i].GigaArchiviazione=rand()%401+100;
        vet[i].GigaRam=rand()%7+2;
        vet[i].PesoComputer=rand()%3+1;
        cout<<"Inserisci l'iniziale del processore: "<<endl;
        cin>>vet[i].InizialeProcessore;
    }
    for(i=0;i<10;i++){
        cout<<vet[i].GigaArchiviazione<<" "<<vet[i].GigaRam<<" "<<vet[i].PesoComputer<<" "<<vet[i].InizialeProcessore<<" / ";
    }
    for(i=0;i<10;i++){
        if(vet[i].GigaRam<4)
            contaRam++;
    }
    cout<<"I computer con ram sotto 4 giga sono il "<<contaRam/10*100<<"%"<<endl;
    double MaxArchiviazione=0;
    for(i=0;i<10;i++){
        if(vet[i].GigaArchiviazione>MaxArchiviazione)
            MaxArchiviazione=vet[i].GigaArchiviazione;
    }
    cout<<"Il massimo è "<<MaxArchiviazione<<endl;
    char letteraMassima='a';
    for(i=0;i<10;i++){
        if(vet[i].InizialeProcessore>letteraMassima)
            letteraMassima=vet[i].InizialeProcessore;
    }
    cout<<"Il massimo carattere del processore è "<<letteraMassima<<endl;
    return 0;
}
