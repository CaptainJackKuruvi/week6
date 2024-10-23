#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
	printf("enter string");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		if(a[i+1]>96&&a[i+1]<123)
		a[i+1]=a[i+1]-32;
	}
	if(a[0]>96&&a[0]<123)
	a[0]=a[0]-32;
	puts(a);
	return 0;
}
