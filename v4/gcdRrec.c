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
int temp0 = 0;
int temp1 = 2;
sp->outgoing[0] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[0])) = temp1;
int temp2 = 2;
sp->outgoing[1] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[1])) = temp2;
_ra = 0;
goto gcd;
return0: ;
int  temp3 = *((int *) sp->returnValue);
(*(int*) sp->locals[1] ) = temp3;
printf("Wonderful %d!\n" , (*(int*)  sp->locals[1]));
int temp4 = 0;
goto EPILOGUE_main;

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
int temp5 = 10;
(*(int*) sp->locals[2] ) = temp5;
int temp6 = (*(int*)  sp->locals[2]);
int temp7 = 10;
int temp8 = temp6 == temp7;
if (!temp8) goto ELSE0;
int temp9 = 10;
int temp10 = 1;
int temp11 = 5;
int temp12 = temp10 + temp11;
int temp13 = 4;
int temp14 = temp12 + temp13;
int temp15 = temp9 == temp14;
(*(int*) sp->locals[4] ) = temp15;
int temp16 = 0;
(*(int*) sp->locals[4] ) = temp16;
goto ENDIF0;
ELSE0: ;
int temp17 = 15;
(*(int*) sp->locals[4] ) = temp17;
int temp18 = 20;
(*(int*) sp->locals[4] ) = temp18;
ENDIF0: ;
sp->locals[5] = (int*) malloc(sizeof(int));
int temp19 = 0;
(*((int*) sp->locals[5])) = temp19;
CYCLE0: ;
int temp20 = (*(int*)  sp->locals[5]);
int temp21 = 5;
int temp22 = temp20 < temp21;
if (!temp22) goto ENDCYCLE0;
int temp23 = (*(int*)  sp->locals[5]);
int temp24 = 2;
int temp25 = temp23 == temp24;
if (!temp25) goto ELSE1;
goto ENDCYCLE0;
ELSE1: ;
printf("%d\n" , (*(int*)  sp->locals[5]));
INCRCYCLE0: ;
int temp26 = (*(int*)  sp->locals[5])++;
goto CYCLE0;
ENDCYCLE0: ;
printf("The value is %d and parameters %d - %d.\n" , (*(int*)  sp->locals[4]), (*(int*)  sp->locals[0]), (*(int*)  sp->locals[1]));
int temp27 = 5;
sp->parent->returnValue = (int*) malloc(sizeof(int));
(*((int*) sp->parent->returnValue)) = temp27;
goto EPILOGUE_gcd;

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

