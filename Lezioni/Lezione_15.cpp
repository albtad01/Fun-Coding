
// RIEPILOGO STRINGHE
// int v[10]= 2 90 67 8 2 1 0 9 1 2 -> vettore di 10 elementi interi
// char s[10]= 'e' 'l' 'i' 's' 'a' '\0' -> stringa= vettore di char
// s='elisa': s[0]= 'e' s[1]= 'l' s[2]= 'i' s[3]='s' s[4]='a' s[5]='\0'
// alla fine della stringa abbiamo un carattere terminatore '\0', che indica che la stringa (parola) è finita.
// 1) strlen(s) prende in input una stringa e lascia in output il numero di caratteri (ad eccezione del carattere terminatore)
// 2) strcat(s1,s2) prende in input due stringhe e le concatena: mette la prima concatenata alla seconda
// es. s1='arriv' s2='ederci' strcat(s1,s2) e restituisce 'arrivederci'
// 3) strcmp(s1,s2) prende in input due stringhe e restituisce 0 se le due stringhe sono uguali
// 4) strcpy(s1,s2) prende in input due stringhe e copia la seconda stringa nella prima
// es. strcpy(s1,s2) s1='elisa' s2='ciao' -> s1='ciao' s2='ciao'
// 5) strncpy(s1,s2,n) prende in input due stringhe e un numero intero n e copia la seconda stringa nella prima solo per i primi n elementi.
// strncpy(s1,s2,3) s1='elisa' s2='ciao' -> s1='ciasa'
// 6) strstr(s1,s2) prende in input due stringhe e ritorna una stringa che ha la prima stringa da dove parte la seconda stringa.
// es. s1='ciao' s2='ia' strstr(s1,s2)= 'iao'

// isupper: trasformare tutto in maiuscolo
// prende in input un carattere e restituisce lo stesso carattere maiuscolo
// ciao -> CIAO NO, c-> C i->I a->A o->O SI
// tolower: trasformare tutto in minuscolo (inverso di isupper)
// C->c I->i ....

// Leggere in input una stringa che al massimo può essere lunga 128 char.
// Trasformare ogni carattere in minuscolo, visualizzare la stringa e contare la sua lunghezza.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main() {
   char str[128];
   int i,n;
   cout<<"Inserisci una stringa: "<<endl;
   cin>>str;
   for(i=0;i<128;i++)
       str[i]=tolower(str[i]);
   cout<<str<<endl;
   n=(int)strlen(str); // (int) non occorre per compilatori diversi da mac
   cout<<n<<endl;
   for(i=0;i<=n;i++)
       cout<<str[i]<<endl;
   return 0;
}

// Si crei la struttura libro in cui ogni libro ha un codice numerico, numero di pagine e costo.
// Si memorizzino i dati di tre libri (codice numerico random da 500 a 2000, numero pagine random da 50 a 150 e costo inserito da tastiera) e si calcoli il costo medio per pagine dei libri e si stampino i dati dei tre libri in ordine crescente di costo per pagina.

// Costo medio per pagina: 100 pagine 15 euro -> costo medio per pagina=15/100=0,15€
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
struct Libro{
    int CodiceNumerico;
    int NumeroPagine;
    double Costo;
    double CostoMedioPerPagina;
};
int main() {
    // srand(time(NULL));
    struct Libro vet[3];
    int i;
    for(i=0;i<3;i++){
        vet[i].CodiceNumerico=rand()%1501+500;
        vet[i].NumeroPagine=rand()%101+50;
        cout<<"Inserisci il prezzo: "<<endl;
        cin>>vet[i].Costo;
        vet[i].CostoMedioPerPagina=vet[i].Costo/vet[i].NumeroPagine;
    }
    // ... (a voce)
    return 0;
}
