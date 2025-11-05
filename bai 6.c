#include <stdio.h>

int main() {
    int arr[] = {10, 25, 8, 30, 22, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    if (n < 2) {
        printf("Loi: Mang phai co it nhat 2 phan tu.\n");
        return 0;
    }

    int max1, max2;

    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    if (max1 == max2)
        printf("Khong co phan tu lon thu hai.\n");
    else
        printf("Phan tu lon nhat: %d\nPhan tu lon thu hai: %d\n", max1, max2);

    return 0;
}

