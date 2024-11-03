
//I try to do it using funcations , but there is many mistake so i did the Task1 in Task1_1.c file
// ###### just skip this one #####
//
//
#include<stdio.h>
#include<stdlib.h>

int get_size()
{
	int size;
	printf("Enter the size of each vector: ");
	scanf("%d",&size);
	return size;
}

int allocate_vector()
{
	int size;
	int *x, *y,*z;
         x=(int*)malloc(size*sizeof(int));
         y=(int*)malloc(size*sizeof(int));
	 z=(int*)malloc(size*sizeof(int));

	 if(x==NULL || y=NULL || z=NULL)
	 {
		 printf("Memory allocation failed \n");
		 return 1;
	 }
}

void read_scalars()
{
	int *a,*b=0;
	printf("Enter the the value of a: ");
	scanf("%d", a);
	printf("Enter the value of b: ");
	scanf("%d", b);
}

int read_vector()
{
	int *x;
	int *y;
	int size;
	for(int i=0;i<size;i++)
	{
		printf("Enter the elements for X [%d]: ",i);
		scanf(" %d",&x[i]);
	}
		for(int i=0;i<size;i++)
	{
		printf("Enter the elements for Y [%d]: ",i);
		scanf(" %d",&y[i]);
	}
}

//int Result()
//{
//	int z,x,y=0;
//	int a,b=0;
//	int size;
//	for(int i=0;i<size;i++)
//	{
//	z[i]=a*x[i]+b*y[i];
//	printf("[%d]",z[i]);
//	}
//}

int main()
{
	int size=get_size();
	int *x,*y,*z;
	allocate_vector();
	read_scalars();
	read_vector();
//	Result();
//	int Result=Result();
//	printf("%d",Result);
}
