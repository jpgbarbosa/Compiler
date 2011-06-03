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
int temp0 = 2;
sp->outgoing[0] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[0])) = temp0;
int temp1 = 2;
sp->outgoing[1] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[1])) = temp1;
_ra = 0;
goto gcd;
return0:

printf("Wonderful!\n" );

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
int temp2 = 10;
(*(int*) sp->locals[2] ) = temp2;
int temp3 = (*(int*)  sp->locals[2]);
int temp4 = 10;
int temp5 = temp3 == temp4;
if (!temp5) goto ELSE0;
int temp6 = 10;
int temp7 = 1;
int temp8 = 5;
int temp9 = temp7 + temp8;
int temp10 = 4;
int temp11 = temp9 + temp10;
int temp12 = temp6 == temp11;
(*(int*) sp->locals[4] ) = temp12;
int temp13 = 0;
(*(int*) sp->locals[4] ) = temp13;
goto ENDIF0;
ELSE0: ;
int temp14 = 15;
(*(int*) sp->locals[4] ) = temp14;
int temp15 = 20;
(*(int*) sp->locals[4] ) = temp15;
ENDIF0: ;
sp->locals[5] = (int*) malloc(sizeof(int));
int temp16 = 0;
(*((int*) sp->locals[5])) = temp16;
CYCLE0: ;
int temp17 = (*(int*)  sp->locals[5]);
int temp18 = 5;
int temp19 = temp17 < temp18;
if (!temp19) goto ENDCYCLE0;
int temp20 = (*(int*)  sp->locals[5]);
int temp21 = 2;
int temp22 = temp20 == temp21;
if (!temp22) goto ELSE1;
goto ENDCYCLE0;
ELSE1: ;
printf("%d\n" , (*(int*)  sp->locals[5]));
INCRCYCLE0: ;
int temp23 = (*(int*)  sp->locals[5])++;
goto CYCLE0;
ENDCYCLE0: ;
printf("The value is %d and parameters %d - %d.\n" , (*(int*)  sp->locals[4]), (*(int*)  sp->locals[0]), (*(int*)  sp->locals[1]));
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

