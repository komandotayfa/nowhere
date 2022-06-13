#include <stdio.h>
#include <stdlib.h>

int fibodeger(int n);
int main()
{
    int ust_sinir,n;
    n = 0;
    scanf("%d",&ust_sinir);
    for(n;n <= ust_sinir;n++){
        fibodeger(n);
        printf("%d\n",fibo);
    }
    return 0;
}
int fibodeger(int n)
{
    if(n=0){fibo=0;}
    if(n=1){fibo=1;}
    if(n>1){fibo=fibodeger(n-1)+fibodeger(n-2);}
    return fibo;
}
