#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char seq[1000];
	int length, i, count;


	while( scanf("%s", seq) ==1 )
	{
		count= 0;
		length = strlen( seq );

		for (i=0 ; i < length ; i++ )
		{
		if ( seq[ i ] == 'G' || seq[ i ] == 'C' )
			{
			count++;
			}
		}

	printf("=> %d\n", (100*count/length));
	}
}
