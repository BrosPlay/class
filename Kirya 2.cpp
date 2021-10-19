#include<iostream>
using namespace std;
int main() {
	/*
	Boolean1◦
. Дано целое число A. Проверить истинность высказывания: «Число A является положительным».
	*/
	/*
	int A;
	bool res;
	cin >> A;
	res = A > 0;
	cout << boolalpha;
	cout << res << endl;
	*/
	/*
	Boolean2◦
. Дано целое число A. Проверить истинность высказывания: «Число A является нечетным».
*/
	int A;
	bool res;
	cin >> A;
	res = A % 2 != 0;
	cout << boolalpha;
	cout << res << endl;
}

