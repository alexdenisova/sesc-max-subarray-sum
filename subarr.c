#include <stdio.h>

int main() {
	int i =0, len, k, max = 0, sum = 0, n;
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	len = sizeof(arr)/4;
	
	for(i =0; i<len; i++){
		for(k=i; k < len; k++){
			sum = sum + arr[k];
			if (sum >= max){
				max = sum;
			}
			if (k == (len-1)){
				sum =0;
			}
		}
	}
	printf("%d", max);
}
