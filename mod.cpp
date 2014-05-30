#include "stdafx.h"
#include "mod.h"

mod::mod(const mod& obj)
{
	printf("CC");
	set(obj.a, obj.b);
}

mod::mod(int a /*= 5*/, int b /* = 3*/)
{
	set(a, b);
}


mod::~mod()
{
}

bool mod::operator==(mod obj)
{
	if (this->result == obj.result)
		return true;
	return false;
}

bool mod::operator!=(mod obj)
{
	return !(*this == obj);
}

mod mod::operator+(mod obj)
{
	mod res = mod();
	res.result = obj.result + this->result;
	res.b = res.result + 1;
	res.a = res.result;
	return res;
}

mod mod::operator-(mod obj)
{
	mod res = mod();
	if (obj.result >= this->result)
		res.result = obj.result - this->result;
	else
		res.result = this->result - obj.result;
	res.b = res.result + 1;
	res.a = res.result;
	return res;
}

void mod::show_res()
{
	printf("( %d mod %d = %d ) \n", a, b, result);
}

mod& mod::operator=(const mod& obj)
{
	set(obj.a, obj.b);
	return *this;
}

void mod::set(int a, int b)
{
	this->a = a;
	this->b = b;
	this->result = a%b;
}

