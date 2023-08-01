#include<stdio.h>
#include<conio.h>

main()

{
   int a=1,p,sum=0;
   printf("Enter Value = ");
   scanf("%d",&p);

   do{
       sum=sum+a;
       a++;

     }while(a<=p);
     printf("sum = %d",sum);

}
