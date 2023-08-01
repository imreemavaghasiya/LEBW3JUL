#include<stdio.h>
#include<conio.h>
main()

{
   int a,y;
   printf("Start Year 2000 to Enter Year = ");
   scanf("%d",&y);
   for(a=2000;a<=y;a++)
      {
	 if(a%4==0)
	  {
	    printf("Your Leape Year = %d\n",a);

	  }


      }

}
