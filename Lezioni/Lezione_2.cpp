
// Inserisci un numero pari
// (do-while in questo caso perché ti dà la possibilità di poter inserire il numero)

#include <iostream>
using namespace std;

int main() {
    int n=0;
    do{
        cout<<"Inserisci numero pari: "<<endl;
        cin>>n;
    }while(n%2!=0);
    return 0;
}

// Riempire un vettore di interi e poi stamparlo

#include <iostream>
using namespace std;

int main() {
    int i,v[5];
    for(i=0;i<5;i++){
        cout<<"Inserisci numero: "<<endl;
        cin>>v[i];
        cout<<v[i]<<endl;
    }

    for(i=0;i<5;i++)
        cout<<v[i]<<endl;
    return 0;
}

// Contare quante vocali si hanno dentro una parola e sostituire ogni vocale con un asterisco.

#include <iostream>
using namespace std;
int main(){
    char parola[5];
    int contavocali=0,i;

    for (i=0; i<5; i++){
        cout<<"Dammi una parola: " <<endl;
        cin>>parola[i];
    }

    for (i=0; i<5; i++){
        if (parola[i]== 'a' || parola[i]=='e' || parola[i]=='i' || parola[i]=='o' || parola[i]=='u'){
            contavocali++;
            parola[i]='*';
        }
        cout<<parola[i]<<endl;
    }
    cout<<"le vocali sono "<<contavocali<<endl;
    cout<<parola<<endl;
    return 0;
}
