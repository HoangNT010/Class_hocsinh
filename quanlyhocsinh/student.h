#include "personal.h"

typedef enum {
	Gioi,
	Kha,
	TrungBinh,
	Kem
}Ranked_hs;


class Student : protected Person
{
private:
	float diemtoan;
	float diemly;
	float diemhoa;
	float diemTB;
	Ranked_hs loaihs;
	Person ttcn_hs;

public:
	//constructor - destructor
	Student();
	Student(float diemtoan_in, float diemly_in, float diemhoa_in);
	~Student();

	//getter
	float getDiemtoan();
	float getDiemly();
	float getDiemhoa();
	float getDiemTB();
	Ranked_hs getLoaihs();
	char* getTenhs();
	int getTuoihs();
	Gender getGioitinhhs();
	char* getCmndhs();
	char* getDiachihs();

	//setter
	void setDiemtoan(float diemtoan_in);
	void setDiemly(float diemly_in);
	void setDiemhoa(float diemhoa_in);
	void setTenhs(char *tenhs_in);
	void setTuoihs(int tuoihs_in);
	void setGioitinhhs(Gender gioitinhs_in);
	void setCmndhs(char* cmndhs_in);
	void setDiachihs(char* diachihs_in);

	//function
	float tinhdiemTB();
	void xeploaihs();
	void nhaphocsinh();
	void xuathocsinh();
};