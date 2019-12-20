#include <stdio.h>

#define MAX 100

int main() {
	int arr[MAX];
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n - 1; i++) { 
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}

		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	} 	printf("\n");

	return 0;
}
