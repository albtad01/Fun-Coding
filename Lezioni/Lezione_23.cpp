**HTML

CAMBIO DIMENSIONI IMMAGINE:
width=30px height=50px

SOLUZIONE ESERCIZIO A CASA
 <!DOCTYPE html>
 <html>
 <head>
 <title>Page Title</title>
 <style>
 h1{color: red; font-size:50px;}
 .verde{color:green}
 .coloresfondo{background-color:#e0ffff}
 .bordoblu{border: solid; border-color: blue}
 </style>
 </head>
 <body class="coloresfondo">
 <h1>Sito Web</h1>
 <p>Contenuto del sito</p>
 <img width=50px src="https://thumbs.dreamstime.com/b/icona-piana-di-vettore-internet-vada-al-segno-web-per-progettazione-del-sito-logo-app-ui-illustrazione-eps-123207369.jpg"/>
 <p class="verde">Classifica dei migliori corridori</p>
 <ol class="bordoblu">
 <li>Bolt</li>
 <li>Secondo concorrente</li>
 <li>Terzo</li>
 </ol>
 <ul>
 <li style="color:red">Prova1</li>
 <li style="color:white">Prova2</li>
 <li style="color:green">Prova3</li>
 </ul>
 </body>
 </html>

SITO WEB ARTICOLO DI GIORNALE
 <!DOCTYPE html>
<html>
<head>
<title>Articoli di giornale</title>
<style>
img{border: dotted;border-color:red}
h1{color: red; font-size:50px;}
.verde{color:green}
.coloresfondo{background-color:#e0ffff}
.bordoblu{border: solid; border-color: blue}
.colorebianco{background-color:white}
.bordonero{border:solid; border-color:black; align:center}
</style>
</head>
<h2 style="color:green">Titolo più piccolo</h2>
<body class="coloresfondo">
<p class="colorebianco">Provajjhdicjdnscniu
<br />
jsklajdklsajksansxnsajsa
<br />
kcjdksjcksfjslkf
</p>
<ol type="A">
<li>Primo</li>
<li>Secondo</li>
<li>Terzo</li>
</ol>
<center>
<img  width=70px src="https://www.repstatic.it/content/nazionale/img/2022/02/06/113623030-663e0bfb-0d59-4ac8-8597-64525a6e9f39.jpg"/>
<br />
<img src="http://www.abbonamenti.it/immagini/cop_250x330/261.jpg"/>
</center>
</body>
</html>

**C++
// Scrivere una funzione ricorsiva che prende in input un numero e ne restituisce un altro di questo tipo:
// 5 -> 5+4+3+2+1=15
// 3 -> 3+2+1=6

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int funzione(int n);
int main() {

    return 0;
}
int funzione(int n){
    if(n==1)
        return 1;
    else
        return n+funzione(n-1);
}

// Scrivere una funzione che riceve in input un intervallo di tempo in formato ore, minuti, secondi e ne restituisce il numero di secondi.
// 1h 2m 40s = 60*60+2*60+40

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int ContaSecondi(int ore, int minuti, int secondi);
int main() {

    return 0;
}
int ContaSecondi(int ore, int minuti, int secondi){
    return ore*60*60+minuti*60+secondi;
}

// Definiamo il grado minimo g e il grado massimo G di una parola rispettivamente come il minimo e il massimo numero di occorrenze delle lettere nella parola. Ad esempio:
// MAMMA g=2 G=3
// POLENTA
// g=1 G=1 ORGOGLIO g=1 G=3
// Si scriva un programma C che legge una stringa di lunghezza generica che rappresenta P, calcola G e g.
// Si scriva poi una funzione che, dati in ingresso il grado massimo e minimo ne restituisca la somma.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    char str[100];
    int cont=0,G=0,g;
    g=(int)strlen(str);
    cout<<"Inserisci la parola: "<<endl;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j])
                cont++;
        }
        if(cont>G)
            G=cont;
        if(cont<g)
            g=cont;
        cont=0;
    }
    cout<<"Il grado massimo è "<<G<<endl;
    cout<<"Il grado minimo è "<<g<<endl;
    return 0;
}

// Scrivere una funzione che ricevuti i due cateti di un triangolo ne restituisce l'ipotenusa.
// abs: valore assoluto -2 -> 2 0 -> 0 1 -> 1 ...
// sqrt: restituisce la radice quadrata, es. sqrt(9)=3
Importante: sia per sqrt che per abs bisogna introdurre la libreria math.h

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
using namespace std;
double calcoloIpotenusa(double c1, double c2);
int main() {
    cout<<calcoloIpotenusa(3,2)<<endl; // 3.6
    return 0;
}
double calcoloIpotenusa(double c1, double c2){
    return sqrt(c1*c1+c2*c2);
}
