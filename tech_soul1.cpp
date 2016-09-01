// tech_soul1.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "iostream"

using namespace std;

#define randam_number 5

//バブルソート
void BubbleSort(int &a) {
	int i, j, flg;
	int *sort;
	sort = &a;
	cout << "バブルソート" << endl;
	do {
		flg = 0;
		for (i = 0; i < randam_number-1; i++) {
			if (sort[i] > sort[i + 1]) {
				flg = 1;
				j = sort[i];
				sort[i] = sort[i + 1];
				sort[i + 1] = j;
			}
		}
	} while (1 == flg);
	for (int i = 0; i < randam_number; i++) {
		cout << sort[i] << " ";
	}
	cout << endl;

}
//マージソート
void MergeSort(int n,int &a) {
	int i,j,k,m;
	m = n / 2;

	MergeSort(m, a);
	MergeSort(n - m, *(&a + m));

	for (i = 0; i < m; i++) {
		bu
	}

	sort = &a;
	cout << "マージソート" << endl;
	do {
		flg = 0;
		for (i = 0; i < randam_number - 1; i++) {
			if (sort[i] > sort[i + 1]) {
				flg = 1;
				j = sort[i];
				sort[i] = sort[i + 1];
				sort[i + 1] = j;
			}
		}
	} while (1 == flg);
	for (int i = 0; i < randam_number; i++) {
		cout << sort[i] << " ";
	}
	cout << endl;

}

//エントリポイント
int main()
{
	int a[randam_number];
	a[0] = 5;
	a[1] = 3;
	a[2] = 2;
	a[3] = 4;
	a[4] = 1;

	cout << "元データ" << endl;
	for (int i = 0; i < randam_number; i++){
		cout << a[i]<<" ";
	}
	cout << endl;
	//バブルソート
	BubbleSort(a[0]);

	//マージソート
	MergeSort(randam_number, a[0]);
	return 0;
}

