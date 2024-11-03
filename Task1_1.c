#include<stdio.h>
#include<stdlib.h>

int get_size()
{
        int size;
        printf("Enter the size of each vector: ");
        scanf("%d",&size);
        return size;
}

void allocate_vector(int **x,int **y,int **z,int size)
{
         *x=(int*)malloc(size*sizeof(int));
         *y=(int*)malloc(size*sizeof(int));
         *z=(int*)malloc(size*sizeof(int));

         if(*x==NULL || *y==NULL || *z==NULL)
         {
                 printf("Memory allocation failed \n");
                 exit (1);
         }
}
void read_scalars(int *a,int *b)
{
        printf("Enter the the value of a: ");
        scanf("%d",a);
        printf("Enter the value of b: ");
        scanf("%d",b);
}
int main()
{
        int size=get_size();
        int *x,*y,*z;
	int a,b;
        allocate_vector(&x,&y,&z,size);
        read_scalars(&a,&b);

	printf("Enter the elements of vector x: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}

	printf("Enter the elements of vector y: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&y[i]);
	}

	for(int i=0;i<size;i++)
	{
		z[i]=a*x[i]+b*y[i];
	}

	printf("vector z: ");
	for(int i=0;i<size;i++)
	{
		printf("{%d}",z[i]);
	}
	printf("\n");

	free(x);
	free(y);
	free(z);

	return 0;
}
