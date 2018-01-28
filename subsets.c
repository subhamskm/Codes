#include <stdio.h>
#include <string.h>

int main(void) {
	char str[100000];
	scanf("%s",str);
	int i,j,len=strlen(str);
	for(i=0;i<(1<<len);i++)
	{
	    for(j=0;j<len;j++)
	        if(i&(1<<j))
	            printf("%c",str[j]);
	    printf("\n");
	}
	return 0;
}

/*
A big advantage of bit manipulation is that it can help to iterate over all the subsets of an N-element set. As we all know there are 2N possible subsets of any given set with N elements. What if we represent each element in a subset with a bit. A bit can be either 0 or 1, thus we can use this to denote whether the corresponding element belongs to this given subset or not. So each bit pattern will represent a subset.

Consider a set A of 3 elements.
A = {a, b, c}

Now, we need 3 bits, one bit for each element. 1 represent that the corresponding element is present in the subset, whereas 0 represent the corresponding element is not in the subset. Let’s write all the possible combination of these 3 bits.

0 = (000)2 = {}
1 = (001)2 = {c}
2 = (010)2 = {b}
3 = (011)2 = {b, c}
4 = (100)2 = {a}
5 = (101)2 = {a, c}
6 = (110)2 = {a, b}
7 = (111)2 = {a, b, c}
*/
