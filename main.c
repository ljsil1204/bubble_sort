#include <stdio.h> 
#include <stdlib.h> 
#define MAX_SIZE 10 
#define SWAP(x, y, t) ((t)=(x), (x)=(y), (y)=(t)) 

int list[MAX_SIZE];
int n;

// 버블정렬(Bubble Sort) => 이웃한 항을 비교하여 정렬하는 알고리즘
void bubble_sort(int list[], int n) {

	int i, j, temp;

	// i의 범위 : 1 ~ n-1(배열의 마지막 인덱스)
	// 버블정렬은 맨 자리부터 정렬되므로 i의 인덱스 순회를 뒤에서 부터 진행한다.
	for (i = n - 1; i > 0; i--) {

		// 하나의 회차 동안에 인접하는 요소를 비교하는 반복문
		// i=9, j = 0 일 경우, list[0] > list[1]를 비교하여 값을 교환한다.
		// i=9, j = 1 일 경우, list[1] > list[2]를 비교하여 값을 교환한다.
		// i=9, j = 8 일 경우, list[8] > list[9]를 비교하여 값을 교환한다. 
		// => j<i인 이유로, j는 마지막인덱스(n-1)이나 이미 정렬된 영역보다 작아야 한다.
		for (j = 0; j < i; j++) {
			if (list[j] > list[j + 1]) {
				SWAP(list[j], list[j + 1], temp);
			}
		}

	}
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