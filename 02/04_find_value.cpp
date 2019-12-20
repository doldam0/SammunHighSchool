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

	int findIndex = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == find) {
			findIndex = i;
			break;
		}
	}

	if (findIndex == -1) {
		printf("Not Found\n");
	} else {
		printf("%d\n", findIndex);
	}

	return 0;
}
