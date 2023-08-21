extern int ft_strncmp(char *, char *, unsigned int);

#include <stdio.h>
#include <string.h>

int main() {
	int len;

	// test 01
	printf("\033[96m====== TEST ft_strncmp(01) ======\033[39m\n");
	len = strncmp("Hello, world!", "Hello, dragster!", 7);
	printf("\033[36mvaleurs attendue :\033[39m\n0\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 02
	printf("\033[96m====== TEST ft_strncmp(02) ======\033[39m\n");
	len = strncmp("Hello, world!", "Hello, World!", 10);
	printf("\033[36mvaleurs attendue :\033[39m\n(any non null positive value)\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 03
	printf("\033[96m====== TEST ft_strncmp(03) ======\033[39m\n");
	len = strncmp("Hello, World!", "Hello, world!", 10);
	printf("\033[36mvaleurs attendue :\033[39m\n(any non null negative value)\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 04
	printf("\033[96m====== TEST ft_strncmp(04) ======\033[39m\n");
	len = strncmp("Hello, World!", "Hello, ", 8);
	printf("\033[36mvaleurs attendue :\033[39m\n(any non null positive value)\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 05
	printf("\033[96m====== TEST ft_strncmp(05) ======\033[39m\n");
	len = strncmp("Hello, W", "Hello, Worldium", 12);
	printf("\033[36mvaleurs attendue :\033[39m\n(any non null negative value)\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
