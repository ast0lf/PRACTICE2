#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//çàäàííÿ êîíñòàíò
#define MIN 100
#define MAX 999
#define LEN 900

int InputArray(int* ptr);
/*
*
* çàïîâíåííÿ ìàñèâó
*
* @param *ptr - ìàñèâ
* @return 0 - ÿêùî íåìàº ïîìèëêè
*/
int OutArr(int* ptr);
/*
*
* âèâåäåííÿ ìàñèâó
*
* @param *ptr - ìàñèâ
* @return 0 - ÿêùî íåìàº ïîìèëêè
*/
int SortArr(int* ptr);
/*
*
* ñîðòóâàííÿ ìàñèâó
*
* @param *ptr - ìàñèâ
* @return 0 - ÿêùî íåìàº ïîìèëêè
*/
int ComparArr(int* ptr);
/*
*
* âèçíà÷åííÿ íå³ñíóþ÷èõ ÷èñåë òà ¿õ âèâåäåííÿ
*
* @param *ptr - ìàñèâ
* @return 0 - ÿêùî íåìàº ïîìèëêè
*/


int InputArray(int* ptr) {
	//³í³ö³àë³çàö³ÿ ô-¿ äëÿ ñòâîðåííÿ ïñåâäîâèïàäêîâèõ ÷èñåë
	srand(time(NULL)); 
	
	//³í³ö öèêëó äëÿ çàïîâíåííÿ ìàññèâó
	for (int i = 0; i < LEN; i++) 
		
		//ïðèñâîºííÿ ìàññèâó ïñåâäîâèïàäêîâèõ ÷èñåë
		*(ptr + i) = MIN + rand() % ((MAX+1) - MIN);

	return 0;
}


//Ñîðòóâàííÿ ìàññèâó äëÿ çðîçóì³ëîñò³ êîððåêòíî¿ ðîáîòè ïðîãðàìè
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


//âèâåäåííÿ ìàññèâó íà åêðàí
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
	

