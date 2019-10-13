#include <stdio.h>
main ()
{
	int parameters;
	float i,r,v;
	printf("Press 1 For finding Volatage.  :) ");
	printf("\nPress 2 For finding Current.  :) ");
	printf("\nPress 3 For finding Resistance.  :) \n");
	scanf("\n%d",&parameters);
      switch(parameters)
      {
      case 1:
      		printf("\nEnter the value of Current :");
      		scanf("%f",&i);
      		printf("\nEnter the value of Resistance :");
      		scanf("%f",&r);
      		v=i*r;
      		printf("\nThe Volatage will be %0.2f",v);
        	break;
      case 2:
      		printf("\nEnter the value of Volatge :");
      		scanf("%f",&v);
      		printf("\nEnter the value of Resistance :");
      		scanf("%f",&r);
      		i=v/r;
      		printf("\nThe Current will be %0.2f",i);
        	break;
      case 3:
      		printf("\nEnter the value of Current :");
      		scanf("%f",&i);
      		printf("\nEnter the value of Voltage :");
      		scanf("%f",&v);
      		r=v/i;
      		printf("\nThe Resistance will be %0.2f",r);
      	    break;
      	   default: 
		  printf("Invalid Choice My Friend Sorry. :( ");
	}
}
