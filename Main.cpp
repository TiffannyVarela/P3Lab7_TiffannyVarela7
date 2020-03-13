#include <iostream>
#include <string>
#include <vector>
#include "Racional.h"
#include "Complejo.h"
#include "Vector.cpp"
using namespace std;

int menu();
int menuTipos();
int menuOpera();
	vector<Vector<Racional>> vectores_R;
	vector<Vector<Complejo>> vectores_C;
void printR();
void printC();
int MCD(int,int);

int main(int argc, char const *argv[])
{
	int resp=-1;
	int opc=0, opc2=0, opc3=0, opc4=0;
	int num,den;
	int real,imag;
	Racional r1,r2,r3;
	Complejo c1,c2,c3;
	int mcd;
	int pos1, pos2;
	do//inicio do while
	{
		switch(opc=menu()){//inicio switch

			case 1://inicio case 1
				switch(opc2=menuTipos()){//inicio switch2

					case 1:{
					//inicio case 1
						for (int i = 0; i<3; ++i)
							{
								cout<<"\n\nIngrese Real "<<i+1<<":";
								cin>>real;
								cout<<"Ingrese Imaginario "<<i+1<<":";
								cin>>imag;
								if(i==0){
									c1 = Complejo(real,imag);
								}
								if(i==1){
									c2 = Complejo(real,imag);
								}
								else{
									c3 = Complejo(real,imag);
								}
							}
							Vector <Complejo> c(c1,c2,c3);
							vectores_C.push_back(c);
					}
					break;//fin case 1

					case 2:{//inicio case 2
						for (int i = 0; i<3; ++i)
						{
							cout<<"\n\nIngrese Numerador "<<i+1<<":  ";
							cin>>num;
							cout<<"Ingrese Denominador "<<i+1<<":  ";
							cin>>den;
							cout<<endl;
							while(den==0){
								cout<<"0 no es valido"<<endl;
								cout<<"Ingrese Denominador "<<i+1<<":  ";
								cin>>den;
							}
							
							if(i==0){
								mcd = MCD(num,den);
								num= num/mcd;
								den= den/mcd;
								r1 = Racional(num,den);
							}
							if(i==1){
								mcd = MCD(num,den);
								num= num/mcd;
								den= den/mcd;
								r2 = Racional(num,den);
							}
							else{
								mcd = MCD(num,den);
								num= num/mcd;
								den= den/mcd;
								r3 = Racional(num,den);
							}
						}
						Vector <Racional> v(r1,r2,r3);
						vectores_R.push_back(v);
					}
						
					break;//fin case 2

				}//fin switch2
			break;//fin case 1

			case 2://inicio case 2
				printR();
				printC();
			break;//fin case 2

			case 3://inicio case 3
				switch(opc3=menuOpera()){

					case 1:
						switch(opc4=menuTipos()){
							case 1:
								printC();
								cout<<"\nIngrese la posicion del primer numero: ";
								cin>>pos1;
								cout<<"\nIngrese la posicion del segundo numero: ";
								cin>>pos2;
								while(pos1<0 || pos1>vectores_C.size()-1 || pos2<0 || pos2>vectores_C.size()-1 ){
									cout<<"\nINGRESE POSICIONES VALIDAS\n"<<endl;
									printVector();
									cout<<"\nIngrese la posicion del primer numero: ";
									cin>>pos1;
									cout<<"\nIngrese la posicion del segundo numero: ";
									cin>>pos2;
								}

							break;

							case 2:
								printR();
								cout<<"\nIngrese la posicion del primer vector: ";
								cin>>pos1;
								cout<<"\nIngrese la posicion del segundo vector: ";
								cin>>pos2;
								while(pos1<0 || pos1>vectores_R.size()-1 || pos2<0 || pos2>vectores_R.size()-1 ){
									cout<<"\nINGRESE POSICIONES VALIDAS\n"<<endl;
									printVector();
									cout<<"\nIngrese la posicion del primer vector: ";
									cin>>pos1;
									cout<<"\nIngrese la posicion del segundo vector: ";
									cin>>pos2;
								}
							break;
						}
					break;

					case 2:
						switch(opc4=menuTipos()){
							case 1:
								printC();
								cout<<"\nIngrese la posicion del primer vector: ";
								cin>>pos1;
								cout<<"\nIngrese la posicion del segundo vector: ";
								cin>>pos2;
								while(pos1<0 || pos1>vectores_C.size()-1 || pos2<0 || pos2>vectores_C.size()-1 ){
									cout<<"\nINGRESE POSICIONES VALIDAS\n"<<endl;
									printVector();
									cout<<"\nIngrese la posicion del primer vector: ";
									cin>>pos1;
									cout<<"\nIngrese la posicion del segundo vector: ";
									cin>>pos2;
								}
							break;

							case 2:
								printR();
								cout<<"\nIngrese la posicion del primer vector: ";
								cin>>pos1;
								cout<<"\nIngrese la posicion del segundo vector: ";
								cin>>pos2;
								while(pos1<0 || pos1>vectores_R.size()-1 || pos2<0 || pos2>vectores_R.size()-1 ){
									cout<<"\nINGRESE POSICIONES VALIDAS\n"<<endl;
									printVector();
									cout<<"\nIngrese la posicion del primer vector: ";
									cin>>pos1;
									cout<<"\nIngrese la posicion del segundo vector: ";
									cin>>pos2;
								}
							break;
						}
					break;
				}
			break;//fin case 3

		}//fin switch

		cout<<"Desea Volver?\n 1.Si\n 2.No\n:";
		cin>>resp;
	} while (resp!=2);//fin do while
	
	return 0;
}

int menu(){//inicio metodo menu
    while(true){
        cout<<"MENU"<<endl
        <<"1.- Ingresar Vector"<<endl
        <<"2.- Listar Vectores"<<endl
		<<"3.- Operar Vectores"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 3){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 3"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menu

int menuTipos(){//inicio metodo menu
    while(true){
        cout<<"MENU TIPOS"<<endl
        <<"1.- Complejo"<<endl
        <<"2.- Racional"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 2){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 2"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menu

int menuOpera(){//inicio metodo menu
    while(true){
        cout<<"MENU TIPOS"<<endl
        <<"1.- Suma"<<endl
        <<"2.- Multiplicacion"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 2){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 2"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menu

void printR(){
	cout<<"RACIONALES\n\n";
	if (!vectores_R.empty())
	{
		for (int i = 0; i < vectores_R.size(); ++i)
		{
			cout<<"\nPosicion "<<i<<": "<<vectores_R[i].toString()<<endl;
		}
	}
	else{
		cout<<"El vector esta vacio"<<endl;
	}
}

void printC(){
	cout<<"\nCOMPLEJOS\n\n";
	if (!vectores_C.empty())
	{
		for (int i = 0; i < vectores_C.size(); ++i)
		{
			cout<<"\nPosicion "<<i<<": "<<vectores_C[i].toString()<<endl;
		}
	}
	else{
		cout<<"El vector esta vacio"<<endl;
	}
}


int MCD(int a, int b){//inicio MCD
	int r;
	if(b==0){
		return a;
	}
	else{
		r=a%b;
		a=b;
		b=r;
		return MCD(a,b);
	}
}//fin MCD