﻿// FirstProjectU030919.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Zadacha.h"
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int key = 0; 

	Zadacha zadacha;
	while (true)
	{
		cout << "Щоб запустити 1 задачу нажмiть 1,i тд; закiнчити програму 9" << endl;

		key = _getch();

		switch (key)
		{
		case 49:
			zadacha.zadacha1();
			_getch();
			system("CLS");
			break;
		case 50:
			zadacha.zadacha2();
			_getch();
			system("CLS");
			break;
		case 51 :
			zadacha.zadacha3();
			_getch();
			system("CLS");
			break;
		case 52:
			zadacha.zadacha4();
			_getch();
			system("CLS");
			break;
		case 53:
			zadacha.zadacha5();
			_getch();
			system("CLS");
			break;
		case 54:
			zadacha.zadacha6();
			_getch();
			system("CLS");
			break;
		case 55:
			zadacha.zadacha7();
			_getch();
			system("CLS");
			break;
		case 56:
			zadacha.zadacha8();
			_getch();
			system("CLS");
			break;
		case 57:
			return 0;
			break;
		default:
			cout << "Incorrect value" << endl;
			break;
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
