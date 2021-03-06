#include <stdio.h>
int main(void)
{
	printf("\n\n\t\t+---------+------+------------------------------+\n");
	printf("\t\t|  Type   | Size |      Range of values         |\n");
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| boolean | 1b   | 0-1                          |\n");
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| char    | 16b  | 0-65535                      |\n");
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| byte    | 8b   | -128-127                     |\n");
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| short   | 16b  | -32768-32767                 |\n");
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| int     | 32b  | -2147483648-2147483647       |\n");
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| long    | 64b  | -9223372036854775808-        |\n");
	printf("\t\t|---------|------|  -9223372036854775807        |\n");
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| float   | 32b  | (+-)3,40282347E+38F          |\n");
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| double  | 64b  | (+-)1,7976931348623157E+308F |\n");
	printf("\t\t+---------+------+------------------------------+\n");
	return 0;
}
