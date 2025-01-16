#include<iostream>
#include<algorithm>
using namespace std;
void nhap(int a[][100], int& n, int& m);
int maxdong(int a[][100], int n, int m, int dong);
void mincuamaxdong(int a[][100], int n, int m);
int main() {
	int a[100][100], n, m;
	nhap(a, n, m);
	mincuamaxdong(a, n, m);
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
void mincuamaxdong(int a[][100], int n, int m) {
	int b[100], sizeB = 0;
	for (int i = 0;i < n; i++) {
		b[sizeB++] = maxdong(a, n, m, i);
	}
	if (sizeB > 0) {
		sort(b, b + sizeB);
		cout << b[0];
	}
}
/*
* input
* 3 4
* 3 1 5 6
* 4 5 2 3
* 8 9 7 6
* output
* 5 
*/