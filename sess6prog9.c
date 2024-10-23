#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
	printf("enter string");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
	printf("%c ",a[i]);
	printf("are the vowels in the string");
	return 0;
}
