#include <stdio.h>
#include <string.h>

int main()
{

char seq[10000];
int length, i, startCodonFound, stopCodonFound, j=0;

printf("Insert DNA sequences separated by spaces or newline characters.\n");

while( scanf("%s",seq) == 1)
{
length = strlen(seq);
startCodonFound = 0;
stopCodonFound = 0;

for(i=0; i<length-2 ; i++)
	{
	if(seq[i] != 'A' || seq[i] != 'a' || seq[i] != 'T' || seq[i] != 't' || seq[i] != 'G' || seq[i] != 'g' || seq[i] != 'C' || seq[i] != 'c')
        	{
		startCodonFound = 2;
		break;
		}
	}

for(i=0; i<length-2 ; i++)
	{
	if((seq[i] == 'A' || seq[i] == 'a') && (seq[i+1] == 'T' || seq[i+1] == 't') && (seq[i+2] == 'G' || seq[i+2] == 'g'))
		{
		startCodonFound = 1;
		break;
		}
	}

if(startCodonFound == 1)
{
	for(j=i+3; j<length-2; j+=3)
	{
		if( (seq[j] == 'T' || seq[j] == 't') && (seq[j + 1] == 'A' || seq[j + 1] == 'a') && (seq[j + 2] == 'A' || seq[j + 2] == 'a') )
		{ stopCodonFound = 1; }
		else if( (seq[j] == 'T' || seq[j] == 't') && (seq[j + 1] == 'A' || seq[j + 1] == 'a') && (seq[j + 2] == 'G' || seq[j + 2] == 'g') )
		{ stopCodonFound = 1; }
		else if( (seq[j] == 'T' || seq[j] == 't') && (seq[j + 1] == 'G' || seq[j + 1] == 'g') && (seq[j + 2] == 'A' || seq[j + 2] == 'a') )
		{ stopCodonFound = 1; }
        }
}

if(startCodonFound == 1 && stopCodonFound == 1)
{ printf("A valid Open Reading Frame is present.\n"); }
else if(startCodonFound ==2)
{printf("Invalid character is found. This is not a DNA sequence.\n");}
else { printf("No valid Open Reading Frame is present.\n"); }
}

}
