#include "Header_5.h"

int main() {
	setlocale(LC_ALL, "RUS");
	cout << "Введите размер массива: ";
	int N;
	cin >> N;
	DinMas_double Massive_double(N);
	Massive_double.Set_massive(N);
	Massive_double.Print_massive_double(N);
	cout << endl;
	cout << "\n";

//////////////////////////////////////////

	DinMas_int Massive_int;
	Massive_int.Set_massive_random();
	Massive_int.Print_massive_int();
	cout << " - Создан массив случайных чисел из 12 элементов!";
	Massive_int.Chet_nechet();
	cout << '\n';
	Massive_int.Print_massive_int();
	cout << endl << endl;

//////////////////////////////////////////

	cout << "Задайте количество строк и столбцов!" << endl << "Кол-во строк: ";
	int str;
	cin >> str;
	cout << "Количество столбцов: ";
	int column;
	cin >> column;
	DinMass_binary Massive_binary(str,column);
	Massive_binary.Set_massive_binary(str, column);
	Massive_binary.Print_massive_binary(str, column);

	return 0;
}
