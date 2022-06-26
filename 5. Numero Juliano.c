#include<stdio.h>
#include<conio.h>
main()
{
      int a,b;
      printf("\nCalcular dia Juliano");
      printf("\nIngresa tu dia de nacimiento ");
      scanf("%i",&a);
      printf("\nIngresa tu mes de nacimiento en numero ");
      scanf("%i",&b);
      if (b==1)
         printf("Tu numero juliano es:%i",a);
      else 
           if (b==2)
           printf("Tu numero Juliano es:%i",a+31);
      else
          if (b==3)
          printf("Tu numero Juliano es:%i",a+59);   
      else 
           if (b==4)
           printf("Tu numero Juliano es:%i",a+90);
      else 
           if (b==5)
           printf("Tu numero Juliano es:%i",a+120);
      else 
           if (b==6)
           printf("Tu numero Juliano es:%i",a+151);
      else 
           if (b==7)
           printf("Tu numero Juliano es:%i",a+181);
      else 
           if (b==8)
           printf("Tu numero Juliano es:%i",a+212);
      else 
           if (b==9)
           printf("Tu numero Juliano es:%i",a+242);
      else 
           if (b==10)
           printf("Tu numero Juliano es:%i",a+273);
      else 
           if (b==11)
           printf("Tu numero Juliano es:%i",a+303);
      else 
           if (b==12)
           printf("Tu numero Juliano es:%i",a+334);
getch();
}
