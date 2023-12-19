#include<stdio.h>

main()
{
	char name[100]= "aashish";
	int i;
	
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]-32);
		}
	}
}
