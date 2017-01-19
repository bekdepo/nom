#include "redblack.h"

rb_node * rb_node_init()
{
	return NULL;
}

void rb_insert(rb_node * root, char * string)
{
}

void rb_delete(rb_node * root, char * string)
{
}

int lex_less(char * str1, char * str2)
{
	//return 1 if str1 < str2
	//Return -1 if str2 < str1
	//Return 0 if str1==str2

	int size1 = strlen(str1), size2 = strlen(str2);

	for (int i = 0; i < (size1 < size2 ? size1 : size2); i++) {
		if (str1[i] < str2[i])
			return 1;
		else if (str1[i] > str2[i])
			return -1;
	}

	// Letter compared to nothing, nothing is before letter
	if (size2 > size1)
		return 1;
	else if (size1 > size2)
		return -1;

	return 0;
}
