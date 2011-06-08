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
(*((int*) sp->locals[1])) = temp0;
char temp1[1025]; temp1[0] = '\0';0;
int temp3 = 2;
sp->outgoing[0] = (int*) malloc(sizeof(int));
(*((int*) sp->outgoing[0])) = temp3;
_ra = 0;
goto recursive;
return0: ;
double  temp4 = *((double *) sp->returnValue);
char temp2[256];
sprintf(temp2, "%lf", temp4);
strcat(temp1, temp2);
printf("%s\n", temp1);
char temp5[1025]; temp5[0] = '\0';char temp6[256];
sprintf(temp6, "%d", *((int* ) sp->locals[1]));
strcat(temp5, temp6);
printf("%s\n", temp5);
int temp7 = 0;
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
double temp8 = 2.000000;
sp->parent->returnValue = (double*) malloc(sizeof(double));
(*((double*) sp->parent->returnValue)) = temp8;
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

