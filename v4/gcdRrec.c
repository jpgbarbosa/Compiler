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
int temp0 = 4;
(*((int*) sp->locals[1])) = temp0;
int temp1 = (*(int*)  sp->locals[1]);
int temp2 = 1;
if (temp1!=temp2) goto ELSE0;
char temp3[1025]; temp3[0] = '\0';strcat(temp3, "First");
printf("%s\n", temp3);
goto ENDCYCLE0;
ELSE0: ;
int temp4 = 2;
if (temp1!=temp4) goto ELSE1;
char temp5[1025]; temp5[0] = '\0';strcat(temp5, "Second");
printf("%s\n", temp5);
goto ENDCYCLE0;
ELSE1: ;
char temp6[1025]; temp6[0] = '\0';strcat(temp6, "Third");
printf("%s\n", temp6);
goto ENDCYCLE0;
ENDCYCLE0: ;
char temp7[1025]; temp7[0] = '\0';strcat(temp7, "End");
printf("%s\n", temp7);
int temp8 = 0;
goto EPILOGUE_main;

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
double temp9 = 2.000000;
sp->parent->returnValue = (double*) malloc(sizeof(double));
(*((double*) sp->parent->returnValue)) = temp9;
goto EPILOGUE_recursive;

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
EPILOGUE_main: ;
exit:
;

}

