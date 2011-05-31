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
int temp0 = _ra = 0;
goto gcd;
return0:
;

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
sp->locals[3] = (int*) malloc(sizeof(int));
sp->locals[4] = (int*) malloc(sizeof(int));
int temp1 = 5;
int temp2 = 2;
int temp3 = temp1 < temp2;
int temp4 = 0;
int temp5 = 0;
int temp6 = temp4 == temp5;
int temp7 = temp3 || temp6;
(*(int*) sp->locals[4] ) = temp7;

printf("%d\n", temp7);

/*Epilogue*/
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
goto redirector;
gcdskip:

/*Redirector*/
goto exit;
redirector:
if( _ra == 0 ) goto return0;
exit:
;

}

