#include <stdio.h>
#include <math.h>

#define MAX 1 << 18
#define DIV 1000000007

int d[MAX];

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	int lg = log2(k);
	d[0] = n;
	for (int i = 1; i <= lg; i++) {
		d[i] = (long long int)d[i - 1] * d[i - 1] % DIV;
	}
	
	int result = 1;
	for (int i = pow(2, lg), j = lg; j >= 0; i /= 2, j--) {
		if (i <= k) {
			result = (long long int)result * d[j] % DIV;
			k -= i;
		}
	}

	printf("%d\n", result);
	return 0;
}
