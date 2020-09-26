#include <iostream>
#include "student.h"

using namespace std;

void xapxeptheoDiemTBgiam(Student *hs_in, int n)
{
	int i = 0;
	int j = 0;
	Student temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (hs_in[i].getDiemTB() < hs_in[j].getDiemTB())
			{
				temp = hs_in[i];
				hs_in[i] = hs_in[j];
				hs_in[j] = temp;
			}

		}
	}
}

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

	xapxeptheoDiemTBgiam(hs, n);

	for (int i = 0; i < n; i++)
	{
		cout << "------------------------------" <<endl;
		cout << "Thong tin hoc sinh thu: " << i << endl;
		hs[i].xuathocsinh();
	}
	return 0;
}