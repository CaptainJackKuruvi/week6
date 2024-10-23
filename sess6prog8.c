#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,l=-1,flag=0;
	printf("enter string");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
	l++;
	for(i=0;i<l;i++)
	b[i]=a[l-i-1];
	b[l+1]='\0';
	for(i=0;i<l;i++)
	if (a[i]!=b[i])
	{
	    printf("not palindrome");
	    flag=1;
	    break;
	}
	if(flag==0)
	printf("palindrome");
	return 0;
}
