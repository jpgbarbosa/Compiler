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
int temp1 = (*(int*)  sp->locals[2]);
int temp2 = 1;
if (temp1!=temp2) goto ELSE0;
int temp3 = 3;
(*(int*) sp->locals[4] ) = temp3;
goto ENDCYCLE0;
ELSE0:
int temp4 = 2;
if (temp1!=temp4) goto ELSE1;
int temp5 = 4;
(*(int*) sp->locals[4] ) = temp5;
goto ENDCYCLE0;
ELSE1:
int temp6 = 5;
(*(int*) sp->locals[4] ) = temp6;
goto ENDCYCLE0;
ENDCYCLE0:
int temp7 = 1;
goto EPILOGUE_main;

/*Redirector*/
goto exit;
redirector:
EPILOGUE_main: ;
exit:
;

}

