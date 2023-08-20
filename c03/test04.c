extern char *ft_strstr(char *, char *);

#include <stdio.h>
#include <string.h>

int main() {
	char *len;

	// test 01
	printf("\033[96m====== TEST ft_strstr(01) ======\033[39m\n");
	len = ft_strstr("Hello, world!", "Hello");
	printf("\033[36mvaleurs attendue :\033[39m\nHello\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%.*s\n", 5, len);

	// test 02
	printf("\033[96m====== TEST ft_strstr(02) ======\033[39m\n");
	len = ft_strstr("Hello, world!", "");
	printf("\033[36mvaleurs attendue :\033[39m\nHello, World!\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", len);

	// test 03
	printf("\033[96m====== TEST ft_strstr(03) ======\033[39m\n");
	len = ft_strstr("", "istab");
	printf("\033[36mvaleurs attendue :\033[39m\n(null)\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", len);

	// test 04
	printf("\033[96m====== TEST ft_strstr(04) ======\033[39m\n");
	len = ft_strstr("Hello, world!", "zestys");
	printf("\033[36mvaleurs attendue :\033[39m\n(null)\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", len);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
