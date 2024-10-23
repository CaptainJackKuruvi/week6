#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,l=-1;
	printf("enter string");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
	l++;
	for(i=0;i<l;i++)
	b[i]=a[l-i-1];
	b[l+1]='\0';
	printf("thus reversed ");
	puts(b);
	return 0;
}
