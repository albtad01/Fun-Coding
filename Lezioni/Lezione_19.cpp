// Scrivere una funzione che, preso in ingresso un numero intero restituisce 1 se il numero è primo, 0 altrimenti
// 3 è un numero primo perché è divisibile solo per 1 e per il numero stesso
// 7 è un numero primo perché è divisibile solo per 1 e per il numero stesso
// 4 non è un numero primo: è divisibile per 2
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int numPrimo(int num);
int main() {

    return 0;
}
int numPrimo(int num){
    int i;
    for(i=2;i<num;i++)
        if(num%i==0)
            return 0;
    return 1;
}
// 7
// 4
int numPrimoElisa(int num){
    if((num%2!=0 || num%3!=0 || num%5!=0 || num%7!=0) && num%num==0)
        return 1;
    else
        return 0;
}
// 289 ad esempio non verificato

// Scrivere una funzione che scambia due numeri interi dati in ingresso
// a b -> b diventi a ed a diventi b
// c c=a a=b b=c -> b diventato a ed a diventata b
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
void Scambia(int *num1,int *num2);
int main() {
    int a=3,b=4;
    Scambia(&a,&b);
    return 0;
}
void Scambia(int *num1,int *num2){
    int num3;
    num3=*num1;
    *num1=*num2;
    *num2=num3;
}


// Scrivere un programma che riceve in ingresso una stringa e dice quale carattere si ripete più volte
// arrosto
// vettore numerico vet che conta quante volte il carattere i sta nella stringa
// vet[0]=1 vet[1]=2 ...
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
void Scambia(int *num1,int *num2);
int main() {
    int i,vet[100],max=0,ind=0,lunghezzaStringa=0;
    char str[100];
    cout<<"Inserisci una stringa"<<endl;
    cin>>str;
    lunghezzaStringa=(int)strlen(str);
    for(i=0;i<lunghezzaStringa;i++)
        vet[i]=0; // l'errore stava qui: non avevo inizializzato il vettore a 0
    for(i=0;str[i]!='\0';i++){
        // str[0]='a'
        //
        for(int j=0;str[j]!='\0';j++)
            if(str[i]==str[j])
                vet[i]++;
    }
    for(i=0;i<lunghezzaStringa;i++)
        cout<<vet[i]<<endl;
    for(i=0;i<lunghezzaStringa;i++){
        if(vet[i]>max){
            max=vet[i];
            ind=i;
        }
    }
    cout<<"Il carattere più ripetuto nella stringa è "<<str[ind]<<endl;
    return 0;
}

// Scrivere un programma che riceve in ingresso due stringhe, dice la stringa più lunga, le concatena e cambia la terza lettera della concatenazione in 'a'

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    char str1[100],str2[100];
    int l1,l2;
    cout<<"Inserisci la prima stringa: "<<endl;
    cin>>str1;
    cout<<"Inserisci la seconda stringa: "<<endl;
    cin>>str2;
    l1=(int)strlen(str1);
    l2=(int)strlen(str2);
    if(l1>l2){
        cout<<"La stringa più lunga è "<<str1<<endl;
    }
    else
        cout<<"La stringa più lunga è "<<str2<<endl;
    return 0;
}

// Scrivere una funzione che prende in ingresso 3 numeri inter e scambia il terzo numero col secondo, il primo col secondo.
// a b c
// a->b c->b
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
void Fun(*num1,*num2,*num3);
int main() {

    return 0;
}
void Fun(*num1,*num2,*num3){
    *num1=*num2;
    *num3=*num2;
}


// Scrivere un programma che lancia 10 dadi a 6 facce e se la somma dei risultati è maggiore di 35 dice che è sopra la media
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
    int vet[10],somma=0;
    //srand(time(NULL));
    for(int i=0;i<10;i++){
        vet[i]=rand()%6+1;
        somma=vet[i]+somma;
    }
    if(somma>35)
        cout<<"E' sopra la media"<<endl;
    else
        cout<<"Non è sopra la media"<<endl;
    return 0;
}
