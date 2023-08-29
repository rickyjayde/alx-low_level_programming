#include <stdio.h>

void print_array(int *a, int n) {
	int i;

    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int num_elements = sizeof(numbers) / sizeof(numbers[0]);
    
    print_array(numbers, num_elements);
    
    return 0;
}

