#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//������� ��������
#define MIN 100
#define MAX 999
#define LEN 900

int InputArray(int* ptr);
/*
*
* ���������� ������
*
* @param *ptr - �����
* @return 0 - ���� ���� �������
*/
int OutArr(int* ptr);
/*
*
* ��������� ������
*
* @param *ptr - �����
* @return 0 - ���� ���� �������
*/
int SortArr(int* ptr);
/*
*
* ���������� ������
*
* @param *ptr - �����
* @return 0 - ���� ���� �������
*/
int ComparArr(int* ptr);
/*
*
* ���������� ��������� ����� �� �� ���������
*
* @param *ptr - �����
* @return 0 - ���� ���� �������
*/


int InputArray(int* ptr) {
	//����������� �-� ��� ��������� ���������������� �����
	srand(time(NULL)); 
	
	//��� ����� ��� ���������� �������
	for (int i = 0; i < LEN; i++) 
		
		//��������� ������� ���������������� �����
		*(ptr + i) = 100 + rand() % (1000 - 100);

	return 0;
}


//���������� ������� ��� ���������� ��������� ������ ��������
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


//��������� ������� �� �����
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
	

