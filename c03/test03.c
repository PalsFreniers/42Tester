extern char *ft_strncat(char *, char *, unsigned int);

#include <stdio.h>
#include <string.h>

int main() {
	char c[20] = "test";

	// test 01
	printf("\033[96m====== TEST ft_strncat(01) ======\033[39m\n");
	ft_strncat(c, "01 OK", 5);
	printf("\033[36mvaleurs attendue :\033[39m\ntest01 OK\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);

	// test 02
	printf("\033[96m====== TEST ft_strncat(02) ======\033[39m\n");
	ft_strncat(strcpy(c, "hello"), "01234567890123456789", 6);
	printf("\033[36mvaleurs attendue :\033[39m\nhello012345\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);

	// test 03
	printf("\033[96m====== TEST ft_strncat(03) ======\033[39m\n");
	strcpy(c, "new\nTest");
	ft_strncat(c, "", 3);
	printf("\033[36mvaleurs attendue :\033[39m\nnew\nTest\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
