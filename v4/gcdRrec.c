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
int temp1 = 4;
int temp2 = temp0 + temp1;
int temp3 = temp2;
int temp4 = 2;
int temp5 = temp3 * temp4;
(*((int*) sp->locals[1])) = temp5;
char temp6[1025]; temp6[0] = '\0';0;
int temp8 = 2;
sp->outgoing[0] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[0])) = temp8;
_ra = 0;
goto recursive;
return0: ;
double  temp9 = *((double *) sp->returnValue);
char temp7[256];
sprintf(temp7, "%lf", temp9);
strcat(temp6, temp7);
printf("%s\n", temp6);
char temp10[1025]; temp10[0] = '\0';char temp11[256];
sprintf(temp11, "%d", *((int* ) sp->locals[1]));
strcat(temp10, temp11);
printf("%s\n", temp10);
int temp12 = 0;
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
double temp13 = 2.000000;
sp->parent->returnValue = (double*) malloc(sizeof(double));
(*((double*) sp->parent->returnValue)) = temp13;
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
if( _ra == 0 ) goto return0;
EPILOGUE_main: ;
exit:
;

}

