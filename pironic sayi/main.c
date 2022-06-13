#include <stdio.h>

int main()
{
    int sayi,i;
    i = 0;
    printf("sayi gir:\n");
    scanf("%d",&sayi);
    for(0;i <= (sayi/2);){
        if(sayi == i * (i + 1)){
            printf("%d = %d * %d Pranic sayidir",sayi,i,(i + 1));
            return 0;
        }
        i = i + 1;
    }
    printf("%d prinonic degil",sayi);
    return 0;
}
