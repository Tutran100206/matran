#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct DIEM
{
	long double x, y;
};
void nhap(DIEM& a);
void toado1doixungquatungdo(DIEM a);
void toado1doixungquahoanhdo(DIEM a);
void toado1doixungquatamO(DIEM a);
void khoangcachtoado2va3(DIEM a, DIEM b);
int main() {
	DIEM toado1, toado2, toado3;
	nhap(toado1);
	nhap(toado2);
	nhap(toado3);
	toado1doixungquatungdo(toado1);
	toado1doixungquahoanhdo(toado1);
	toado1doixungquatamO(toado1);
	khoangcachtoado2va3(toado2, toado3);
	return 0;
}
void nhap(DIEM& a) {
	cin >> a.x >> a.y;
}
void toado1doixungquatungdo(DIEM a) {
	cout << -a.x << " " << a.y << endl;
}
void toado1doixungquahoanhdo(DIEM a) {
	cout << a.x << " " << -a.y << endl;
}
void toado1doixungquatamO(DIEM a) {
	cout << -a.x << " " << -a.y << endl;
}
void khoangcachtoado2va3(DIEM a, DIEM b) {
	double kc = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
	cout << fixed << setprecision(6) << kc;
}
/*
* input:
* -72 -52
* -100 33
* -74 -68
* output:
* 72 -52
* -72 52
* 72 52
* 104.292857
* note: full 200/200, 20/20 testcase uteoj
*/