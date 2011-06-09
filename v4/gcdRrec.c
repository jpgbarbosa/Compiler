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
char temp0[1024]; strcpy(temp0, "Hello\n");
strcpy(((char*) sp->locals[1]), temp0);
char temp1[1024]; strcpy(temp1, "Hello ");
char temp2[1024]; strcpy(temp2, "World!");
char temp3[1024]; strcpy(temp3, temp1);
strcat(temp3, temp2);
strcpy((char*) sp->locals[1], temp3);
char temp4[1024]; temp4[0] = '\0';char temp5[256];
sprintf(temp5, "%s", ((char* ) sp->locals[1]));
strcat(temp4, temp5);
printf("%s\n", temp4);
int temp6 = 0;
goto EPILOGUE_main;

/*Redirector*/
goto exit;
redirector:
EPILOGUE_main: ;
exit:
;

}

