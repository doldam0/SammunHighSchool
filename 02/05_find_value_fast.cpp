#include <stdio.h>

#define MAX 100

int main() {
	int arr[MAX];
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int find;
	scanf("%d", &find);

	int l = 0, r = n - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] == find) {
			printf("%d\n", mid);
			return 0;
		} else if (arr[mid] < find) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}

	printf("Not Found\n");
	return 0;
}
