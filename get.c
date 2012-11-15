#include <stdio.h>

#define sub int
#define use int

use constant(char,int);
use English;
use POSIX();
//; POSIX->import('iscntrl'); #work around osx issue?

sub main() 
{
	char * $ifh;
	$ifh = stdin;

	if ( $ifh == 0 ) 
		{
			char * STDIN;
			$ifh = STDIN;
		};

	int $i;
	int $c;
	int $b[1000];
	char * $cb;
	$cb = $b;
	
	$c=-1;

	for( $i=0; !iscntrl($c); ++$i ) 
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
	
	printf("%s\n", $cb);
	
}

//;main;
