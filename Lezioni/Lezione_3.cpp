
// Leggere un vettore di interi di 5 posizioni e verificare se
// è palindromo, ovvero se non cambia ad essere letto dalla
// prima cella all'ultima o viceversa.

v[5]
v[5]={1,0,3,0,1} // questo vettore è palindromo
v[5]={1,0,3,1,1} // questo vettore non è palindromo

#include <iostream>
using namespace std;

int main() {
    int v[5],i,pal=1;
    for(i=0;i<5;i++){
        cout<<"Inserisci un numero: "<<endl;
        cin>>v[i];
    }
    for(i=0;i<5;i++){
        if(v[i]!=v[5-i-1])
            pal=0;
    }
    if(pal==0)
        cout<<"Il vettore non è palindromo"<<endl;
    if(pal==1)
        cout<<"Il vettore è palindromo"<<endl;
    return 0;
}

// Leggere un vettore di interi di 6 posizioni, leggere un
// ulteriore numero intero e dire quanti numeri
// memorizzati nel vettore sono inferiori e quanti
// superiori dell'ultimo numero letto.
 // (Con ciclo FOR)

v[6]={1,6,3,8,9,2} // se k=4, allora sup=3 e inf=3

#include <iostream>
using namespace std;

int main() {
    int v[6], i, k, inf=0, sup=0;
    for(i=0;i<6;i++){
        cout<<"Inserire un numero: "<<endl;
        cin>>v[i];
    }
    cout<<"Inserire il numero speciale: "<<endl;
    cin>>k;
    for(i=0;i<6;i++){
        if(v[i]>k)
            sup++;
        else if(v[i]<k)
            inf++;
    }
    cout<<"I numeri inferiori sono "<<inf<<endl;
    cout<<"I numeri superiori sono "<<sup<<endl;
    return 0;
}

// Leggere un vettore di interi di 6 posizioni, leggere un
// ulteriore numero intero e dire quanti numeri
// memorizzati nel vettore sono inferiori e quanti
// superiori dell'ultimo numero letto.
 // (Con ciclo WHILE)

#include <iostream>
using namespace std;

int main() {
    int v[6], i, k, inf=0, sup=0;
    for(i=0;i<6;i++){
        cout<<"Inserire un numero: "<<endl;
        cin>>v[i];
    }
    cout<<"Inserire il numero speciale: "<<endl;
    cin>>k;
    i=0;
    while(i<6){
        if(v[i]>k)
            sup++;
        else if(v[i]<k)
            inf++;
        i++;
    }
    cout<<"I numeri inferiori sono "<<inf<<endl;
    cout<<"I numeri superiori sono "<<sup<<endl;
    return 0;
}

// Leggere un vettore di 10 posizioni e dire se ogni
// valore memorizzato nel vettore è minore del
// quadrato del numero della cella precedente.

v[10]= 1 9 8 7 2 4 3 1 5 7

#include <iostream>
using namespace std;

int main() {
    int v[10],i,check=1;
    for(i=0;i<10;i++){
        cout<<"Inserisci un numero: "<<endl;
        cin>>v[i];
    }
    for(i=0;i<10;i++){
        if(v[i]>v[i-1]*v[i-1] && i!=0)
            check=0;
    }
    if(check==1)
        cout<<"Ogni valore memorizzato nel vettore è minore del quadrato del precedente "<<endl;
    if(check==0)
        cout<<"Non tutti i valori memorizzati nel vettore sono minori del quadrato del precedente"<<endl;
    return 0;
}
