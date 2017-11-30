#include <stdio.h>
int main()
{
    FILE *f;
    int sum=0, value=0;
    
    f=fopen("sum.dat","r");
    if(!f)
    {
        printf("\nImpossibile aprire sum.dat, il file non esiste!\n");
        sum=0;
    }
    else
    {
        printf("\nLeggo nel file sum.dat ...");
        fscanf(f,"%d",&sum);
        fclose(f);
    }
    
    printf("\nValore letto dal file = %d",sum);
    
    printf("\nInserisci un intero da sommare = ");
    scanf("%d",&value);
    
    sum=sum+value;
    printf("\nSomma = %d",sum);
    
    printf("\n0Salvo il valore nel file sum.dat ...\n");
    f=fopen("sum.dat","w");
    fprintf(f,"%d\n",sum);
    fclose(f);
    
    return 0;
}
