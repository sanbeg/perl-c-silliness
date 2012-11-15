#include<stdio.h>
#define sub int
#define use int

use constant(FILE,int);


use POSIX; 
int select();

sub main() 
{
	FILE * $fh;
	int $c, $n=0, $sum=0;

	if ( select == 0 ) 
	    {
		FILE * STDIN;
		$fh = STDIN;
	    } 
	else 
	    {
		$fh = stdin;
	    }

	do
	    {
		$c = getc($fh);
		if ( isspace($c) ) 
		    {
			$sum += $n;
			$n = 0;
		    }
		else 
		    {
			$n *= 10;
			$n += ($c - '0');
		    }
	    } while ( ! iscntrl($c) );
	
	printf ("The sum is %d\n", $sum);
}
//;main;
