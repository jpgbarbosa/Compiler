typedef struct _f1
{
	/* Frame pointer: environemnt of the calling method. */
	struct _f1* parent;
	/* Address space for local variables. */
	void* locals[64];
	/* Address space for arguments of called methods. */
	void* outgoing[32];
	/* The return value of the method. */
	void* returnValue;	
	/* Code address in the calling method. */
	int return_address;

} frame;
