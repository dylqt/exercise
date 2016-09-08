#include <stdio.h>
void insert_sort(int *input, int num)
{
	if(input == NULL || num <= 1)
		return;

	for(int i = 0; i < num; ++i){
		int tmp = input[i];
		int j = 0;
		for(j = i; j > 0 && input[j - 1] > tmp; --j){
			input[j] = input[j - 1];
		}
		input[j] = tmp;
	}

	printf("insert_sort output:\n");
	for(int i = 0; i < num; ++i){
		printf("%d ", input[i]);
	}
	printf("\n");
	return;
}

void insert_sort2(int *input, int num, int compare(int num1, int num2))
{
	if(input == NULL || num <= 1)
		return;

	for(int i = 0; i < num; ++i){
		int tmp = input[i];
		int j = 0;
		for(j = i; j > 0 && compare(input[j - 1], tmp); --j){
			input[j] = input[j - 1];
		}
		input[j] = tmp;
	}

	printf("insert_sort output:\n");
	for(int i = 0; i < num; ++i){
		printf("%d ", input[i]);
	}
	printf("\n");
	return;
}
