
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 100000

char *mystrcat(char *s1, char *s2);
int main()
{
	char str1[MAX_LEN] = "abc", str2[] = "def";
	mystrcat(str1,str2);
	printf("%s", str1);
	return 0;
}
char *mystrcat(char *s1, char *s2)
{
	char *l;
	  int n=0;

	  l= s1 + strlen(s1);

	  while( *(s2 + n)!= 0 ){
		  *(l+ n) = *(s2 + n);
		  n++;
	  }

	  return s1;

}




