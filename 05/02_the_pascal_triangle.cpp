#include <stdio.h>

#define MAX 55

long long int d[MAX][MAX];

int main() {
	int n;
	scanf("%d", &n);
	
	d[1][1] = 1;
	printf("%lld\n", d[1][1]);

	for (int i = 2; i <= n; i++) {
		d[i][1] = d[i][i] = 1;
		printf("%lld ", d[i][1]);

		for (int j = 2; j <= i - 1; j++) {
			d[i][j] = d[i - 1][j] + d[i - 1][j - 1];
			printf("%lld ", d[i][j]);
		}

		printf("%lld\n", d[i][i]);
	}

	return 0;
}
