#include <stdio.h>
#include <stdlib.h>
struct ogrenci{
    int number1;
    int number2;
};
int main()
{
    int vize_puan,fp,no,i,sayi,b;
    scanf("%d",&sayi);
    struct ogrenci ogrenci[sayi];
    b=0;
    i = 0;
    for(i;i<sayi;i++){
        printf("sirasiyla vize ve final notlarini girin:\n");scanf("%d",&vize_puan);
        scanf("%d",&fp);
        ogrenci[i].number1 = vize_puan;
        ogrenci[i].number2 = fp;
    }
    for(b;b<sayi;b++){
        printf("%d",ogrenci[b].number1);
        printf("   %d\n",ogrenci[b].number2);
    }
    return 0;
}
