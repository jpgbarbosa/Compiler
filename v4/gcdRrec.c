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
int temp0 =  0;
int temp1 = 2;
sp->outgoing[0] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[0])) = temp1;
int temp2 = 2;
sp->outgoing[1] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[1])) = temp2;
_ra = 0;
goto gcd;
return0:
;
(*(int*) sp->locals[1] ) = temp2;
printf("Wonderful %d!\n" , (*(int*)  sp->locals[1]));
int temp3 = 0;
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
sp->parent->returnValue = (int*) malloc(sizeof(int));
(*((int*) sp->parent->returnValue)) = temp3;
goto redirector;

/*METHOD: gcd */
/*Prologue*/
goto gcdskip;
gcd:
fp = sp;
sp = (frame*)malloc(sizeof(frame));
sp->parent = fp;
sp->return_address = _ra;
sp->locals[0] = (int*) malloc(sizeof(int));
(*((int*) sp->locals[0])) = (*((int*) sp->parent->outgoing[0]));
sp->locals[1] = (int*) malloc(sizeof(int));
(*((int*) sp->locals[1])) = (*((int*) sp->parent->outgoing[1]));

/*Method's body.*/
sp->locals[2] = (int*) malloc(sizeof(int));
sp->locals[3] = (int*) malloc(sizeof(int));
sp->locals[4] = (int*) malloc(sizeof(int));
int temp4 = 10;
(*(int*) sp->locals[2] ) = temp4;
int temp5 = (*(int*)  sp->locals[2]);
int temp6 = 10;
int temp7 = temp5 == temp6;
if (!temp7) goto ELSE0;
int temp8 = 10;
int temp9 = 1;
int temp10 = 5;
int temp11 = temp9 + temp10;
int temp12 = 4;
int temp13 = temp11 + temp12;
int temp14 = temp8 == temp13;
(*(int*) sp->locals[4] ) = temp14;
int temp15 = 0;
(*(int*) sp->locals[4] ) = temp15;
goto ENDIF0;
ELSE0: ;
int temp16 = 15;
(*(int*) sp->locals[4] ) = temp16;
int temp17 = 20;
(*(int*) sp->locals[4] ) = temp17;
ENDIF0: ;
sp->locals[5] = (int*) malloc(sizeof(int));
int temp18 = 0;
(*((int*) sp->locals[5])) = temp18;
CYCLE0: ;
int temp19 = (*(int*)  sp->locals[5]);
int temp20 = 5;
int temp21 = temp19 < temp20;
if (!temp21) goto ENDCYCLE0;
int temp22 = (*(int*)  sp->locals[5]);
int temp23 = 2;
int temp24 = temp22 == temp23;
if (!temp24) goto ELSE1;
goto ENDCYCLE0;
ELSE1: ;
printf("%d\n" , (*(int*)  sp->locals[5]));
INCRCYCLE0: ;
int temp25 = (*(int*)  sp->locals[5])++;
goto CYCLE0;
ENDCYCLE0: ;
printf("The value is %d and parameters %d - %d.\n" , (*(int*)  sp->locals[4]), (*(int*)  sp->locals[0]), (*(int*)  sp->locals[1]));
int temp26 = 5;
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
sp->parent->returnValue = (int*) malloc(sizeof(int));
(*((int*) sp->parent->returnValue)) = temp26;
goto redirector;

/*Epilogue*/
EPILOGUE_gcd: ;
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
goto redirector;
gcdskip:

/*Redirector*/
goto exit;
redirector:
if( _ra == 0 ) goto return0;
EPILOGUE_main: ;
exit:
;

}

