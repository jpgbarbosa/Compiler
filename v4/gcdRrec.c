#include "frame.h"
#include <stdlib.h>
#include <stdio.h>

#include <string.h>

int main()
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
char temp1[1024]; temp1[0] = '\0';char temp2[256];
sprintf(temp2, "%s", ((char* ) sp->locals[0]));
strcat(temp1, temp2);
printf("%s\n", temp1);
int temp3 = 0;
goto EPILOGUE_main;

/*Redirector*/
goto exit;
redirector:
EPILOGUE_main: ;
exit:
;

}

