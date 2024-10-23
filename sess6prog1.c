#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	int i,l=-1;
	printf("enter string");
	fgets(str1,100,stdin);
	for(i=0;str1[i]!='\0';i++)
	l++;
	printf("length of string is %d",l);
	return 0;
}
