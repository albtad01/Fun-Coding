*** HTML

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
<body class="coloresfondo">
<h2 style="color:green">Titolo più piccolo</h2>
<hr />
<p align="left" class="colorebianco">
<b>Testo in grassetto</b>
<br />
<i>Corsivo</i>
<br />
<u>Sottolineato</u>
</p>
<ul type="A">
<li>Primo</li>
<li>Secondo</li>
<li>Terzo</li>
</ul>

<img  width=70px src="https://www.repstatic.it/content/nazionale/img/2022/02/06/113623030-663e0bfb-0d59-4ac8-8597-64525a6e9f39.jpg"/>
<br />
<img src="http://www.abbonamenti.it/immagini/cop_250x330/261.jpg"/>

</body>
</html>

<!DOCTYPE html>
<html>
<head>

<style>

</style>
</head>
<body align="center">
<h1>LINKS</h1>
<h4>PER MAGGIORI INFORMAZIONI SUI BLINK SI POSSONO VISITARE I SEGUENTI SITI:</h4>

<a  href="http://www.blink182.com">http://www.blink182.com</a>
<br />
<a href="http://members.xoom.it/blink_182">http://members.xoom.it/blink_18</a>
<br />
<a href="http://members.xoom.it/blink_182">quello che appare</a>
<h4>OPPURE SCRIVERE AL SEGUENTE INDIRIZZO:</h4>
<img src="https://digilander.libero.it/bongoboy/html/esercizi/esercizio_14/mail.gif"/>

</body>
</html>

**** C++

// Scrivere il codice di una funzione ricorsiva f(n) che restituisce 2^n.
// 2^0=1
// 2^3=8
// ...
// Scrivere il codice di una funzione ricorsiva f(b,n) che restituisce b^n
// Scrivere il codice di una funzione f(b,n) che restituisce b^n

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
using namespace std;
int potenzadue(int n);
int potenzan(int b,int n);
int potenzannonricorsiva(int b,int n);
int main() {

    return 0;
}
int potenzadue(int n){
    if(n==0) // caso base
        return 1;
    return 2*potenzadue(n-1);
}
int potenzan(int b,int n){
    if(n==0)
        return 1;
    return b*potenzan(b,n-1);
}
int potenzannonricorsiva(int b,int n){
    int pot=1;
    for(int i=0;i<n;i++){
        pot=pot*b; // 2^3= 2*2*2
    }
    return pot;
}

// Scrivere una funzione che ricevute basi e altezza di un trapezio ne restituisca l'area

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
using namespace std;
double AreaTrapezio(double basemaggiore, double baseminore, double altezza);
int main() {

    return 0;
}
double AreaTrapezio(double basemaggiore, double baseminore, double altezza){
    double area;
    area=(basemaggiore+baseminore)*altezza/2;
    return area;
}

// Scrivere un programma che chieda una stringa all'utente, sostituisce tutti i caratteri maiuscoli della stringa con i corrispondenti minuscoli
// tolower da maiuscolo a minuscolo
// toupper da minuscolo a maiuscolo
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
using namespace std;
int main() {
    char str[100];
    cout<<"Inserisci una stringa: "<<endl;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        str[i]=tolower(str[i]);
    }
    cout<<str<<endl;
    return 0;
}

// Scrivere un programma che chiede due stringhe all'utente, e conta quante volte nella prima stringa è contenuta interamente la seconda.
// str1= ciaociaociao
// str2= ciao
// -> 3
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
using namespace std;
int main() {
    char str1[100],str2[100];
    int cont=0,lung,contlung=0,j=0;
    cout<<"Inserisci la prima stringa: "<<endl;
    cin>>str1;
    cout<<"Inserisci la seconda stringa: "<<endl;
    cin>>str2;
    lung=(int)strlen(str2);

    for(int i=0;str2[i]!='\0' && str1[j]!='\0';i++){
        if(str2[i]==str1[j])
            contlung++;
        else{
            contlung=0;
            i=-1;
        }
        if(contlung==lung){
            cont++;
            contlung=0;
            i=-1;
        }
        j++;
    }
    cout<<str2<<" sta in "<<str1<<" esattamente "<<cont<<" volte."<<endl;
    return 0;
}

// Scrivere una funzione che riceve in input un numero e lo lascia invariato se è divisibile per 6, altrimenti lo trasforma nel primo numero successivo che è divisibile per 6
// 4 -> 6
// 10 -> 12
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
void trasformasei(int *num);
using namespace std;
int main() {

    return 0;
}
void trasformasei(int *num){
    while(*num%6!=0){
        *num=*num+1;
    }
}
