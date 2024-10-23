#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i;
	printf("enter string");
	fgets(str1,100,stdin);
	for(i=0;str1[i]!='\0';i++)
	str2[i]=str1[i];
	printf("thus copied ");
	puts(str2);
	return 0;
}
