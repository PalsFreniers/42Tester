extern void ft_putchar(char);

#include <stdio.h>

int main() {

	// test 01
	printf("\033[96m====== TEST ft_div_mod(01) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\nC\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_putchar('C');
	printf("\n");

	// test 02
	printf("\033[96m====== TEST ft_div_mod(02) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\nHello, World!\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_putchar('H');
	ft_putchar('e');
	ft_putchar('l');
	ft_putchar('l');
	ft_putchar('o');
	ft_putchar(',');
	ft_putchar(' ');
	ft_putchar('W');
	ft_putchar('o');
	ft_putchar('r');
	ft_putchar('l');
	ft_putchar('d');
	ft_putchar('!');
	printf("\n");

	// test 03
	printf("\033[96m====== TEST ft_div_mod(03) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\n0123456789\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_putchar('0');
	ft_putchar('1');
	ft_putchar('2');
	ft_putchar('3');
	ft_putchar('4');
	ft_putchar('5');
	ft_putchar('6');
	ft_putchar('7');
	ft_putchar('8');
	ft_putchar('9');
	printf("\n");

	// test 04
	printf("\033[96m====== TEST ft_div_mod(04) ======\033[39m\n");
	printf("\033[36maffichage attendu :\033[39m\n\\\n %% \"\n");
	printf("\033[36maffichage obtenue :\033[39m\n");
	ft_putchar('\\');
	ft_putchar('\n');
	ft_putchar(' ');
	ft_putchar('%');
	ft_putchar(' ');
	ft_putchar('\"');
	printf("\n");
	

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
