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
char temp0[1024]; temp0[0] = '\0';0;
int temp2 = 10;
sp->outgoing[0] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[0])) = temp2;
_ra = 0;
goto factorial;
return0: ;
int  temp3 = *((int *) sp->returnValue);
char temp1[256];
sprintf(temp1, "%d", temp3);
strcat(temp0, temp1);
printf("%s\n", temp0);
int temp4 = 0;
goto EPILOGUE_main;

/*METHOD: factorial */
/*Prologue*/
goto factorialskip;
factorial:
fp = sp;
sp = (frame*)malloc(sizeof(frame));
sp->parent = fp;
sp->return_address = _ra;
sp->locals[0] = (int*) malloc(sizeof(int));
(*((int*) sp->locals[0])) = (*((int*) sp->parent->outgoing[0]));

/*Method's body.*/
int temp5 = (*(int*)  sp->locals[0]);
int temp6 = 1;
int temp7 = temp5 > temp6;
int  temp8;
if (!temp7) goto ELSE0;
int temp9 = (*(int*)  sp->locals[0]);
int temp10 = 0;
int temp11 = (*(int*)  sp->locals[0]);
int temp12 = 1;
int temp13 = temp11 - temp12;
sp->outgoing[0] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[0])) = temp13;
_ra = 1;
goto factorial;
return1: ;
int  temp14 = *((int *) sp->returnValue);
int temp15 = temp9 * temp14;
temp8 = temp15;
goto ENDIF0;
ELSE0: ;
int temp16 = 1;
temp8 = temp16;
ENDIF0: ;
sp->parent->returnValue = (int*) malloc(sizeof(int));
(*((int*) sp->parent->returnValue)) = temp8;
goto EPILOGUE_factorial;

/*Epilogue*/
EPILOGUE_factorial: ;
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
goto redirector;
factorialskip:

/*Redirector*/
goto exit;
redirector:
if( _ra == 0 ) goto return0;
if( _ra == 1 ) goto return1;
EPILOGUE_main: ;
exit:
;

}

