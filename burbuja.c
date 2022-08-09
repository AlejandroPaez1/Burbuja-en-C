#include<stdio.h>
int main()
{
  int i,j,aux,arre[10];
 	for(i=0; i<10; i++)
	{
		printf("ingresa el vaalor : ");
		 scanf("%d",&arre[i]);
	}
 	for(i=1; i<10; i++)
	{
		for(j=0; j<10-i; j++)
		{
			if(arre[j]>arre[j+1])
			{
			    aux    = arre[j+1];
				arre[j+1] = arre[j];
				arre[j]   = aux;
			}
		}
	}
 	for(i=0;i<10;i++)
	{
		printf("\t  \n \t %d",arre[i]);
	}
	return 0;
}
