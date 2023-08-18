extern void ft_putnbr(int);

#include <stdio.h>

int main() {

	// test 01
	printf("\033[96m====== TEST ft_div_mod(01) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\n0\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_putnbr(0);
	printf("\n");

	// test 02
	printf("\033[96m====== TEST ft_div_mod(02) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\n1254\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_putnbr(1254);
	printf("\n");

	// test 03
	printf("\033[96m====== TEST ft_div_mod(03) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\n-1984\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_putnbr(-1984);
	printf("\n");

	// test 04
	printf("\033[96m====== TEST ft_div_mod(04) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\n2147483647\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_putnbr(2147483647);
	printf("\n");
	
	// test 05
	printf("\033[96m====== TEST ft_div_mod(05) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\n-2147483647\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_putnbr(-2147483647);
	printf("\n");

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
