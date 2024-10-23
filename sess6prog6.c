#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],chr;
	int i,l=-1;
	printf("enter string");
	fgets(a,100,stdin);
	printf("enter character");
	scanf("%c",&chr);
	for(i=0;a[i]!='\0';i++)
	l++;
	for(i=0;i<l;i++)
	if(a[i]==chr)
	{
		printf("first occurence is %d",i+1);
		break;
	}
	return 0;
}
