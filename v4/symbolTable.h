#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef enum {s_BOOLEAN, s_CHAR, s_BYTE, s_SHORT, s_INT, s_LONG, s_FLOAT, s_DOUBLE, s_VOID,
				s_STRING, s_STRING_ARRAY, s_METHOD} tableBasicTypes;

typedef struct _t1 tableElement;

struct _t1
{
	char name[256];
	tableBasicTypes type;
	tableElement* next;

} /* tableElement */;

tableElement *insertSymbol(char *str, tableBasicTypes t);
void showTable();

#endif
