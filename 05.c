#include<stdio.h>

main()
{
	char name[675]= "aashish";
	int i;
	
	
		if(name[i]>=65 && name[i]<=90)
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]-32);
		}
		
	
	
		for(i=1;name[i]!=NULL;i++)
		{
			if(name[i]>=97 && name[i]<=122)
			{
				printf("%c",name[i]);
			}
			else
			{
				printf("%c",name[i]+32);
			}
		}
		
}

	
