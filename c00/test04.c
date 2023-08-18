extern void ft_is_negative();

#include <stdio.h>

int main() {

	// test 01
	printf("\033[96m====== TEST ft_is_negative(01) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\nP\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_is_negative(0);
	printf("\n");

	// test 02
	printf("\033[96m====== TEST ft_is_negative(02) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\nN\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_is_negative(-1);
	printf("\n");

	// test 02
	printf("\033[96m====== TEST ft_is_negative(03) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\nP\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_is_negative(1);
	printf("\n");

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}

