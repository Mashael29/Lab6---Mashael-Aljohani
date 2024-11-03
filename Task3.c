#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *Numbers=malloc(sizeof(int));
	if(Numbers==NULL)
	{
		printf("Memory allocation failed \n");
		return 1;
	}

	char Choice;
	int counter=0;
	int sum=0;

	printf("Enter a sample interger value: ");
        scanf("%d",&Numbers[counter]);
	sum+=Numbers[counter];
	counter++;
	do
	{
             printf("Do you want to add more samples? (y/n): ");
	     scanf(" %c",&Choice);

		if(Choice=='Y' || Choice=='y')
         	{
		Numbers=realloc(Numbers,(counter+1)*sizeof(int));
		if(Numbers==NULL)
		{
			printf("Memory reallocation failed \n");
		}

		printf("Enter a sample interger value: ");
                scanf("%d",&Numbers[counter]);
		sum+=Numbers[counter];
		counter++;
		}
        	
	} while (Choice=='Y' || Choice =='y');


	printf("you entered the following samples: ");
	for(int i=0;i<counter;i++)
	{
		printf("%d ",Numbers[i]);
		
	}

        float Average=(float)sum/counter;
        printf("\nCalculated average (DC value): %.2f\n",Average);

	printf("Final adjusted samples after DC shift: ");
	for(int i=0;i<counter;i++)
	{
		Numbers[i]-=Average;
		printf("%d ",Numbers[i]);
	}
	printf("\n");

	free(Numbers);
	return 0;
}

