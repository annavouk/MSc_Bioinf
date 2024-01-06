#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char seq[1000];
	int length, i, count=0;
	float GC = 0;

	while( scanf("%s", seq) ==1)
	{
	length = strlen( seq );

	for( i = 0 ; i < length ; i++ )
	{
		if ( seq[ i ] == 'G' || seq[ i ] == 'C' )
		{
			count++;
		}
	}
	GC = (100.0*count) / length;
	printf("GC content is %f\n", GC);
	count = 0;
	}

}
