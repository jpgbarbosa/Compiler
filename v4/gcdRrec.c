#include "frame.h"
#include <stdlib.h>
#include <stdio.h>

#include <string.h>

int main(int argc, char *argv[])
{
int _ra;
frame* fp = NULL;
frame* sp = NULL;

/*Main Block */
sp = (frame*)malloc(sizeof(frame));
sp->locals[0] = (char*) malloc(sizeof(char)*1024);
char temp0[1024]; strcpy(temp0, "Hello World");
strcpy(((char*) sp->locals[0]), temp0);
/*Main's body.*/
char temp1[1024]; temp1[0] = '\0';strcat(temp1, argv[1]);
0;
int temp3 = 6;
sp->outgoing[0] = (int  *) malloc(sizeof(int ));
(*((int  *) sp->outgoing[0])) = temp3;
_ra = 0;
goto factorial;
return0: ;
int  temp4 = *((int *) sp->returnValue);
char temp2[256];
sprintf(temp2, "%d", temp4);
strcat(temp1, temp2);
printf("%s\n", temp1);
char temp5[1024]; temp5[0] = '\0';char temp6[256];
sprintf(temp6, "%s", ((char *) sp->locals[0]));
strcat(temp5, temp6);
printf("%s\n", temp5);
sp->locals[1] = (int *) malloc(sizeof(int ));
int temp7 = 2;
(*((int *) sp->locals[1])) = temp7;
sp->locals[2] = (int *) malloc(sizeof(int ));
int temp8 = 2;
(*(int*) sp->locals[1] ) = temp8;
CYCLE0: ;
int temp9 = (*(int*)  sp->locals[1]);
int temp10 = 5;
int temp11 = (*(int*)  sp->locals[1]) < temp10;
if (!temp11) goto ENDCYCLE0;
int temp12 = 0;
(*(int*) sp->locals[2] ) = temp12;
CYCLE1: ;
int temp13 = (*(int*)  sp->locals[2]);
int temp14 = 5;
int temp15 = (*(int*)  sp->locals[2]) < temp14;
if (!temp15) goto ENDCYCLE1;
char temp16[1024]; temp16[0] = '\0';char temp17[256];
sprintf(temp17, "%d", *((int* ) sp->locals[2]));
strcat(temp16, temp17);
printf("%s\n", temp16);
INCRCYCLE1: ;
int temp18 = (*(int*)  sp->locals[2])++;
goto CYCLE1;
ENDCYCLE1: ;
int temp19 = (*(int*)  sp->locals[1]);
int temp20 = 3;
int temp21 = (*(int*)  sp->locals[1]) == temp20;
if (!temp21) goto ELSE0;
goto ENDCYCLE0;
ELSE0: ;
INCRCYCLE0: ;
int temp22 = (*(int*)  sp->locals[1])++;
goto CYCLE0;
ENDCYCLE0: ;
int temp23 = 0;
(*(int*) sp->locals[1] ) = temp23;
CYCLE2: ;
char temp24[1024]; temp24[0] = '\0';strcat(temp24, "Hello!");
printf("%s\n", temp24);
INCRCYCLE2: ;
goto CYCLE2;
ENDCYCLE2: ;
int temp25 = 0;
goto EPILOGUE_main;

/*METHOD: factorial */
/*Prologue*/
goto factorialskip;
factorial:
fp = sp;
sp = (frame*)malloc(sizeof(frame));
sp->parent = fp;
sp->return_address = _ra;
sp->locals[0] = (int *) malloc(sizeof(int ));
(*((int *) sp->locals[0])) = (*((int *) sp->parent->outgoing[0]));

/*Method's body.*/
int temp26 = (*(int*)  sp->locals[0]);
int temp27 = 1;
int temp28 = (*(int*)  sp->locals[0]) > temp27;
int  temp29;
if (!temp28) goto ELSE1;
int temp30 = (*(int*)  sp->locals[0]);
int temp31 = 0;
int temp32 = (*(int*)  sp->locals[0]);
int temp33 = 1;
int temp34 = (*(int*)  sp->locals[0]) - temp33;
sp->outgoing[0] = (int  *) malloc(sizeof(int ));
(*((int  *) sp->outgoing[0])) = temp34;
_ra = 1;
goto factorial;
return1: ;
int  temp35 = *((int *) sp->returnValue);
int temp36 = (*(int*)  sp->locals[0]) * temp35;
temp29 = temp36;
goto ENDIF1;
ELSE1: ;
int temp37 = 1;
temp29 = temp37;
ENDIF1: ;
sp->parent->returnValue = (int  *) malloc(sizeof(int ));
(*((int  *) sp->parent->returnValue)) = temp29;
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

