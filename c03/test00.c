extern int ft_strcmp(char *, char *);

#include <stdio.h>
#include <string.h>

int main() {
	int len;

	// test 01
	printf("\033[96m====== TEST ft_strcmp(01) ======\033[39m\n");
	len = ft_strcmp("Hello, world!", "Hello, world!");
	printf("\033[36mvaleurs attendue :\033[39m\n0\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 02
	printf("\033[96m====== TEST ft_strcmp(02) ======\033[39m\n");
	len = ft_strcmp("Hello, world!", "Hello, World!");
	printf("\033[36mvaleurs attendue :\033[39m\n(any non null positive value)\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 03
	printf("\033[96m====== TEST ft_strcmp(03) ======\033[39m\n");
	len = ft_strcmp("Hello, World!", "Hello, world!");
	printf("\033[36mvaleurs attendue :\033[39m\n(any non null negative value)\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 04
	printf("\033[96m====== TEST ft_strcmp(04) ======\033[39m\n");
	len = ft_strcmp("Hello, World!", "Hello, world");
	printf("\033[36mvaleurs attendue :\033[39m\n(any non null negative value)\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 05
	printf("\033[96m====== TEST ft_strcmp(05) ======\033[39m\n");
	len = ft_strcmp("Hello, World!", "Hello, World!fjuher");
	printf("\033[36mvaleurs attendue :\033[39m\n(any non null positive value)\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
