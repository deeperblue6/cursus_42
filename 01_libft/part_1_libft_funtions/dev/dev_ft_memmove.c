#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*memmove(void *str1, const void *str2, size_t n)
{

}

int	main(void)
{

	char	*ptr1;
	char	*ptr2;
	char	str1[20] = "valencia";
	char	str2[20] = "Sevilla";
	char	*ps1;

	ptr1 = "Valencia";
	ptr2 = &str1;

	//int	i;
	//int	p;

	//i = 5;
	//p = 0;

	printf("Puntero 1: %s\n", ptr1);
	printf("Puntero 1: %d\n", ptr1);
	printf("Puntero 1: %p\n\n", ptr1);
	printf("Puntero 2: %s\n", ptr2);
	printf("Puntero 2: %d\n", ptr2);
	printf("Puntero 2: %p\n\n", ptr2);
	printf("Variable str1: %s\n", str1);
	printf("Variable str1: %d\n", str1);
	printf("Variable str1: %p\n\n", str1);


	//printf("%s\n\n");


	//printf("%s\n", str2);
	//printf("%d\n", str2);
	//printf("%p\n", str2);
	//printf("%s\n\n", str2);

}

/*
int main( void )
{

	char str1[7] = "aabbcc";
	
	printf( "The string: %s\n", str1 );
	memcpy( str1 + 2, str1, 4 );
	printf( "New string: %s\n", str1 );

	//strcpy_s( str1, sizeof(str1), "aabbcc" );   // reset string

	printf( "The string: %s\n", str1 );
	memmove( str1 + 2, str1, 4 );
	printf( "New string: %s\n", str1 );
	return (0);
}
*/
