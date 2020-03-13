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
		Racional resp;
		resp.den=this->den*operando.getDen();
		resp.num=(this->num*operando.getDen())+(this->den*operando.getNum());
		return resp;
	}
	Racional operator*(Racional operando){
		Racional resp;
		resp.den=this->den*operando.getDen();
		resp.num=this->num*operando.getNum();
		return resp;
	}
};