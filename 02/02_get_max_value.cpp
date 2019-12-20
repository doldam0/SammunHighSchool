#include <stdio.h>

#define MAX 100

int main() {
	int arr[MAX];
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) { 
		scanf("%d", &arr[i]); 
	}

	int max = -987654321;
	for (int i = 0; i < n; i++) { 
		if (max < arr[i]) { 
			max = arr[i];
		}
	}

	printf("%d\n", max);
	return 0;
}
