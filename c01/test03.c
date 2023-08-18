extern void ft_div_mod(int, int, int*, int*);

#include <stdio.h>

int main() {
	int div, mod, tot = 0;

	// test 01
	printf("\033[96m====== TEST ft_div_mod(01) ======\033[39m\n");
	ft_div_mod(12, 6, &div, &mod);
	printf("\033[36mvaleurs attendue :\033[39m\n\tdiv = 2\n\tmod = 0\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n\tdiv = %d\n\tmod = %d\n", div, mod);
	if(div == 2 && mod == 0) tot++;

	// test 02
	printf("\033[96m====== TEST ft_div_mod(02) ======\033[39m\n");
	ft_div_mod(15, 8, &div, &mod);
	printf("\033[36mvaleurs attendue :\033[39m\n\tdiv = 1\n\tmod = 7\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n\tdiv = %d\n\tmod = %d\n", div, mod);
	if(div == 1 && mod == 7) tot++;

	// test 03
	printf("\033[96m====== TEST ft_div_mod(03) ======\033[39m\n");
	ft_div_mod(323, 100, &div, &mod);
	printf("\033[36mvaleurs attendue :\033[39m\n\tdiv = 3\n\tmod = 0\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n\tdiv = %d\n\tmod = %d\n", div, mod);
	if(div == 3 && mod == 23) tot++;

	// test 04
	printf("\033[96m====== TEST ft_div_mod(04) ======\033[39m\n");
	ft_div_mod(130, 3, &div, &mod);
	printf("\033[36mvaleurs attendue :\033[39m\n\tdiv = 43\n\tmod = 1\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n\tdiv = %d\n\tmod = %d\n", div, mod);
	if(div == 43 && mod == 1) tot++;

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
