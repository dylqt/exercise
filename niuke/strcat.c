#include <stdio.h>
#include <string.h>
int main()
{
	char p1[15]= "abcd",*p2= "ABCD", str[50]= "xyz"; 
	strcpy(str+2,strcat(p1+2,p2+1)); 
	printf("%s\n",str);
	printf("%s\n",p1);
	printf("%s\n", strcat(p1 + 2, p2 + 1));
}
