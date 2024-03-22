// Scrivere un programma che legge da input una stringa, fa inserire all'utente un carattere edice quante volte il carattere è dentro la stringa

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    char str[100],a;
    int i,cont=0;
    cout<<"Inserisci una stringa: "<<endl;
    cin>>str;
    cout<<"Inserisci un carattere: "<<endl;
    cin>>a;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==a)
            cont++;
    }
    cout<<"Il carattere compare nella stringa "<<cont<<" volte"<<endl;

    return 0;
}
// Leggi una stringa e verifica che sia palindroma
// ANNA INGEGNI ONNA

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    char str[100];
    int i,lung,palindroma=1;
    cout<<"Inserisci una stringa: "<<endl;
    cin>>str;
    lung=(int)strlen(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=str[lung-i-1])
            palindroma=0;
    }
    if(palindroma==0)
        cout<<"La parola non è palindroma"<<endl;
    else if(palindroma==1)
        cout<<"La parola è palindroma"<<endl;
    return 0;
}

// Leggi una stringa e verifica se contiene doppie.
// arrosto

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    char str[100];
    int i,doppie=0;
    cout<<"Inserisci una stringa: "<<endl;
    cin>>str;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==str[i+1])
            doppie++;
    }
    if(doppie!=0)
        cout<<"Ci sono delle doppie"<<endl;
    else
        cout<<"Non ci sono delle doppie"<<endl;
    return 0;
}
// Due persone hanno una quantità di denaro x e y; richiamando la funzione robinHood, equilibrare la quantità di denaro tra i due

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void robinHood(double *x, double *y);
using namespace std;
int main() {
    double x=2.0,y=8.0;
    robinHood(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
void robinHood(double *x, double *y){
    *x=(*x+*y)/2;
    *y=*x;
}
// Creare una funzione che ricevuti tre valori sottrae al maggiore metà del valore del minore.
// Creare un programma che applica tre volte la funzione a valori inseriti dall'utente.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
double Fun(int *num1, int *num2, int *num3);
using namespace std;
int main() {
    int num1,num2,num3;
    // cout cin
    cout<<Fun(&num1,&num2,&num3)<<endl;
    cout<<Fun(&num1,&num2,&num3)<<endl;
    cout<<Fun(&num1,&num2,&num3)<<endl;
    return 0;
}
double Fun(int *num1, int *num2, int *num3){
    int max=0,min=0;
    if(*num1>*num2 && *num1>*num3)
        max=*num1;
    if(*num2>*num1 && *num2>*num3)
        max=*num2;
    if(*num3>*num1 && *num3>*num2)
        max=*num3;
    if(*num1<*num2 && *num1<*num3)
        min=*num1;
    if(*num2<*num1 && *num2<*num3)
        min=*num2;
    if(*num3<*num1 && *num3<*num2)
        min=*num3;
    return max-min/2.0;
}
// Creare una funzione che ricevuti due interi rappresentanti numeratore e denominatore di una frazione, riduce la frazione ai minimi termini.
// Creare poi un programma che legga due frazioni, le riduca ai minimi termini e verifichi se hanno lo stessso denominatore
// 4/2 -> 2/1
// 6/4 -> 3/2
// FRAZIONE= NUM/DEN

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void MinimiTermini(int *num, int *den);
using namespace std;
int main() {
    int num1,num2,den1,den2;
    // cin cout
    MinimiTermini(&num1,&den1);
    MinimiTermini(&num2,&den2);
    if(den1==den2)
        cout<<"Hanno lo stesso denominatore";
    return 0;
}
void MinimiTermini(int *num, int *den){
    int i,min;
    if(*num<*den)
        min=*num;
    else
        min=*den;
    for(i=2;i<=min;i++){
        if(*num%i==0 && *den%i==0){
            *num=*num/i;
            *den=*den/i;
        }
    }
}
