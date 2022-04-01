#include "Header_5.h"

void DinMas_double:: Set_massive(int size){
	cout << "InPut:" << endl;
	for (int i = 0; i < size; i++) {
		double temp;
		cin >> temp;
		arr_double[i] = temp;
	}
}

void DinMas_double::Print_massive_double(int size) {
	cout << "OutPut:" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr_double[i] << " ";
	}
}
////////////////////////////////////////////

void DinMas_int::Set_massive_random() {
	srand(time(0));
	for (int i = 0; i < 12; i++) {
		arr_int[i] = rand() % 100;
	}
}

void DinMas_int::Print_massive_int() {
	for (int i = 0; i < 12; i++) {
		cout << arr_int[i] << " ";
	}
}
/////////////////////////////////////////////

void DinMas_int::Chet_nechet() {
	int i = 0;
	while (i < 12) {
		int arr_int_temp;
		arr_int_temp = arr_int[i];
		arr_int[i] = arr_int[i + 1];
		arr_int[i + 1] = arr_int_temp;
		i = i + 2;
	}
}

void DinMass_binary::Set_massive_binary(int size_1, int size_2) {
	srand(time(0));
	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
			arr_binary[i][j] = 10 + rand() % 40;
		}
	}
}

void DinMass_binary::Print_massive_binary(int size_1, int size_2) {
	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
			cout << arr_binary[i][j]<<" ";
		}
		cout << endl;
	}
}