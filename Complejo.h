#pragma once

#include <iostream>
using namespace std;

class Complejo
{
	int real, imaginaria;
public:
	Complejo();
	Complejo(int,int);
	int getReal();
	int getImaginaria();
	void setReal(int);
	void setImaginaria(int);
	string toString();

	Complejo operator+(Complejo operando){
		den=this.den*operando.getDen();
		num=(this.num*operando.getDen())+(this.den*operando.getNum());
	}
	Complejo operator*(Complejo operando){
		den=this.den*operando.getDen();
		num=this.num*operando.getNum();
	}
};