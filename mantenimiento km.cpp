#include<iostream>
using namespace std;
main(){
	int km,total;
	cout<<"Ingrese du Kilometraje : ";
	cin>>km;
	if(km>100000){
		total=km*5;
		cout<<"El costo es de : $"<<total;
	}
	else{
		if(km*3<20000){
			cout<<"El costo es de : $20000";
		}
		else{
			cout<<"El costo es de : $"<<km*3;
		}
	}

}
