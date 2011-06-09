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
sp->locals[1] = (char*) malloc(sizeof(char)*1024);
char temp0[1024]; strcpy(temp0, "First");
strcpy(((char*) sp->locals[1]), temp0);
char temp1[1024]; strcpy(temp1, "Dell ");
char temp2[1024]; strcpy(temp2, "With!");
char temp3[1024]; strcpy(temp3, temp1);
strcat(temp3, temp2);
strcpy((char*) sp->locals[1], temp3);
char temp4[1024]; temp4[0] = '\0';0;
char temp6[1024]; strcpy(temp6, "Fuck");
sp->outgoing[0] = (char*) malloc(sizeof(char)*1024);
strcpy(((char*) sp->outgoing[0]), temp6);
_ra = 0;
goto factorial;
return0: ;
char  temp7[1024];
strcpy(temp7, ((char *) sp->returnValue));
char temp5[256];
sprintf(temp5, "%s", temp7);
strcat(temp4, temp5);
printf("%s\n", temp4);
int temp8 = 0;
goto EPILOGUE_main;

/*METHOD: factorial */
/*Prologue*/
goto factorialskip;
factorial:
fp = sp;
sp = (frame*)malloc(sizeof(frame));
sp->parent = fp;
sp->return_address = _ra;
sp->locals[0] = (char*) malloc(sizeof(char)*1024);
strcpy(((char*) sp->locals[0]),((char*) sp->parent->outgoing[0]));

/*Method's body.*/
char temp9[1024]; strcpy(temp9, ((char*)  sp->locals[0]));
char temp10[1024]; strcpy(temp10, " Yeah!");
char temp11[1024]; strcpy(temp11, ((char*) sp->locals[0]));
strcat(temp11, temp10);
sp->parent->returnValue = (char*) malloc(sizeof(char)*1024);
strcpy(((char*) sp->parent->returnValue),  temp11);
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
EPILOGUE_main: ;
exit:
;

}

