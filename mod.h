#pragma once
class mod
{
	int a;
	int b;
	int result;

	//	В классе должны быть определены различные конструкторы(по умолчанию, конструктор копирования).
	//	Должны быть перегружены следующие операторы : +, -, = , !=

public:
	mod(const mod& obj);	//конструктор копирования
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

