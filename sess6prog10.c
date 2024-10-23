#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],chr;
	int i,p;
	printf("enter string");
	fgets(a,100,stdin);
	printf("enter character");
	scanf("%c",&chr);
	printf("enter position");
	scanf("%d",&p);
	for(i=0;a[i]!='\0';i++)
	{
		if(i<p)
		b[i]=a[i];
		else if(i==p)
		b[i]=chr;
		else
		b[i]=a[i-1];
	}
	b[i]='\0';
	printf("inserted ");
	puts(b);
	return 0;
}
