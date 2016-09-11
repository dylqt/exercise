#include <stdio.h>
#include <stdlib.h>
void merge(int *input, int *copy, int lpos, int rpos, int rend)
{
	int len = rend - lpos + 1;
	int lend = rpos - 1;
	int tmp_pos = lpos;

	while(lpos <= lend && rpos <= rend){
		if(input[lpos] < input[rpos])
			copy[tmp_pos++] = input[lpos++];
		else
			copy[tmp_pos++] = input[rpos++];
	}

	while(lpos <= lend)
		copy[tmp_pos++] = input[lpos++];
	while(rpos <= rend)
		copy[tmp_pos++] = input[rpos++];

	for(int i = 0; i < len; --rend,++i){
		input[rend] = copy[rend]; 
	}

	return;
}

void msort(int *input, int *copy, int left, int right)
{
	if(input == NULL || copy == NULL || left >= right || left < 0)
		return;

	int center = (left + right) / 2;
	msort(input, copy, left, center);
	msort(input, copy, center + 1, right);
	merge(input, copy, left, center + 1, right);
	
	return;
}


void merge_sort(int *input, int num)
{
	int *copy = (int *)malloc(num * sizeof(int));
	
	if(copy != NULL){
		msort(input, copy, 0, num - 1);
		free(copy);

		printf("merge sort:\n");
		for(int i = 0; i < num; ++i)
			printf("%d ", input[i]);
		putchar('\n');

	}
	else
		return;
}

