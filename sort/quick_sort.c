#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

#define insert_num 10

void Qsort(int *input, int left, int right)
{
	int choose = 0;
	if(right - left >= insert_num){
		choose = rand() % (right - left + 1) + left;
		swap(input + choose, input + right);

		int i = left, j = right - 1;
		while(1){
			while(input[i] < input[right])
				++i;
			while(input[j] > input[right])
				--j;
			if(i < j){
				swap(input + i, input + j);
				++i;
				--j;
			}
				else 
				break;
		}
		
		swap(input + i , input + right);
		Qsort(input, left, i - 1);
		Qsort(input, i + 1, right);
	}
	else
		insert_sort(input + left, right - left + 1);

}

void quick_sort(int *input, int num)
{
	if(input == NULL || num <= 1)
		return;
	
	Qsort(input, 0, num - 1);

	printf("quick sort:\n");
	for(int i = 0; i < num; i++){
		printf("%d ", input[i]);
	}
	putchar('\n');
	return;
}
