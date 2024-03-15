#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//1

	int a, sum = 0;

	std::cout << "Введите значение a: ";
	std::cin >> a;

	for (int i = a; i <= 500; i++)
	{
		sum = sum + i;
	}

	std::cout << "\nСумма целых числе от " << a << " до 500: " << sum;

	//2

	int x, y;

	std::cout << "Введите значение x: ";
	std::cin >> x;
	std::cout << "Введите значение y: ";
	std::cin >> y;

	std::cout << "Значение x в степени y: " << pow(x, y);

	//3

	float sum = 0, num = -1;

	for (int i = 0; i <= 1000; i++)
	{
		sum = sum + i;
		num++;
	}
	std::cout << "Среднее арифметическое целых чисел от 1 до 1000: " << sum / num;

	//4

	int a, b = 1;

	std::cout << "Введите значения a (1 <= a <= 20): ";
	std::cin >> a;

	for (int i = a; i <= 20; i++)
	{
		b = b * i;
	}

	std::cout << "Произведение целых чисел от " << a << " до 20: " << b;

	//5

	int k;

	std::cout << "Введите номер варианта: ";
	std::cin >> k;

	for (int i = 0; i <= 10; i++)
	{
		std::cout << k << " * " << i << " = " << k * i << "\n";
	}


	return 0;
}