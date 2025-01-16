#include<iostream>
using namespace std;
void nhap(int a[][100], int& n, int& m);
int maxdong(int a[][100], int n, int m, int dong);
int mincot(int a[][100], int n, int m, int cot);
void YENNGUA(int a[][100], int n, int m);
int main() {
	int a[100][100], n, m;
	nhap(a, n, m);
	YENNGUA(a, n, m);
	return 0;
}
void nhap(int a[][100], int& n, int& m) {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
}
int maxdong(int a[][100], int n, int m, int dong) {
	int max = a[dong][0];
	for (int j = 0; j < m; j++) {
		if (a[dong][j] > max) {
			max = a[dong][j];
		}
	}
	return max;
}
int mincot(int a[][100], int n, int m, int cot) {
	int min = a[0][cot];
	for (int i = 0; i < n; i++) {
		if (a[i][cot] < min) {
			min = a[i][cot];
		}
	}
	return min;
}
void YENNGUA(int a[][100], int n, int m) {
	int dem = 0;
	int tam1[100], tam2[100], size1 = 0, size2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == maxdong(a, n, m, i) && a[i][j] == mincot(a, n, m, j)) {
				dem++;
				tam1[size1++] = i;
				tam2[size2++] = j;
			}
		}
	}
	cout << dem << endl;
	for (int i = 0; i < size1; i++) {
		cout << tam1[i] + 1  << " " << tam2[i] + 1 << endl;
	}
}
/*
* input
* 4 4
* 12 32 34 90
* 1  31 30 5
* 4  33 20 44
* 3  34 25 33
* output
* 1
* 2 2
* note: 200/2000 full test uteoj
*/