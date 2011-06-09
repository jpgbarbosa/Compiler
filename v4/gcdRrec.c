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
char temp0[1025]; temp0[0] = '\0';0;
int temp2 = 3;
sp->outgoing[0] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[0])) = temp2;
_ra = 0;
goto trinary;
return0: ;
int  temp3 = *((int *) sp->returnValue);
char temp1[256];
sprintf(temp1, "%d", temp3);
strcat(temp0, temp1);
printf("%s\n", temp0);
int temp4 = 0;
goto EPILOGUE_main;

/*METHOD: trinary */
/*Prologue*/
goto trinaryskip;
trinary:
fp = sp;
sp = (frame*)malloc(sizeof(frame));
sp->parent = fp;
sp->return_address = _ra;
sp->locals[0] = (int*) malloc(sizeof(int));
(*((int*) sp->locals[0])) = (*((int*) sp->parent->outgoing[0]));

/*Method's body.*/
sp->locals[1] = (int*) malloc(sizeof(int));
int temp5 = (*(int*)  sp->locals[0]);
int temp6 = 2;
int temp7 = temp5 > temp6;
int  temp8;
if (!temp7) goto ELSE0;
int temp9 = 1;
temp8 = temp9;
goto ENDIF0;
ELSE0: ;
int temp10 = 0;
temp8 = temp10;
ENDIF0: ;
(*((int*) sp->locals[1])) = temp8;
int temp11 = (*(int*)  sp->locals[1]);
sp->parent->returnValue = (int*) malloc(sizeof(int));
(*((int*) sp->parent->returnValue)) = temp11;
goto EPILOGUE_trinary;

/*Epilogue*/
EPILOGUE_trinary: ;
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
goto redirector;
trinaryskip:

/*Redirector*/
goto exit;
redirector:
if( _ra == 0 ) goto return0;
EPILOGUE_main: ;
exit:
;

}

