#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef struct _t1 table_element;
typedef enum {BOOLEAN, CHAR, BYTE, SHORT, INT, LONG, FLOAT, DOUBLE, VOID, STRING, STRING_ARRAY} table_basic_types;

typedef struct _t1{
	char name[256];
	table_basic_types type;
	table_element *next;
} /* table_element */;

table_element *insertElement(char *str, table_basic_types t);
void showTable();
table_element searchElement(char *str);

#endif
