#include<stdio.h>

main()
{
	int i = 2000,n;
	
	do{
		
		if(i % 4 == 0)
		{
			printf("%d\n",i);
		}
		
		i++;
		
	}while(i<=3000);
}