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
0;
int temp4 = 0;
sp->outgoing[0] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[0])) = temp4;
_ra = 1;
goto recursive;
return1: ;

int temp5 = 0;
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
int temp6 = 10;
(*(int*) sp->locals[2] ) = temp6;
int temp7 = (*(int*)  sp->locals[2]);
int temp8 = 10;
int temp9 = temp7 == temp8;
if (!temp9) goto ELSE0;
int temp10 = 10;
int temp11 = 1;
int temp12 = 5;
int temp13 = temp11 + temp12;
int temp14 = 4;
int temp15 = temp13 + temp14;
int temp16 = temp10 == temp15;
(*(int*) sp->locals[4] ) = temp16;
int temp17 = 0;
(*(int*) sp->locals[4] ) = temp17;
goto ENDIF0;
ELSE0: ;
int temp18 = 15;
(*(int*) sp->locals[4] ) = temp18;
int temp19 = 20;
(*(int*) sp->locals[4] ) = temp19;
ENDIF0: ;
sp->locals[5] = (int*) malloc(sizeof(int));
int temp20 = 0;
(*((int*) sp->locals[5])) = temp20;
CYCLE0: ;
int temp21 = (*(int*)  sp->locals[5]);
int temp22 = 5;
int temp23 = temp21 < temp22;
if (!temp23) goto ENDCYCLE0;
int temp24 = (*(int*)  sp->locals[5]);
int temp25 = 2;
int temp26 = temp24 == temp25;
if (!temp26) goto ELSE1;
goto ENDCYCLE0;
ELSE1: ;
printf("%d\n" , (*(int*)  sp->locals[5]));
INCRCYCLE0: ;
int temp27 = (*(int*)  sp->locals[5])++;
goto CYCLE0;
ENDCYCLE0: ;
printf("The value is %d and parameters %d - %d.\n" , (*(int*)  sp->locals[4]), (*(int*)  sp->locals[0]), (*(int*)  sp->locals[1]));
int temp28 = 5;
sp->parent->returnValue = (int*) malloc(sizeof(int));
(*((int*) sp->parent->returnValue)) = temp28;
goto EPILOGUE_gcd;

/*Epilogue*/
EPILOGUE_gcd: ;
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
goto redirector;
gcdskip:

/*METHOD: recursive */
/*Prologue*/
goto recursiveskip;
recursive:
fp = sp;
sp = (frame*)malloc(sizeof(frame));
sp->parent = fp;
sp->return_address = _ra;
sp->locals[0] = (int*) malloc(sizeof(int));
(*((int*) sp->locals[0])) = (*((int*) sp->parent->outgoing[0]));

/*Method's body.*/
int temp29 = (*(int*)  sp->locals[0]);
int temp30 = 5;
int temp31 = temp29 > temp30;
if (!temp31) goto ELSE2;
char temp32[1025]; temp32[0] = '\0';strcat(temp32, "End RECURSIVE!\n");
printf("%s\n", temp32);
goto ENDIF2;
ELSE2: ;
printf("Calling for %d.\n" , (*(int*)  sp->locals[0]));
0;
int temp33 = (*(int*)  sp->locals[0]);
int temp34 = 1;
int temp35 = temp33 + temp34;
sp->outgoing[0] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[0])) = temp35;
_ra = 2;
goto recursive;
return2: ;

ENDIF2: ;

/*Epilogue*/
EPILOGUE_recursive: ;
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
goto redirector;
recursiveskip:

/*Redirector*/
goto exit;
redirector:
if( _ra == 0 ) goto return0;
if( _ra == 1 ) goto return1;
if( _ra == 2 ) goto return2;
EPILOGUE_main: ;
exit:
;

}

