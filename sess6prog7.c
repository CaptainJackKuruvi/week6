#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,flag=0,l1,l2,m;
	printf("enter string");
	fgets(a,100,stdin);
	printf("enter another string");
	fgets(b,100,stdin);
	l1=strlen(a);
	l2=strlen(b);
	if(l1>l2)
	m=l1;
	else
	m=l2;
	for(i=0;i<m;i++)
	if (a[i]!=b[i])
	{
	    printf("not equal");
	    flag=1;
	    break;
	}
	if(flag==0)
	printf("equal");
	return 0;
}
