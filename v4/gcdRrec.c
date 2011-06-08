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
int temp1 = (*(int*)  sp->locals[1]);
NEXTLABEL0: ;
int temp2 = 1;
if (temp1 != temp2) goto NEXTLABEL1;
char temp3[1025]; temp3[0] = '\0';strcat(temp3, "First");
printf("%s\n", temp3);
char temp4[1025]; temp4[0] = '\0';strcat(temp4, "First");
printf("%s\n", temp4);
goto ENDCYCLE0;
NEXTLABEL1: ;
int temp5 = 2;
if (temp1 != temp5) goto NEXTLABEL2;
char temp6[1025]; temp6[0] = '\0';strcat(temp6, "Second");
printf("%s\n", temp6);
char temp7[1025]; temp7[0] = '\0';strcat(temp7, "Second");
printf("%s\n", temp7);
goto ENDCYCLE0;
NEXTLABEL2: ;
char temp8[1025]; temp8[0] = '\0';strcat(temp8, "Third");
printf("%s\n", temp8);
char temp9[1025]; temp9[0] = '\0';strcat(temp9, "Third");
printf("%s\n", temp9);
goto ENDCYCLE0;
NEXTLABEL3: ; ENDCYCLE0: ;
char temp10[1025]; temp10[0] = '\0';strcat(temp10, "End");
printf("%s\n", temp10);
int temp11 = 0;
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
double temp12 = 2.000000;
sp->parent->returnValue = (double*) malloc(sizeof(double));
(*((double*) sp->parent->returnValue)) = temp12;
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

