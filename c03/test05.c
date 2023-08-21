extern unsigned int ft_strlcat(char *, char *, unsigned int);

#include <stdio.h>
#include <string.h>

int main() {
	char c[20] = "test";
	unsigned int a = 0;

	// test 01
	printf("\033[96m====== TEST ft_strlcat(01) ======\033[39m\n");
	a = ft_strlcat(c, "01 OK", 20);
	printf("\033[36mvaleurs attendue :\033[39m\ntest01 OK\na = 9\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\na = %u\n", c, a);

	// test 02
	printf("\033[96m====== TEST ft_strlcat(02) ======\033[39m\n");
	a = ft_strlcat(strcpy(c, "hello"), "01234567890123456789", 20);
	printf("\033[36mvaleurs attendue :\033[39m\nhello01234567890123\na = 25\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\na = %u\n", c, a);

	// test 03
	printf("\033[96m====== TEST ft_strlcat(03) ======\033[39m\n");
	strcpy(c, "new\nTest");
	a = ft_strlcat(c, "", 20);
	printf("\033[36mvaleurs attendue :\033[39m\nnew\nTest\na = 8\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\na = %u\n", c, a);

	// test 04
	printf("\033[96m====== TEST ft_strlcat(04) ======\033[39m\n");
	strcpy(c, "");
	a = ft_strlcat(c, "bonjour", 20);
	printf("\033[36mvaleurs attendue :\033[39m\nbonjour\na = 7\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\na = %u\n", c, a);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
