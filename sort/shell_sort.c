#include <stdio.h>
void shell_sort(int *input, int num)
{
	if(input == NULL || num <= 1)
		return;

	int inc = num / 3; // increase from num / 3
	for(; inc > 0; inc /= 3){
		for(int i = inc; i < num; i++){
			int tmp = input[i];
			int j = 0;
			for( j = i; j >= inc; j -= inc){
				if(input[j - inc] > tmp)
					input[j] = input[j - inc];
				else
					break;
			}
			input[j] = tmp;
		}
	}

	printf("shell sort output:\n");
	for(int i = 0; i < num; ++i){
		printf("%d ", input[i]);
	}
	printf("\n");
	return;
}


void shell_sort2(int *input, int num, int (*compare)(int num1, int num2))
{
	if(input == NULL || num <= 1)
		return;

	int inc = num / 3; // increase from num / 3
	for(; inc > 0; inc /= 3){
		for(int i = inc; i < num; i++){
			int tmp = input[i];
			int j = 0;
			for( j = i; j >= inc; j -= inc){
				if(compare(input[j - inc] ,tmp))
					input[j] = input[j - inc];
				else
					break;
			}
			input[j] = tmp;
		}
	}

	printf("shell sort output:\n");
	for(int i = 0; i < num; ++i){
		printf("%d ", input[i]);
	}
	printf("\n");
	return;
}
