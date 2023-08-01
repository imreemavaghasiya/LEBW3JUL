#include<stdio.h>
#include<conio.h>

 main()

{
  int a,b;
  printf("Which Number Tabel = ");
  scanf("%d",&b);
  for(a=1;a<=b;a++)
     {
      printf(" %d x %d = %d\n",b,a,b*a);
     }

}
