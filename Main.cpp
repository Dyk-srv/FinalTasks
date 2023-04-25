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

	// ������ 1. ��������� ������ ��� ��������� ������
	/*std::cout << "������ 1.\n������� ���-�� ����� -> ";
	std::cin >> n;
	std::cout << "������� ���-�� �������� -> ";
	std::cin >> m;
	int** mx;
	mx_memory(mx, n, m);
	std::cout << "��������������� ������:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			std::cout << mx[i][j] << '\t';
	std::cout << '\n';
	}

	clear_mx_memory(mx, n);
	std::cout << std::endl;*/


	// ������ 2. ����������� ��������
	/*std::cout << "������ 2.\n������ �1:\n";
	const int size2_1 = 5;
	int arr2_1[size2_1];
	fill_arr(arr2_1, size2_1, -10, 15);
	print_arr(arr2_1, size2_1);

	std::cout << "������ 2.\n������ �2:\n";
	const int size2_2 = 7;
	int arr2_2[size2_2];
	fill_arr(arr2_2, size2_2, -15, 10);
	print_arr(arr2_2, size2_2);

	int var;
	int* arr2 = positive_memory(arr2_1, size2_1, arr2_2, size2_2, var);
	std::cout << "�������� ������: ";
	print_arr(arr2, var);
	delete[] arr2;
	std::cout << std::endl;*/

	// ������ 3. �������� �����
	std::cout << "������ 3.\n������� ���������� ����� -> ";
	std::cin >> n;
	if (number_name(n, "number.txt"))
		std::cout << "����� �������� � ����\n\n";
	else
		std::cout << "������ ���������� �������!\n\n";
	std::cout << std::endl;

	return 0;
}