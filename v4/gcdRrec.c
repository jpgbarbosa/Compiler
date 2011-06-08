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
int g1;

/*Main Block */
sp = (frame*)malloc(sizeof(frame));
/*Main's body.*/
sp->locals[1] = (int*) malloc(sizeof(int));
sp->locals[2] = (int*) malloc(sizeof(int));
sp->locals[3] = (int*) malloc(sizeof(int));
sp->locals[4] = (int*) malloc(sizeof(int));
int temp0 = 2;
(*(int*) sp->locals[2] ) = temp0;
int temp1 = 0;
(*(int*) sp->locals[1] ) = temp1;
CYCLE0: ;
int temp2 = (*(int*)  sp->locals[1]);
int temp3 = 2;
int temp4 = temp2 < temp3;
if (!temp4) goto ENDCYCLE0;
int temp5 = 0;
(*(int*) sp->locals[4] ) = temp5;
CYCLE1: ;
int temp6 = (*(int*)  sp->locals[4]);
int temp7 = 3;
int temp8 = temp6 < temp7;
if (!temp8) goto ENDCYCLE1;
int temp9 = (*(int*)  sp->locals[4])++;
INCRCYCLE1: ;
int temp10 = (*(int*)  sp->locals[4])++;
goto CYCLE1;
ENDCYCLE1: ;
goto ENDCYCLE1;
INCRCYCLE0: ;
int temp11 = (*(int*)  sp->locals[1])++;
goto CYCLE0;
ENDCYCLE0: ;
int temp12 = 1;
goto EPILOGUE_main;

/*Redirector*/
goto exit;
redirector:
EPILOGUE_main: ;
exit:
;

}

