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

   printf("L�tfen bir integer de�eri giriniz...\n");
   scanf("%d",&sayi);

   printf("L�tfen bir float de�eri giriniz...\n");
   scanf("%f",&kesirliSayi);

   printf("L�tfen bir double de�eri giriniz...\n");
   scanf("%lf",&kesirliSayi2);

   printf("L�tfen bir karakter de�eri giriniz...\n");
   scanf(" %c",&karakter);

   printf("L�tfen bir 4 karakter de�eri giriniz...\n");
   scanf("%s",&karakterDizisi);


   printf("Girdi�iniz sayi: %d\n",sayi);
   printf("Girdi�iniz sayi: %f\n",kesirliSayi);
   printf("Girdi�iniz sayi: %lf\n",kesiliSayi2);
   printf("Girdi�iniz sayi: %c\n",karakter);
   printf("Girdi�iniz sayi: %s\n",karakterDizisi);



    return 0;
}
