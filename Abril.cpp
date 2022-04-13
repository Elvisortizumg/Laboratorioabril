#include <iostream>
using namespace:: std;
int main()
{
	int opc;// Variable para menu
	float n1,n2;
	do
	{
		cout<<"ingrese una opcion, 0 para terminar" <<endl;
		cout<<"******* 1.--Suma *******"<<endl;
		cout<<"******* 2.--Resta *******"<<endl;
		cout<<"******* 3.--Multiplicacion *******"<<endl;
		cout<<"******* 4.--Division *******"<<endl;
		cout<<"******* 0.--Terminar Programa *******"<<endl;
		cin>>opc;
	switch(opc)	
	{
		break;
		case 1:
			cout<<"suma"<<endl;
			cout<<"ingrese 2 numeros\n";
			cin>>n1;
			cin>>n2;
			cout<<"la suma es "<<n1+n2<<endl;
			break;
			case 2:
			cout<<"resta"<<endl;
			cout<<"ingrese 2 numeros\n";
			cin>>n1;
			cin>>n2;
			cout<<"La resta es "<<n1-n2<<endl;
			break;
			case 3:
			cout<<"\nmultiplicacion"<<endl;
			cout<<"\ningrese 2 numeros\n";
			cin>>n1;
			cin>>n2;
			cout<<"\nla multiplicacion es "<<n1*n2<<endl;
			break;
			case 4:
			cout<<"divicion"<<endl; 
			cout<<"ingrese 2 nmeros\n";
			cin>>n1;
			cin>>n2;
			cout<<"la divicion es "<<n1/n2<<endl;
			break;	
			default: cout<<"\nActualmente solo contamos con operaciones basicas espera la proxima actualizacion"<<endl;
	}
	} while(opc!= 0);
	cout<<"Termino el programa"<<endl;
	return 0;
}
