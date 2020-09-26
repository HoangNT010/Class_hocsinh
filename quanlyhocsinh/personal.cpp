#include "personal.h"


//constructor - destructor
Person::Person()
{
	memset(this->ten,0,102);
	this->tuoi = 0;
	this->gioitinh = Unknow;
	memset(this->cmnd, 0, 18);
	memset(this->diachi,0,202);
}

Person::Person(char* ten_in, int tuoi_in, Gender gioitinh_in, char* cmnd_in, char* diachi_in)
{
	memcpy(this->ten,ten_in,strlen(ten_in));
	this->tuoi = tuoi_in;
	this->gioitinh = gioitinh_in;
	memcpy(this->cmnd, cmnd_in, strlen(cmnd_in));
	memcpy(this->diachi, diachi_in, strlen(diachi_in));
}

Person::~Person()
{
	//delete[] this->ten;
	//delete[] this->cmnd;
	//delete[] this->diachi;
}


//getter
char *Person::getTen()
{
	return this->ten;
}

int Person::getTuoi()
{
	return this->tuoi;
}

Gender Person::getGioitinh()
{
	return this->gioitinh;
}

char* Person::getCmnd()
{
	return this->cmnd;
}

char* Person::getDiachi()
{
	return this->diachi;
}


//setter
void Person::setTen(char *ten_in)
{
	if (strlen(ten_in) <= 100)
	{
		memcpy(this->ten, ten_in, strlen(ten_in));
		this->ten[(strlen(ten_in) + 1)] = '/0';
	}
}

void Person::setTuoi(int tuoi_in)
{
	if (tuoi_in >= 0 && tuoi_in <= 150)
	{
		this->tuoi = tuoi_in;
	}
}

void Person::setGioitinh(Gender gioitinh_in)
{
	this->gioitinh = gioitinh_in;
}

void Person::SetCmnd(char *cmnd_in)
{
	if (strlen(cmnd_in) <= 15)
	{
		memcpy(this->cmnd, cmnd_in, strlen(cmnd_in));
		this->cmnd[(strlen(cmnd_in) + 1)] = '/0';
	}
}

void Person::setDiachi(char *diachi_in)
{
	if (strlen(diachi_in) <= 200)
	{
		memcpy(this->diachi, diachi_in, strlen(diachi_in));
		this->diachi[(strlen(diachi_in) + 1)] = '/0';
	}
}