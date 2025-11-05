#include <stdio.h>
#include <math.h>
int main(){
	int a[100];
	int choice;
	int n;
	
	do{
		printf("------MENU chuc nang---------");
		printf("\n1.Nhap gia tri n phan tu vao mang:");
		printf("\n2.In gia tri cac phan tu cua mang:");
		printf("\n3.Tinh va in tong ,trung binh cong cac phan tu cua mang:");
		printf("\n4.Sap xep mang");
		printf("\n5.Tim kiem phan tu theo gia tri nhap tu ban phim");
		printf("\n6.Xoa phan tu");
		printf("\n7. Chen phan tu vao mang");
		printf("\n8.xoa phan tu theo gia tri");
		printf("9.thoat\n");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:{
				printf("nhap so phan tu n:");
				scanf("%d", &n);
				if(n<0 ||n>100){
					printf("so phan tu khong hop le");
					n=0;
					break;
				}
				for(int i =0;i<n;i++){
					printf("a[%d]=");
					scanf("%d", &a[i]);
				}
				int sorted = 0;
				break;
			}
			case 2:{
				if(n==0){
					printf("mang rong\n");
				}
				printf("mang hien tai\n");
				for(int i=0;i<n;i++){
					printf("a[%d]=%d\n", i,a[i]);
				}
				break;
			}
			case 3:{
				if(n==0){
					printf("mang rong\n");
					break;
				}
				int sum=0;
				for(int i=0;i<n;i++){
					sum +=a[i];
					printf("tong=%d,trung inh cong=%.2f",sum,(float)sum/n);
				}
				break;
			}
			case 4:{
				if(n==0){
				printf("mang rong\n");
				break;
			}
			char type;
			printf("a.bubble sort(increase)\n");
			printf("b.selection sort(decrease)\n");
			printf("c.insertion sort(increase)\n");
			printf("moi lua chon:");
			scanf("%c",&type);
			switch(type){
				case 'a':{
					for(int i=0;i<n;i++){
						for(int j=0;j<n-i;j++){
							if(a[j]>a[j+1]){
								int temp =a[j];
								a[j]=a[j+1];
								a[j+1]=temp;
							}
						}
					}
					printf("mang da duoc sap xep\n");
					int sorted =1;
					break;
				}
				case 'b':{
					for(int i = 0;i<n;i++){
						int maxIndex =i;
						for(int j=i +1;j<n;j++){
							if(a[j]>a[maxIndex]){
								maxIndex=j;
							}
							
						}
						int temp =a[i];
						a[i]=a[maxIndex];
						a[maxIndex]=temp;
					}
					break;
				}
				case 'c':{
					for(int i=1;i<n;i++){
						int key =a[i];
						int j=i-1;
						while(j>=0 &&a[j]>key){
							a[j +1]=a[j];
							j--;
						}
						a[j+1]=key;
					}
					printf("mang da dc sap xep\n");
					 int sorted =1;
					break;
					
				}
				default:
					printf("lwa chon k hop le");
			}
			break;
		
		}
	}
} 



