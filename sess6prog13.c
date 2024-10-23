#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,p=0;
	printf("enter string");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		if(a[i+1]=='t')
		if(a[i+2]=='h')
		if(a[i+3]=='e')
		if(a[i+4]==' ')
		p++;
	}
	if(a[0]=='t')
	if(a[1]=='h')
	if(a[2]=='e')
	if(a[3]==' ')
	p++;
	printf("number of 'the's in the given string is %d",p);
	return 0;
}
