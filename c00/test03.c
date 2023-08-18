extern void ft_print_numbers();

#include <stdio.h>

int main() {

	// test 01
	printf("\033[96m====== TEST ft_print_numbers(01) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\n0123456789\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_print_numbers();
	printf("\n");
	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
