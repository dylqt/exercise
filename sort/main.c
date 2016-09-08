#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
#include <time.h>

int great(int num1, int num2);
int less(int num1, int num2);
int main()
{
	int num = 100;
	int *input = (int *)malloc(num * sizeof(int));
	srand(time(NULL));
	for(int i = 0; i < num; i++){
		input[i] = rand() % 100;
	}

	printf("source input : \n");
	for(int i = 0; i < num; ++i){
		printf("%d ", input[i]);
	}
	putchar('\n');

//	insert_sort2(input, num, less);
//	shell_sort(input, num);
	shell_sort2(input, num, less);
	return 0;
}

int great(int num1, int num2)
{
	return num1 > num2;
}

int less(int num1, int num2)
{
	return num1 < num2;
}
