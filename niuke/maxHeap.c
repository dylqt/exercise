#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int max = 0;
	unsigned int block[] = {1024 * 1024, 1024, 1};
	
	for(int i = 0; i < 3; i++){
		for(int count = 1; ; count++){
			void *bl = malloc(max + block[i] * count);
			if(bl){
				max += block[i] * count;
				free(bl);
			}
			else
				break;
		}
	}
	 printf("max = %u\n", max);
}
