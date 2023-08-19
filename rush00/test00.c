void rush(int t, int g) {
	t = 3;
	g = 5;
	while(t < 5) {while(g < 6) {g++;}t++;}
}

#include <stdio.h>

int main() {
	// test 01
	printf("\033[96m====== TEST rush(01) ======\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\no------o\n|      |\n|      |\no------o\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	rush(8, 4);
	printf("\n");

	// test 02
	printf("\033[96m====== TEST rush(02) ======\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\no\n|\n|\n|\no\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	rush(1, 5);
	printf("\n");

	// test 03
	printf("\033[96m====== TEST rush(02) ======\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\no--------o\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	rush(10, 1);
	printf("\n");

	// test 04
	printf("\033[96m====== TEST rush(04) ======\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\no\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	rush(1, 1);
	printf("\n");

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
