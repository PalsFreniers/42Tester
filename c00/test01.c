extern void ft_print_alphabet();

#include <stdio.h>

int main() {

	// test 01
	printf("\033[96m====== TEST ft_print_alphabet(01) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\nabcdefghijklmnopqrstuvwxyz\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_print_alphabet();
	printf("\n");
	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
