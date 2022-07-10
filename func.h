#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//задання констант
#define MIN 100
#define MAX 999
#define LEN 900

int InputArray(int* ptr);
/*
*
* заповнення масиву
*
* @param *ptr - масив
* @return 0 - якщо немає помилки
*/
int OutArr(int* ptr);
/*
*
* виведення масиву
*
* @param *ptr - масив
* @return 0 - якщо немає помилки
*/
int SortArr(int* ptr);
/*
*
* сортування масиву
*
* @param *ptr - масив
* @return 0 - якщо немає помилки
*/
int ComparArr(int* ptr);
/*
*
* визначення неіснуючих чисел та їх виведення
*
* @param *ptr - масив
* @return 0 - якщо немає помилки
*/


int InputArray(int* ptr) {
	//ініціалізація ф-ї для створення псевдовипадкових чисел
	srand(time(NULL)); 
	
	//ініц циклу для заповнення массиву
	for (int i = 0; i < LEN; i++) 
		
		//присвоєння массиву псевдовипадкових чисел
		*(ptr + i) = 100 + rand() % (1000 - 100);

	return 0;
}


//Сортування массиву для зрозумілості корректної роботи програми
int SortArr(int* ptr) {
	for (int i = 0; i <= LEN; i++)
		for (int j = i+1; j < LEN; j++)
		{
			if (*(ptr+i) > *(ptr+j))
			{
				int tmp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = tmp;
			}
		}
	return 0;
}


//виведення массиву на екран
int OutArr(int* ptr) {
	for (int i = 0; i < LEN; i++) {
		printf("%d  ", *(ptr + i));
	}
	return 0;
}

int ComparArr(int* ptr) {
	/*int ch = MIN;
	for (int i = 0; i < LEN; i++) {
		if (*(ptr + i) > 100) {
			while (*(ptr + i) != ch) {
				printf("%d", ch);
				ch++;
			}
			i--;
			continue;
		}
		

		if (ch == *(ptr + i)) {
			ch++;
			continue;
		}
		while ((ch != *(ptr + i)) && *(ptr + i) == *(ptr + (i + 1))) {
			printf("%d", ch);
			if (ch != *(ptr + i))
				ch++;
			else break;
		}
		if ((ch != *(ptr + i)) && *(ptr + i) == *(ptr + (i - 1))) continue;
		if ((ch != *(ptr + i)) && *(ptr + i) != *(ptr + (i - 1))) {
			while (ch != *(ptr + i)) {
				printf("%d", ch);
				ch++;
			}
			i--;
		}

	}*/
	
	int ch = 0;
	for (int i = MIN; i <= MAX; i++) {
		if (ptr[ch] != i) {
			printf("%d  ", i);
		}
		else
			while (ptr[ch] == i) ch++;

	}
	
	/*int arr[900] = {0};
	for (int i = 0; i < LEN; i++) {
		arr[ptr[i]-100] += 1;
	 }
	for (int i = 0; i < LEN; i++) {
		if (arr[i] == 0) {
			printf("%d  ", i + 100);
		}
	}
	*/


	return 0;
	}
	

