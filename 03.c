#include<stdio.h>

main()
{
	char name[100]= "AASHISH";
	int i;
	
	for(i=0;name[i]!=NULL;i++)
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
