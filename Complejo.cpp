#include "Complejo.h"
#include <string>
#include <iostream>
using namespace std;

Complejo::Complejo(){}

Complejo::Complejo(int real1, int imaginaria1){
	real=real1;
	imaginaria=imaginaria1;
}

int Complejo::getReal(){
	return real;
}

int Complejo::getImaginaria(){
	return imaginaria;
}

void Complejo::setReal(int n){
	real=n;
}

void Complejo::setImaginaria(int d){
	imaginaria=d;
}

string Complejo::toString(){
	if (imaginaria<0)
	{
		cout<<real<<imaginaria<<"i";
	}
	else{
		cout<<real<<"+"<<imaginaria<<"i";
	}
	return " ";
}
