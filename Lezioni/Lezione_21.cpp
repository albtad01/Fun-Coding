// Date due stringhe, scrivere un programma che verifica quanti caratteri hanno in comune
// "ciao" "arrivederci" -> 4
// Successivamente, date due stringhe, dire quanti caratteri diversi hanno
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int numeroSecondi(int ore, int minuti, int secondi);
int main() {
    char str1[100], str2[100];
    int i,j,cont=0,l1,l2,l;
    cout<<"Inserisci la stringa 1: "<<endl;
    cin>>str1;
    cout<<"Inserisci la stringa 2: "<<endl;
    cin>>str2;
    for(i=0;str1[i]!='\0';i++){ // 'c'
        for(j=0;str2[j]!='\0';j++){
            if(str1[i]==str2[j])
                cont++;
        }
    }
    cout<<"I caratteri ripetuti sono "<<cont<<endl;
    l1=(int)strlen(str1);
    l2=(int)strlen(str2);
    l=l1+l2;
    cout<<"Il numero di caratteri diversi è "<<l-cont<<endl;
    return 0;
}

// Scrivere una funzione ricorsiva f(n) che restituisce 0 nel caso n sia dispari, 1+f(n/2) altrimenti.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int f(int n);
int main() {

    return 0;
}
int f(int n){
    if(n%2!=0) // caso base
        return 0;
    else // passo induttivo
        return 1+f(n/2);
}

// Scrivere una funzione ricorsiva che dato un importo di denaro iniziale, un interesse annuo e un numero di anni permette di calcolare l'importo di denaro accresciuto dagli interessi dopo il numero di anni passati.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
double DenaroInteressi(double denaro,double Interesse,int NumAnni);
int main() {

    return 0;
}
double DenaroInteressi(double denaro,double Interesse,int NumAnni){
    if(NumAnni==0)
        return denaro;
    denaro=denaro+Interesse*denaro;
    return DenaroInteressi(denaro, Interesse, NumAnni-1);
}

// HTML: Introduzione

<!DOCTYPE html>
<html>
<head>
<title>Page Title</title>
</head>
<body>

<h1 style="color:red">This is a Heading</h1>
<h2 style="color:blue">Sottotitolo</h2>
<br /><br />
<p style="color:green">This is a paragraph.</p>

<h1>Elenco non numerato</h1>
<ul type="circle">
<li>Gabriele</li>
<li>Alessandro</li>
<li>Carlo</li>
</ul>

<h1>Elenco numerato</h1>
<ol type="I">
<li>Gabriele</li>
<li>Alessandro</li>
<li>Carlo</li>
</ol>

<img src="https://mypetandme.elanco.com/sites/g/files/adhwdz651/files/styles/paragraph_image/public/2020-04/immagine_gatto_generica_0.jpg"/>

<a href="https://www.instagram.com">Vai su instagram</a>
<br /><br />
<a href="https://www.facebook.com">Vai su facebook</a>
</body>
</html>
