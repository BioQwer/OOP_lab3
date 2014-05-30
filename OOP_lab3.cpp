// OOP_lab3.cpp: ���������� ����� ����� ��� ����������� ����������.
//
//
#include "stdafx.h"
#pragma warning(disable:4996)
#include <locale.h>
#include <iostream>
#include <math.h>
#include "mod.h"

using std::endl;
using std::cout;
using std::cin;

void menu()
{
	printf(" 1.������� \n");
	printf(" 2.������� \n");
	printf(" 3.��������� \n");
	printf(" 4.����������� ����������� \n");
	printf(" 5.Set A \n");
	printf(" 6.Set B \n");
	printf(" 8.����� \n");
	printf(" ������ �����: ");
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	mod a = mod(3, 2);
	mod b = mod(12, 5);

	int ch;
	do
	{
		system("CLS");
		printf(" A = "); a.show_res();
		printf(" B = "); b.show_res();
		menu();
		cin >> ch;
		cin.sync();
		switch (ch)
		{
		case 1:
		{
				  printf("��������\n");
				  cout << "��������� = ";
				  mod r = a + b;
				  r.show_res();
		}
			break;
		case 2:
		{
				  printf("��������� \n");
				  cout << "��������� = ";
				  mod v = a - b;
				  v.show_res();
		}
			break;
		case 3:
		{
				  cout << "���������   " << (a == b) << endl;
		}
			break;
		case 4:
		{
				  mod d = mod(a);
				  printf("������� � = "); d.show_res();
				  mod q = mod(b);
				  printf("������� B = "); q.show_res();
		}
			break;
		case 5:
		{
				  int q, w;
				  printf("������� � = "); cin >> q;
				  printf("������� b = "); cin >> w;
				  a.set(q, w);
		}
			break;
		case 6:
		{
				  int q, w;
				  printf("������� � = "); cin >> q;
				  printf("������� b = "); cin >> w;
				  b.set(q, w);
		}
			break;
		}
		cout << endl;
		system("pause");
	} while (ch != 8);

	return 0;
}