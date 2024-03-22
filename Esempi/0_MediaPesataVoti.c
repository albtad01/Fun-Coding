
#include <stdio.h>
#include <stdlib.h>
#define N 500
int main(int argc, const char * argv[]) {
    int voti[N], crediti[N],numvoti,totcr=0,i;
    double mediap=0;
    printf("Numero Voti Conseguiti: ");
    scanf("%d",&numvoti);
    for(i=0;i<numvoti;i++){
        printf("Crediti Esame %d: ",i+1);
        scanf("%d",&crediti[i]);
        printf("Voto Esame %d: ",i+1);
        scanf("%d",&voti[i]);
        totcr+=crediti[i];
        mediap+=voti[i]*crediti[i];
    }
    mediap=mediap/(float)totcr;
    printf("Totale Crediti= %d\n",totcr);
    printf("Media Pesata= %5.2f\n",mediap);
    return 0;
}
