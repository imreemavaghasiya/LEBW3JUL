#include<stdio.h>
#include<conio.h>

 main()
{
    int s=1,p;
  printf("Enter value = ");
  scanf("%d",&p);
	do{
	     if(s%2==0)
	     {
	       printf("%d\n",s);

	     }
	     s++;
	 }while(s<=p);
}
