#include<stdio.h>
#include<conio.h >
main()

{
   int a=1,p,f=1;
   printf("Enter a Value = ");
   scanf("%d",&p);
   do{
       f=f*a;
       a++;


     }while(a<=p);
     printf(" F = %d",f);
}
