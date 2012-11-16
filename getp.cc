#include <stdio.h>
#include <ctype.h>
#include <sys/select.h>

#define sub int
#define use int

use constant(char,int);
use constant(FILE,int);

use English;
use POSIX; 

sub main() 
{
	FILE * $ifh;
	if ( select == 0 ) 
	    {
		FILE * STDIN;
		$ifh = STDIN;
	    } 
	else 
	    {
		$ifh = stdin;
	    }
	
	int $i, $c=-1;
	char * $cb, $ca[1000];
	$cb=$ca;
	
	for( $i=0; not iscntrl($c); ++$i ) 
	    {
		$c = getc($ifh);
		$cb[$i] = $c;
	    };
	
	if ( $cb[0] != 0 ) 
	    {
		$cb[$i] = 0;
	    }
	else 
	    {
		char * $LIST_SEPARATOR;
		$LIST_SEPARATOR="";
		$cb="@cb";
	    };
	
	printf("%s", $cb);
}

//;main;
