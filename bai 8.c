#include <stdio.h>

int main() {
    int arr[] = {2, 5, 3, 2, 8, 5, 2, 3, 3, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    int max_count = 0; 
    int most_frequent; 

   
    for (i = 0; i < n; i++) {
        int count = 0;

        
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        
        if (count > max_count) {
            max_count = count;
            most_frequent = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", most_frequent);
    printf("So lan xuat hien: %d\n", max_count);

    return 0;
}



