#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include "Functions.h"

template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задача 1. Выделение памяти под двумерный массив
	/*std::cout << "Задача 1.\nВведите кол-во рядов -> ";
	std::cin >> n;
	std::cout << "Введите кол-во столбцов -> ";
	std::cin >> m;
	int** mx;
	mx_memory(mx, n, m);
	std::cout << "Сгенерированный массив:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			std::cout << mx[i][j] << '\t';
	std::cout << '\n';
	}

	clear_mx_memory(mx, n);
	std::cout << std::endl;*/


	// Задача 2. Объединение массивов
	/*std::cout << "Задача 2.\nМассив №1:\n";
	const int size2_1 = 5;
	int arr2_1[size2_1];
	fill_arr(arr2_1, size2_1, -10, 15);
	print_arr(arr2_1, size2_1);

	std::cout << "Задача 2.\nМассив №2:\n";
	const int size2_2 = 7;
	int arr2_2[size2_2];
	fill_arr(arr2_2, size2_2, -15, 10);
	print_arr(arr2_2, size2_2);

	int var;
	int* arr2 = positive_memory(arr2_1, size2_1, arr2_2, size2_2, var);
	std::cout << "Итоговый массив: ";
	print_arr(arr2, var);
	delete[] arr2;
	std::cout << std::endl;*/

	// Задача 3. Название числа
	std::cout << "Задача 3.\nВведите двузначное число -> ";
	std::cin >> n;
	if (number_name(n, "number.txt"))
		std::cout << "Число записано в файл\n\n";
	else
		std::cout << "Ошибка выполнения функции!\n\n";
	std::cout << std::endl;

	return 0;
}