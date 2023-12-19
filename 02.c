#include<stdio.h>

main()
{
	char ch;
	printf("Enter The VALUE Of CH =");
	scanf("%c",&ch);
	
	if(ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
	}
		
	printf("The Uppercase of the character is: %c\n", ch);
	
}
