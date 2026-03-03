#include <stdio.h> 
#include <stdlib.h> 
#define MAX_SIZE 10 
#define SWAP(x, y, t) ((t)=(x), (x)=(y), (y)=(t)) 

int list[MAX_SIZE];
int n;

// 버블정렬(Bubble Sort) 
void bubble_sort(int list[], int n) {

	

}

int main(void) {

	int i;
	n = MAX_SIZE;

	srand(time(NULL));

	for (i = 0; i < n; i++) {
		list[i] = rand() % 100;
	}

	// 정렬 전 배열 출력
	printf("※ 정렬 전 배열 : ");
	for (i = 0; i < n; i++) {
		printf("%d ", list[i]);
	}
	printf("\n\n");


	// 삽입 정렬 함수 호출
	bubble_sort(list, n);

	// 정렬 결과 출력
	printf("※ 최종 정렬 배열 : ");
	for (i = 0; i < n; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");

	return 0;
}