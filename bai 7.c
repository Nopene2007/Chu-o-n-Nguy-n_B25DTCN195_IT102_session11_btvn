#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap so thang: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Loi: can it nhat 2 thang de tinh toan.\n");
        return 0;
    }

    int arr[n];
    printf("Nhap gia co phieu tung thang:\n");
    for (i = 0; i < n; i++) {
        printf("Thang %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int buy = arr[0]; 
    int min_loss = 0; 
    int best_sell_month = -1;

    int co_lo = 0; 

    for (i = 1; i < n; i++) {
        int profit = arr[i] - buy; 
        if (profit < 0) { 
            if (!co_lo || profit > min_loss) {
                min_loss = profit;
                best_sell_month = i + 1; 
                co_lo = 1;
            }
        }
    }

    if (co_lo)
        printf("Ban nen ban vao thang %d de lo it nhat: %d don vi.\n", best_sell_month, -min_loss);
    else
        printf("Khong co lo, ban luon co the ban co lai!\n");

    return 0;
}



