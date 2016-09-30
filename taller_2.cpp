#include <iostream>
using namespace::std;
//#include "helper.cpp"

//Menu
int Vmenu=0;

//Variables Ejercicio1
int i=0;
int a=0; int b=0; int c=0,mutiplo=0;

//Variables Ejercicio2
int num=0,num_mult=1,num_1;

//Variavles Ejercicio3
int numero_entero,ciclo,ciclo_hasta=10,resultado_mutiplicacion;

void ejercicio1()
{
    cout<<"Ingrese 3 numeros (a,b y c) calcularemos sus multiplos entre b y c"<<endl;
    cin>>a>>b>>c;
    
    while (mutiplo<=c) {
        mutiplo = mutiplo+a;
        if (mutiplo>=b) {
            cout<<" - "<<mutiplo;
        }
    }
    cout<<endl;
}

//Ejericio2
void ejercicio2()
{
    cout<<"Ingrese un numero positivo y que sea entero: "<<endl;
    cin>>num;
    
    if(num>=0)
    {
        cout<<"Es Divisible por: ";
        do {
            if (num % num_mult == 0) {
                cout<<num_mult<<"-";
            }
            num_mult++;
        } while (num_mult<=num);
        cout<<endl;
    }

}

//Ejercicio3
void ejercicio3()
{
    cout<<"Ingrese un numero entero mayor que 1 y que sea positivo:"<<endl;
    cin>>numero_entero;
    
    if (numero_entero>=1) {
        for (ciclo=1; ciclo<=ciclo_hasta; ciclo++) {
            resultado_mutiplicacion = ciclo*numero_entero;
            cout<<numero_entero<<" x "<<ciclo<<" = "<<resultado_mutiplicacion<<endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    cout<<"1. Enteros a,b yc"<<endl
    <<"2. Calcular por que numero es divisible un entero positivo"<<endl
    <<"3. Numero Positivo Entero con sus tablas de mutiplicar"<<endl
    <<"4. Salir"<<endl;
    cin>>Vmenu;
    
    switch (Vmenu) {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        case 4:
            cout<<"Gracias por participar"<<endl;
            break;
        default:
            cout<<"No fue posible encontrar el menu"<<endl;
            break;
    }
}
