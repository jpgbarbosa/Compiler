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
int temp1 = 10;
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
int temp12 = 0;
(*(int*) sp->locals[4] ) = temp12;
goto ENDIF0;
ELSE0: ;
int temp13 = 15;
(*(int*) sp->locals[4] ) = temp13;
int temp14 = 20;
(*(int*) sp->locals[4] ) = temp14;
ENDIF0: ;
sp->locals[5] = (int*) malloc(sizeof(int));
int temp15 = 0;
(*((int*) sp->locals[5])) = temp15;
CYCLE0: ;
int temp16 = (*(int*)  sp->locals[5]);
int temp17 = 5;
int temp18 = temp16 < temp17;
if (!temp18) goto ENDCYCLE0;
int temp19 = (*(int*)  sp->locals[5]);
int temp20 = 2;
int temp21 = temp19 == temp20;
if (!temp21) goto ELSE1;
goto INCRCYCLE0;
ELSE1: ;
int temp22 = printf("%d\n", (*(int*)  sp->locals[5]));;
INCRCYCLE0: ;
int temp23 = (*(int*)  sp->locals[5])++;
goto CYCLE0;
ENDCYCLE0: ;
int temp24 = printf("The value is %d.\n", (*(int*)  sp->locals[4]));;
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
goto redirector;

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

