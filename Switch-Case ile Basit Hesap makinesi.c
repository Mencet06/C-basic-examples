#include<stdlib.h>
#include<stdio.h>

int main()
{
  float num1,num2;
  float bolum;
  int sonuc;
  int secim;

  
  printf("Lutfen bir sayi giriniz:");
    scanf("%f",&num1);
  printf("Lutfen bir sayi giriniz:");
    scanf("%f",&num2);
  printf(" 1-Toplama \n 2-Cikarma \n 3-Carpma \n 4-Bolme \n");
    scanf("%d",&secim);
  switch(secim)
    {
      case 1: 
            sonuc=num1+num2;
            printf("Sonucunuz : %d ",sonuc);
            break;
      case 2: 
            sonuc=num1-num2;
            printf("Sonucunuz : %d ",sonuc);
            break;
      case 3:
            sonuc=num1*num2;
            printf("Sonucunuz : %d ",sonuc);
            break;
      case 4: 
            bolum=num1/num2;
            printf("Sonucunuz : %.2f ",bolum);
            break;


       default: 
       printf("Gecerli islem seceneginiz secmediniz!\n");
       break;


    }
    
  return 0;
  
}
