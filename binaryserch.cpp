#include <stdio.h>
int main(){
	int ary[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int low = 0, high = 9, mid;
	int giaTri, timThay = 0;
	printf("Nhap 1 gia tri nguyen: ");
	scanf("%d", &giaTri);
	while(low <= high){
		mid = (low + high) / 2;
		if(ary[mid] == giaTri){
			printf("\nGia tri %d duoc tim thay o vi tri %d cua mang!");
			timThay = 1;
			break;
		} else if(ary[mid] > giaTri){
			high = mid + 1;
		}
		else
			low = mid + 1;
	}
	if(timThay == 0)
		printf("\nGia tri %d khong duoc tim thay trong mang!", giaTri);
	return 0;
}
