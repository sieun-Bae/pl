#include <stdio.h>

char*  strcpy(char* arr2, const char* arr)
{
	int i=0;
	while (arr[i] != '\0') { arr2[i] = arr[i]; i++; }
	
	arr2[i] = '\0';
	
	return arr2;	
}

int main()
{
	char str1[30] = "I love Programming Language!";
	char str2[30];
	strcpy(str2, str1);
	printf("str1: %s\nstr2: %s\n", str1, str2);

	return 0;
}
