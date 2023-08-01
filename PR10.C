#include<stdio.h>
#include<conio.h>
 main()

{
  int a=1,b,c;
  printf("Enter start Tabel = ");
  scanf("%d",&b);
  printf("How many Tabel = ");
  scanf("%d",&c);

    do{
       printf(" %d * %d = %d\n",a,b,a*b);
       a++;

      }while(a<=c);

}
