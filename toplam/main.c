#include <stdio.h>
#include <stdlib.h>

int sum_ez(int a,int b,int c);
int main()
{
    int a,b,c;printf("ortalanicak 3 sayiyi giriniz\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("ortalama %d",sum_ez(a,b,c));
    return 0;
}
int sum_ez(int a,int b,int c){
    int sum;
    sum = a+b+c;
    sum/= 3;
    return sum;
}
