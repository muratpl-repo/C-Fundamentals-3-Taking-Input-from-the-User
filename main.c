#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

   int sayi;
   float kesirliSayi;
   double kesirliSayi2;
   char karakter;
   char karakterDizisi[5];

   printf("Lütfen bir integer deðeri giriniz...\n");
   scanf("%d",&sayi);

   printf("Lütfen bir float deðeri giriniz...\n");
   scanf("%f",&kesirliSayi);

   printf("Lütfen bir double deðeri giriniz...\n");
   scanf("%lf",&kesirliSayi2);

   printf("Lütfen bir karakter deðeri giriniz...\n");
   scanf(" %c",&karakter);

   printf("Lütfen bir 4 karakter deðeri giriniz...\n");
   scanf("%s",&karakterDizisi);


   printf("Girdiðiniz sayi: %d\n",sayi);
   printf("Girdiðiniz sayi: %f\n",kesirliSayi);
   printf("Girdiðiniz sayi: %lf\n",kesiliSayi2);
   printf("Girdiðiniz sayi: %c\n",karakter);
   printf("Girdiðiniz sayi: %s\n",karakterDizisi);



    return 0;
}
