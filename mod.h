#pragma once
class mod
{
	int a;
	int b;
	int result;

	//	� ������ ������ ���� ���������� ��������� ������������(�� ���������, ����������� �����������).
	//	������ ���� ����������� ��������� ��������� : +, -, = , !=

public:
	mod(const mod& obj);	//����������� �����������
	~mod();
	mod(int a = 5, int b = 3);

	void set(int a, int b);
	bool operator==(mod obj);
	bool operator!=(mod obj);
	mod operator+(mod obj);
	mod operator-(mod obj);
	mod& operator=(const mod& obj);
	void show_res();
};

