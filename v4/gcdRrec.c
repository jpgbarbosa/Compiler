#include "frame.h"
#include <stdlib.h>
#include <stdio.h>

#include <string.h>

int main()
{
int _ra;
frame* fp = NULL;
frame* sp = NULL;
int g0;

/*Main Block */
sp = (frame*)malloc(sizeof(frame));
/*Main's body.*/
sp->locals[1] = (int*) malloc(sizeof(int));
_ra=0;
goto gcd;
return0:

/*METHOD: gcd */
/*Prologue*/
goto gcdskip;
gcd:
fp = sp;
sp = (frame*)malloc(sizeof(frame));
sp->parent = fp;
sp->return_address = _ra;

/*Method's body.*/
sp->locals[2] = (int*) malloc(sizeof(int));
(*(int*) sp->locals[2] )  = (5 + 2) ;

/*Epilogue*/
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
printf("In method.\n");
goto redirector;
gcdskip:

/*Redirector*/
goto exit;
redirector:
if( _ra == 0 ) goto return0;
exit:
;

}

