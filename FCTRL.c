#include <stdio.h>

int main(void) {
	int t,n,i,c;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    i=5,c=0;
	    while(i<=n)
	    {
	        c+=n/i;
	        i=i*5;
	    }
	    printf("%d\n",c);
	}
	return 0;
}

