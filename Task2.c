#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char string[100];
	printf("Enter a sentence: ");
	scanf("%[^\n]",string);

	int len=strlen(string); //To calculates the length of the input

	char *reversed=(char*)malloc((len+1)*sizeof(char));

	if(reversed==NULL)
	{
		printf("Memory allocation failed \n");
		return 1;
	}

	for(int i=0;i<len;i++)
	{
		reversed[i]=string[len-1-i];
	}
	reversed[len]='\0';

	printf("Reversed string: %s\n",reversed);

	free(reversed);

	return 0;
}
