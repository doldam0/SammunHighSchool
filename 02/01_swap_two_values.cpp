#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);

	int temp = x;
	x = y;
	y = temp;

	printf("%d %d\n", x, y);
	return 0;
}
