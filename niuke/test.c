#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int put(){};
void Test(void)
{
    char *str = (char *) malloc(100);
    strcpy(str, "hello");
    free(str);
    if (str != NULL)
    {
        strcpy(str, "world");
        printf(str);
    }
}
int main()
{

	int *a = (int *)malloc(3 * sizeof(int));
	*a = 1;
	char *b = 0;
	printf("%d\n", *a);
	printf("%x\n", a);
	free(a);
	printf("%d\n", *a);
	printf("%x\n", a);
	*a = 2;
	printf("%d\n", *a);

	printf("%d\n", sizeof(put));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));

	Test();
	return 0;
}
