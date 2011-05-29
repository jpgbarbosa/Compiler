#include "frame.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
frame* sp = NULL;
int g0;

/*Main Block */
sp = (frame*)malloc(sizeof(frame));
/*Main's body.*/
int a;

/*METHOD: gcd */
/*Prologue*/
goto gcdskip;
gcd:
fp = sp;
sp = (frame*)malloc(sizeof(frame));
sp->parent = fp;
sp->return_address = _ra;

/*Method's body.*/
int c;

/*Epilogue*/
_ra = sp->return_address;
sp = sp->parent;
fp = sp->parent;
goto redirector;
gcdskip:

}

