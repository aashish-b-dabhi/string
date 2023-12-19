#include<stdio.h>

main()
{
	char ch;
	printf("Enter The VALUE Of CH =");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
	}
		
	 printf("The lowercase of the character is: %c\n", ch);
	
}
