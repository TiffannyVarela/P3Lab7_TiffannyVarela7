#include "Racional.h"
#include <string>
#include <iostream>
using namespace std;

Racional::Racional(){

}

Racional::Racional(int num_, int den_){
	num=num_;
	den=den_;
}

int Racional::getNum(){
	return num;
}

int Racional::getDen(){
	return den;
}

void Racional::setNum(int n){
	num=n;
}

void Racional::setDen(int d){
	den=d;
}

string Racional::toString(){
	cout<<num<<"/"<<den;
	return " ";
}
