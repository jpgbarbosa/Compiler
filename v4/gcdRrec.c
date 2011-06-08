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
printf("Wonderful %d!\n" , (*(int*)  sp->locals[1]));
int temp1 = 0;
goto EPILOGUE_main;

/*Redirector*/
goto exit;
redirector:
EPILOGUE_main: ;
exit:
;

}

