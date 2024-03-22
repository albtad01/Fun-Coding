// Scrivere un programma che prende in ingresso un nome e un cognome e li stampa concatenati.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    char nome[20],cognome[20];
    cout<<"Inserisci il nome: "<<endl;
    cin>>nome;
    cout<<"Inserisci il cognome: "<<endl;
    cin>>cognome;
    strcat(nome,cognome);
    cout<<nome<<endl;
    return 0;
}
// Scrivere un programma che prende in input due stringhe da tastiera, copia la prima stringa nella seconda stringa e restituisce la sua lunghezza.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    int l;
    char string1[100];
    char string2[100];
    cout<<"Inserisci la prima stringa: "<<endl;
    cin>>string1;
    cout<<"Inserisci la seconda stringa: "<<endl;
    cin>>string2;
    strcpy(string2,string1);
    l=(int)strlen(string2);
    cout<<l<<endl;
    return 0;
}

// Scrivere un programma che prende in input due stringhe da tastiera e inserisce nella prima stringa al posto della terza lettera una 'i' e nella seconda stringa al posto della prima lettera una 'a'
// s='elisa': s[0]= 'e' s[1]= 'l' s[2]= 'i' s[3]='s' s[4]='a' s[5]='\0'

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    char string1[100];
    char string2[100];
    cout<<"Inserisci la prima stringa: "<<endl;
    cin>>string1;
    cout<<"Inserisci la seconda stringa: "<<endl;
    cin>>string2;
    string1[2]='i';
    string2[0]='a';
    cout<<string1<<" "<<string2<<endl;
    // oppure
    for(i=0;i<100;i++){
        if(i==2)
            string1[i]='i';
        else if(i==0)
            string2[i]='a';
    }
    return 0;
}
// Scrivere un programma che prende in input due stringhe da tastiera: se sono uguali restituisce il numero di lettere che hanno, se sono diverse copia la seconda stringa nella prima stringa a partire dalla seconda lettera e la stampa

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    int l;
    char string1[100];
    char string2[100];
    cout<<"Inserisci la prima stringa: "<<endl;
    cin>>string1;
    cout<<"Inserisci la seconda stringa: "<<endl;
    cin>>string2;
    if(strcmp(string1,string2)==0){
        l=(int)strlen(string1);
        cout<<l<<endl;
    }
    else{
        strncpy(string1,string2,2);
        cout<<string1<<endl;
    }
    return 0;
}
// Scrivere una funzione che riceve in input 3 valori interi e ne restituisca la media.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
double Media(int num1, int num2, int num3);
int main() {
    int num1=2,num2=3,num3=5;
    cout<<Media(num1,num2,num3)<<endl;
    return 0;
}
double Media(int num1, int num2, int num3){
    double media;
    media=(num1+num2+num3)/3.0;
    return media;
}
// Scrivere una funzione che riceve in input 3 valori interi e ne restituisca la media.
// Scrivere una funzione che riceve in input 3 valori interi e ne calcoli la media sostituendola al primo valore per riferimento
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
double Media(int num1, int num2, int num3);
void MediaRif(double *num1, double num2, double num3);
int main() {
    int num1=2,num2=3,num3=5;
    double n1=1,n2=4,n3=6;
    cout<<Media(num1,num2,num3)<<endl;
    MediaRif(&n1,n2,n3);
    cout<<n1<<endl;
    return 0;
}
double Media(int num1, int num2, int num3){
    double media;
    media=(num1+num2+num3)/3.0;
    return media;
}
void MediaRif(double *num1, double num2, double num3){
    double media;
    media=(*num1+num2+num3)/3;
    *num1=media;
}

// Scrivere una funzione che prende 3 numeri interi in input, modifica il secondo numero trasformandolo per riferimento nel suo doppio, modifica il terzo numero trasformandolo per riferimento nel suo triplo. La funzione restituisce la somma tra i 3 numeri modificati.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int Funzione(int num1, int *num2, int *num3);
int main() {
    int num1=1,num2=2,num3=3;
    cout<<Funzione(num1,&num2,&num3)<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    return 0;
}
int Funzione(int num1, int *num2, int *num3){
    *num2=*num2*2;
    *num3=*num3*3;
    return num1+*num2+*num3;
}
