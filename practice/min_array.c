#include <stdio.h>

int main() {
    // Example array
    int numbers[] = {10, 4, 8, 2, 12, 6};
    
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int min_value = numbers[0];
    
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min_value) {
            min_value = numbers[i];
        }
    }
    
    printf("The minimum value in the array is: %d\n", min_value);
    
    return 0;
}
