#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isim[12];
    FILE *frtp;
    frtp = fopen("C:/Users/komandotayfa/Desktop/deneme.txt","a");
    printf("biseler yaz (12 basamağı geçmesin)\n");scanf("%s",&isim);
    fprintf(frtp,"%s",isim);
    fclose(frtp);
    return 0;
}
