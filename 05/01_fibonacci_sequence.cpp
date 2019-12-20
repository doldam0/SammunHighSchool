#include <stdio.h>

#define MAX 50

int d[MAX];

int main() {
	int n;
	scanf("%d", &n);
	
	d[1] = d[2] = 1;
	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
	}

	printf("%d\n", d[n]);
	return 0;
}
