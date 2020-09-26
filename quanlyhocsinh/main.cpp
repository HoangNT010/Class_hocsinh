#include <iostream>
#include "student.h"

using namespace std;


int main()
{
	int n = 0;
	cout << "Nhap so luong hoc sinh can tao: ";
	cin >> n;
	cout << endl;

	Student *hs = new Student[n];

	for (int i = 0; i < n; i++)
	{
		cout << "------------------------------" << endl;
		cout << "Nhap hoc sinh thu: " << i << endl;
		hs[i].nhaphocsinh();
	}
	for (int i = 0; i < n; i++)
	{
		cout << "------------------------------" <<endl;
		cout << "Thong tin hoc sinh thu: " << i << endl;
		hs[i].xuathocsinh();
	}
	return 0;
}