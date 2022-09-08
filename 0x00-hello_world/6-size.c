include<stdio.h>
int main(void)
{
	char chartype;
	int inttype;
	float floattype;
	long int longtype;
	long long int doubletype;
	printf("size of a char: %zu bytes\n", sizeof(chartype));
	printf("size of a int: %zu bytes\n", sizeof(inttype));
	printf("size of a float: %zu bytes\n", sizeof(floattype));
	printf("size of a long int: %zu bytes\n", sizeof(longtype));
	printf("size of a long long int: %zu bytes\n", sizeof(doubletype));
	return(0);
}

