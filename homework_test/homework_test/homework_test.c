#include <stdio.h>
void findChar(char sent[], int find);
void findChar(char sent[], int find)
{

	int array[100] = { 0 };
	int ctr = 0;

	for (int i = 0; i < 100; i++)
	{if (sent[i] == find)
		{array[i] = i;}}

	for (int i = 0; i < 100; i++)
	{if (array[i] > 0)
		{ctr++;}}

	printf("There are %d instances of '%c', at adresses: ", ctr, find);
	for (int i = 0; i < 100; i++)
	{
		if (array[i] > 0)
		{printf("%d, ", array[i]);}
	}
	printf("\n\n\n");
}

int main(void) {
	char sent[100];	
	char* ptr = sent;
	char find;

	printf("Enter Sentence ");
	gets(sent);

	printf("\nChoose Char ");
	scanf_s("%c", &find);

	printf("You are looking for '%c' in '%s' \n", find, ptr);
	findChar(ptr, find);
}