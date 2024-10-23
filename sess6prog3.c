#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,l1,l2;
	printf("enter string");
	fgets(a,100,stdin);
	printf("enter next string");
	fgets(b,100,stdin);
	l1=strlen(a);
	l2=strlen(b);
	for(i=l1;i<l1+l2;i++)
	a[i]=b[i-l1];
	a[l1+l2]='\0';
	printf("thus concatenated ");
	for(i=0;i<l1+l2;i++)
	printf("%c",a[i]);
	return 0;
}
