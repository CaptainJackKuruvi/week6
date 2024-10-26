#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,d=0,v=0,c=0,ws=0;
	char a[100];
	printf("enter a string");
	fgets(a,100,stdin);
	n=strlen(a)-1;
	for(i=0;i<n;i++)
	{
	    if ((a[i]>64&&a[i]<91)||(a[i]>96&&a[i]<123))
	    {
	        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
	        v++;
	        else
	        c++;
	    }
	    else if(a[i]>47&&a[i]<58)
	    d++;
	    else if(a[i]==32)
	    ws++;
	}
	printf("vowels - %d, consonants - %d, digits - %d, white spaces - %d",v,c,d,ws);
	return 0;
}
