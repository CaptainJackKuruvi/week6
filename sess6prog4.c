#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,l1,l2;
	printf("enter string");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
	if(a[i]>65&&a[i]<91)
	{
		a[i]=a[i]+32;
	}
	printf("thus converted ");
	puts(a);
	return 0;
}
