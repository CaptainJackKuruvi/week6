#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j,s,mo=0,le=101;
	char a[100];
	int b[26];
	printf("enter a string");
	fgets(a,100,stdin);
	n=strlen(a)-1;
	for(i=1;i<=26;i++)
	{
	    s=0;
	    for(j=0;j<n;j++)
	    if(a[j]==96+i)
	    s++;
	    b[i-1]=s;
	}
	for(i=0;i<26;i++)
	{
	    if(b[i]>mo)
	    mo=b[i];
	    if(b[i]<le&&b[i]!=0)
	    le=b[i];
	}
	for(i=0;i<26;i++)
	{
	    if(b[i]==mo)
	    printf("%c -most repeated\n",97+i);
	    if(b[i]==le)
	    printf("%c -least repeated\n",97+i);
	}
	return 0;
}
