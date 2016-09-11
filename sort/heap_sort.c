#include <stdio.h>

#define left_child(x) (2 * (x) + 1)

void swap(int *a, int *b)
{
	if(a == NULL || b == NULL)
		return;

	int tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

void sink(int *input, int from, int to)
{
	if(input == NULL || from > to || from < 0 || to < 0)
		return;
	
	int i = from;
	int tmp = input[i];
	int child = 0;

	for(; left_child(i) < to; i = child){
		child = left_child(i);
		if(child < to - 1 && input[child + 1] > input[child])
			++child;
		if(tmp < input[child])
			input[i] = input[child];
		else
			break;
	}
	input[i] = tmp;
	return;
}

void heap_sort(int *input, int num)
{
	if(input == NULL || num <= 1)
		return;

	// build heap
	for(int i = num / 2; i >= 0; --i){
		sink(input, i, num);
	}

	// heap sort
	for(int i = num - 1; i >= 0; --i){
		swap(input, input + i);
		sink(input, 0, i);
	}

	printf("heap sort output:\n");
	for(int i = 0; i < num; ++i){
		printf("%d ", input[i]);
	}
	putchar('\n');
	return;
}
