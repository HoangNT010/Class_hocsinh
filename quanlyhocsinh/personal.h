#include <iostream>
#include <string.h>

using namespace std;

typedef enum {
	Male,
	Female,
	Unknow
}Gender;


class Person
{
private:
	char* ten = new char[100];
	int tuoi;
	Gender  gioitinh;
	char* cmnd = new char[15];
	char* diachi = new char[200];

public:
	Person();
	Person(char *ten_in, int tuoi_in, Gender goitinh_in, char* cmnd_in, char* diachi_in);
	~Person();

	//getter
	char* getTen();
	int getTuoi();
	Gender getGioitinh();
	char* getCmnd();
	char* getDiachi();
	
	//setter
	void setTen(char* ten_in);
	void setTuoi(int tuoi_in);
	void setGioitinh(Gender gioitinh_in);
	void SetCmnd(char *cmnd_in);
	void setDiachi(char *diachi_in);
};