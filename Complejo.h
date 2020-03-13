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
		real = this->real+operando.getReal();
		imaginaria = this->imaginaria+operando.getImaginaria();
	}

	Complejo operator*(Complejo operando){
		int p1,p2,p3,p4;
		p1=this->real*operando.getReal();
		p2=this->real*operando.getImaginaria();
		p3=this->imaginaria*operando.getReal();
		p4=this->imaginaria*operando.getImaginaria();
		int part2,part3;
		part2=p2+p3;
		part3=p4*-1;
		real=p1+part3;
		imaginaria=part2;
	}
};