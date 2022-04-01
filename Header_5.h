#ifndef DM
#define DM
#include<iostream>
using namespace std;

class DinMas_double {
private:
	double *arr_double;
public:
	DinMas_double(int size) {
		arr_double = new double[size];
	}
	void Set_massive(int size);
	void Print_massive_double(int size);
	~DinMas_double(){
		delete[] arr_double;
	}
};
 /////////////////////////////////////////
class DinMas_int {
private:
	int *arr_int;
public:
	DinMas_int() {
		arr_int = new int[12];
	}
	~DinMas_int() {
		delete [] arr_int;
	}
	void Set_massive_random();
	void Print_massive_int();
	void Chet_nechet();
};

///////////////////////////////////////// 

class DinMass_binary {
private:
	int **arr_binary;
public:
	DinMass_binary(int size_1, int size_2) {
		arr_binary = new int* [size_1];
		for (int i = 0; i < size_1; i++) {
			arr_binary[i] = new int[size_2];
		}
	}
	void Set_massive_binary(int size_1, int size_2);
	void Print_massive_binary(int size_1, int size_2);
};
#endif
