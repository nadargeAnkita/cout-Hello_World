#include<stdio.h>
int main()
{
	int i, j, mat1[3][3], mat2[3][3], mat3[3][3];
	printf("Enter the matrix element:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("\t %d", &mat1[i][j]);
		}
	}
	printf("Matrix Element:\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t %d", mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the matrix element:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("\t %d", &mat2[i][j]);
		}
	}
	printf("Matrix Element:\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t %d", mat2[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix Addition:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t %d",mat3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
