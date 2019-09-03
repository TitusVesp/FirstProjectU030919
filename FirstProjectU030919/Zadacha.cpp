#include "Zadacha.h"
#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
#include <time.h>
#include <ctime>
#include <map>
using namespace std;

void Zadacha::zadacha1()
{
	cout << "Ведите x i y" << endl;
	int x, y;

	cin >> x >> y;

	int a = 0, b = 0;

	a = -(x + y);
	b = x * y;
	if (a < 0 and b < 0) cout << "Ваше рывняння:  x^2" << a << "x" << b << " = 0" << endl;
	else
	if (a > 0 and b > 0)
		cout << "Ваше рывняння:  x^2+" << a << "x+" << b << " = 0" << endl;
	else if (a < 0 and b > 0)
		cout << "Ваше рывняння:  x^2" << a << "x+" << b << " = 0" << endl;
	else cout << "Ваше рывняння:  x^2+" << a << "x" << b << " = 0" << endl;
}

void Zadacha::zadacha2()
{
	cout << "Вести a,b,c!" << endl;
	int a, b, c;
	cin >> a >> b >> c;

	int Ar[] = {a,b,c};

	int stk = 0;

	for (int і = 1; і < 3; і++)           
		for (int j = 0; j < 3 - і; j++)   
			if (Ar[j] > Ar[j + 1])
			{
				stk = Ar[j];         
				Ar[j] = Ar[j + 1];
				Ar[j + 1] = stk;
			}

	if (Ar[2] >= Ar[1] + Ar[0])
	{
		cout << "Решений нет!" << endl;
	}
	else
	{
		if (Ar[2] * Ar[2] < Ar[1] * Ar[1] + Ar[0] * Ar[0])
		{
			cout << "Це гострокутний трикутник" << endl;
		}
		else
		{
			if (Ar[2] * Ar[2] == Ar[1] * Ar[1] + Ar[0] * Ar[0])
			cout << "Це прямокутний трикутник" << endl;
			else cout << "Це тупокутний трикутник" << endl;
		}
	}
}

void Zadacha::zadacha3()
{
	cout << "Ведiть 4-х значне число! " << endl;

	int num = 0;
	string a;
	cin >> a;
	int k = a.size();
	int first = 0, second = 0, temp;
	if (k != 4)
	{
		cout << "Incorrect Value!" << endl;
	}
	else
	{
		num = stoi(a);

		for (int i = 0; i < 2; i++)
		{
			temp = num % 10;
			first += temp;
			num /= 10;
		}
		for (int i = 0; i < 2; i++)
		{
			temp = num % 10;
			second += temp;
			num /= 10;
		}
		if (first == second) cout << "Частини рiвнi" << endl;
		else cout << "Частини не рiвнi" << endl;
	}

}

long RekZadacha4(long x1, long x2, long N)
{
	int temp = 0;
	while (N != 0)
	{
		temp = x2;
		x2 = x2 + x1;
		x1 = temp;
		N--;
		return RekZadacha4(x1, x2, N);
	}
	return x2;
}

void Zadacha::zadacha4()
{
	cout << "Ведiть значення n" << endl;
    
	int n;

	cin >> n;

	n = n - 2;

	int rez = RekZadacha4(0, 1, n);

	cout << "Дане число: " << rez << endl;
}


void Zadacha::zadacha6()
{
	cout << endl;
	for (int i = 2; i < 1000; i++)
	{
		if (i == 2 or i == 3 or i == 5 or i == 7) cout << i << "  ";
		if (i % 2 != 0 and i % 3 != 0 and i % 5 != 0 and i % 7 != 0) cout << i << "  ";

		if (i % 50 == 0) cout << endl;
	}
}

void Zadacha::zadacha7()
{
	cout << "Ведiть m та n" << endl;

	int m, n;
	bool check = false;
	cin >> m >> n;

	int max = m > n ? max = n : max = m;

	for (int i = 2; i < max; i++)
	{
		if (n % i == 0 and m % i == 0)
		{
			cout << "Найменше спiльне кратне: " << i << endl;
			check = true;
			return;
		}
	}
	if (!check)
	{
		cout << "Найменшого спiльного кратного нема!" << endl;
	}
}

void Zadacha::zadacha8()
{
	srand(time(NULL));

	cout << "Ведiть розмiрнiсть масиву!" << endl;
	int n = 0, m = 2;
	cin >> n;
	int* arr = new int[n];

	int** arr2 = new int* [n];

	for (int i = 0; i < n; i++)
		arr2[i] = new int[m];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}

	int count = 0;
	bool check = false;

	for (int i = 0; i < n; i++)
	{
		check = false;
		for (int j = 0; j < m; j++)
		{
			if (i == 0)
			{
				if (j == 1) arr2[i][j] = 1;
				else
				{
					arr2[i][j] = arr[i];
				}
			}
			else
			{
				for (int k = 0; k < i; k++)
				{
					if (j == 0)
					{
						if (arr[i] == arr2[k][0])
						{
							arr2[k][1]++;
							count++;
							check = true;
						}
					}

				}
				if (!check)
				{
					if (j == 1) arr2[i - count][j] = 1;
					else
					{
						arr2[i - count][j] = arr[i];
					}
				}
			}
		}
	}

	for (int i = 0; i < n - count; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr2[i][j] << "  ";
		}
		cout << endl << endl;
	}
}

void Zadacha::zadacha5()
{
	srand(time(NULL));
	
	cout << "Ведiть розмiрнiсть масиву!" << endl;
	int n = 0, m = 2;
	cin >> n;
	int *arr = new int[n];

	int** arr2 = new int* [n];

	for (int i = 0; i < n; i++)
		arr2[i] = new int[m];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}

	int count = 0;
	bool check = false;

	for (int i = 0; i < n; i++)
	{
		check = false;
		for (int j = 0; j < m; j++) 
		{
			if (i == 0)
			{
				if (j == 1) arr2[i][j] = 1;
				else
				{
					arr2[i][j] = arr[i];
				}
			}
			else
			{
				for (int k = 0; k < i; k++)
				{
					if (j == 0)
					{
						if (arr[i] == arr2[k][0])
						{
							arr2[k][1]++;
							count++;
							check = true;
						}
					}				
					
				}
				if (!check)
				{
					if (j == 1) arr2[i - count][j] = 1;
					else
					{
						arr2[i - count][j] = arr[i];
					}
				}
			}
		}	
	}
		
	for (int i = 0; i < n - count; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr2[i][j] << "  ";
		}
		cout << endl << endl;
	}
}
