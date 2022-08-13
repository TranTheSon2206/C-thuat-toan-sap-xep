#include <stdio.h>
#include <conio.h>
int main(){
	int ary[5] = {10, 3, 21, 6, 1};
	int i, j, tmp;
	for (i = 1; i < 5; ++i){
		tmp = ary[i];
		j = i - 1;
		while (j>= 0 && tmp < ary[j]){
			ary[j + 1] = ary[j];
			j--;
		}
		ary[j + 1] = tmp;
	}
	printf("\nHien thi Mang da duoc sap xep: \n");
	for(i = 0; i < 5; i++){
		printf("%d\t", ary[i]);
	return 0;
	}
}
