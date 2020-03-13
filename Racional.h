# pragma once
#include <string>
#include <iostream>
using namespace std;

class Racional
{
private:
	int num, den;
public:
	Racional();
	Racional(int,int);
	int getNum();
	int getDen();
	void setNum(int);
	void setDen(int);
	string toString();

	Racional operator+(Racional operando){
		den=this->den*operando.getDen();
		num=(this->num*operando.getDen())+(this->den*operando.getNum());
	}
	Racional operator*(Racional operando){
		den=this->den*operando.getDen();
		num=this->num*operando.getNum();
	}
};