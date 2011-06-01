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
int temp1 = 8;
(*(int*) sp->locals[2] ) = temp1;
int temp2 = (*(int*)  sp->locals[2]);
int temp3 = 10;
int temp4 = temp2 == temp3;
if (!temp4) goto ELSE0;
int temp5 = 10;
int temp6 = 1;
int temp7 = 5;
int temp8 = temp6 + temp7;
int temp9 = 4;
int temp10 = temp8 + temp9;
int temp11 = temp5 == temp10;
(*(int*) sp->locals[4] ) = temp11;
goto ENDIF0;
ELSE0: ;
int temp12 = 15;
(*(int*) sp->locals[4] ) = temp12;
ENDIF0: ;
printf("%d\n", (*(int*) sp->locals[4] ));

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

