#include <string.h>
 
int main()
{
    char s[81];  
    int i=0,n=0,c=0;
 
    
    gets(s);
    n=strlen(s);
    
    for(i=0;i<n/2;i++)  
    {
    	if(tolower(s[i])==tolower(s[n-i-1]))
    	c++;
 	}
 	if(c==i)
 	    printf("Esta palavra e um palindromo\n");
    else
        printf("Esta palavra nao e um palindromo\n");
 
 	 
     
    return 0;
}