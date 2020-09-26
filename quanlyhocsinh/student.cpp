#include "student.h"


//function
float Student::tinhdiemTB()
{
	float res_tb = (this->diemtoan + this->diemly + this->diemhoa) / 3;
	this->diemTB = res_tb;
	return res_tb;
}

void Student::xeploaihs()
{
	float diem_tb = this->tinhdiemTB();
	if (diem_tb >= 8)
	{
		this->loaihs = Gioi;
	}
	else if (diem_tb >= 7)
	{
		this->loaihs = Kha;
	}
	else if (diem_tb >= 5)
	{
		this->loaihs = TrungBinh;
	}
	else {
		this->loaihs = Kem;
	}
}

void Student::nhaphocsinh()
{
	char ten[100] = { 0 };
	char dc[200] = { 0 };
	char gt = 'U';
	char cm[15] = { 0 };
	int tuoi = 0;
	float t = 0, l = 0, h = 0;

	do {
		cout << "Nhap ten hoc sinh(max 100 ky tu) : ";
		cin >> ten;
		this->setTenhs(ten);
	} while (strlen(ten)>100);

	do {
		cout << endl;
		cout << "Nhap tuoi hoc sinh :";
		cin >> tuoi;
		this->setTuoihs(tuoi);
	} while (tuoi < 0 || tuoi > 150);

	do {
		cout << endl;
		cout << "Nhap gioi tinh hoc sinh (M is male, F is female, U is unknow): ";
		cin >> gt;
		Gender g = Unknow;
		if (gt == 'M')
		{
			g = Male;
			this->setGioitinhhs(g);
		}
		else if (gt == 'F')
		{
			g = Female;
			this->setGioitinhhs(g);
		}
		else if (gt == 'U')
		{
			g = Unknow;
			this->setGioitinhhs(g);
		}
	} while (gt != 'M' && gt!= 'F' && gt!= 'U');

	do {
		cout << endl << "Nhap so cmnd hs(max 15 ky tu): ";
		cin >> cm;
		this->setCmndhs(cm);
	} while (strlen(cm)> 15);

	do {
		cout << endl << "Nhap dia chi hoc sinh(max 200 ky tu): ";
		cin >> dc;
		this->setDiachihs(dc);
	} while (strlen(dc) > 200);

	do {
		cout << endl;
		cout << "Nhap diem toan cua hoc sinh: ";
		cin >> t;
		this->setDiemtoan(t);
	} while (t <0 || t>10);

	do {
		cout << endl;
		cout << "Nhap diem ly cua hoc sinh: ";
		cin >> l;
		this->setDiemly(l);
	} while (l < 0 || l>10);

	do {
		cout << endl;
		cout << "Nhap diem hoa cua hoc sinh: ";
		cin >> h;
		this->setDiemhoa(h);
	} while (h < 0 || h>10);

	xeploaihs();
}

void Student::xuathocsinh()
{
	cout << "Ten hoc sinh: " << this->getTenhs() << endl;
	cout << "Tuoi hoc sinh: " << this->getTuoihs() << endl;
	cout << "Gioi tinh hoc sinh: " << this->getGioitinhhs() << endl;
	cout << "So CMND hoc sinh: " << this->getCmndhs() << endl;
	cout << "Dia chi hoc sinh: " << this->getDiachihs() << endl;
	cout << "Diem toan: " << this->getDiemtoan() << endl;
	cout << "Diem hoa: " << this->getDiemhoa() << endl;
	cout << "Diem ly: " << this->getDiemly() << endl;
	cout << "Diem trung binh: " << this->getDiemTB() << endl;
}


//constructor - destructor
Student::Student()
{
	this->diemtoan = 0;
	this->diemly = 0;
	this->diemhoa = 0;
	this->diemTB = 0;
	this->loaihs = Kem;
	this->ttcn_hs;
}

Student::Student(float diemtoan_in, float diemly_in, float diemhoa_in)
{
	this->diemtoan = diemhoa_in;
	this->diemly = diemly_in;
	this->diemhoa = diemhoa_in;
	this->xeploaihs();
	this->ttcn_hs;
}

Student::~Student()
{

}


//setter
float Student::getDiemtoan()
{
	return this->diemtoan;
}

float Student::getDiemly()
{
	return this->diemly;
}

float Student::getDiemhoa()
{
	return this->diemhoa;
}

float Student::getDiemTB()
{
	return this->diemTB;
}

Ranked_hs Student::getLoaihs()
{
	return this->loaihs;
}

char* Student::getTenhs()
{
	return ttcn_hs.getTen();
}

int Student::getTuoihs()
{
	return ttcn_hs.getTuoi(); 
}

Gender Student::getGioitinhhs()
{
	return ttcn_hs.getGioitinh();
}

char* Student::getCmndhs()
{
	return ttcn_hs.getCmnd();
}

char* Student::getDiachihs()
{
	return ttcn_hs.getDiachi();
}


//setter
void Student::setDiemtoan(float diemtoan_in)
{
	if (diemtoan_in >= 0 && diemtoan_in <= 10)
	{
		this->diemtoan = diemtoan_in;
	}
}

void Student::setDiemly(float diemly_in)
{
	if (diemly_in >= 0 && diemly_in <= 10)
	{
		this->diemly = diemly_in;
	}
}

void Student::setDiemhoa(float diemhoa_in)
{
	if (diemhoa_in >= 0 && diemhoa_in <= 10)
	{
		this->diemhoa = diemhoa_in;
	}
}

void Student::setTenhs(char* tenhs_in)
{
	this->ttcn_hs.setTen(tenhs_in);
}

void Student::setTuoihs(int tuoihs_in)
{
	this->ttcn_hs.setTuoi(tuoihs_in);
}

void Student::setGioitinhhs(Gender gioitinhs_in)
{
	this->ttcn_hs.setGioitinh(gioitinhs_in);
}

void Student::setCmndhs(char* cmndhs_in)
{
	this->ttcn_hs.SetCmnd(cmndhs_in);
}

void Student::setDiachihs(char* diachihs_in)
{
	this->ttcn_hs.setDiachi(diachihs_in);
}