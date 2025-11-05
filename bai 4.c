#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    int left = 0, right = n - 1;
    int mid;
    int found = -1; 

    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1; 
        }
    }

    if (found != -1)
        printf("Phan tu %d duoc tim thay tai chi so %d.\n", target, found);
    else
        printf("Khong tim thay phan tu %d trong mang.\n", target);

    return 0;
}



