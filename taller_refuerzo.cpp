//
//  main.cpp
//  ejercicio_19_sept
//
//  Created by MacBook Retina on 19/09/16.
//  Copyright © 2016 MacBook Retina. All rights reserved.
//

#include <iostream>

using namespace std;
//Variable del Menu
int vMenu;
//Variables Ejercicio1
int i=15,num_h=32;

//Variables Ejercicio2
int numero_a,numero_b,ij2=0,numero_ab,numero_bb,suma_num;

//Variavles Ejercicio3
int a=7; int b=0; int c=0;

//variables Ejercicio6
int num_a_4=7,num_b_4,num_c_4,multiplo_4=0;

//Variable Ejericio5
int numero1,numero2,numero3,numero4,numero5,suma_numeros;

//variables Ejercicio6
int num_a,num_b,num_c,multiplo=0;

//variables Ejercicio7
int numero_entero_7,i7,cuenta_digito;

//Variables Ejericiso9
int numero_entero_8,numero_divisible_8=1;

//Bariables Ejericio10
int suma_numero_8=0;

//Variables Ejericio11
int numero_divisible_11,numero_entero_11;
bool numero_primo = true;

//variables Ejericio12
int numero_entero_12,numero_divisible_12;

//variables Ejericio13
int numero_entero_14,ciclo_hasta_14=10,resultado_mutiplicacion_14;

void clear() {
    cout << string( 100, '\n' );
}

void pauseC() {
    system( "read -n 1 -s -p \"...\"" );
}

void pauseClear() {
    pauseC();
    clear();
}

void ejercicio1() {
    //Ciclo con while
    cout<<"De forma acedentente"<<endl;
    while (i<=num_h) {
        cout<<i<<" -";
        i++;
    }
    //Ciclo con FOR
    cout<<"De forma acedentente"<<endl;
    for (int i=30; i>=15; i--) {
        cout<<i<<" -";
    }
    pauseClear();
};

void ejercicio2() {
    cout<<"Ingrese 2 numeros enteros:"<<endl;
    cin>>numero_a>>numero_b;
    
    numero_ab = numero_a;
    numero_bb = numero_b;
    
    cout<<"De forma acedentente"<<endl;
    while (numero_a<=numero_b) {
        cout<<numero_a<<" - ";
        numero_a++;
    }
    
    cout<<"De forma acedentente"<<endl;
    while (numero_ab<=numero_bb) {
        cout<<numero_bb<<" - ";
        numero_bb--;
        suma_num = suma_num + numero_bb;
    }
    pauseClear();
    
}

void ejercicio3() {
    cout<<"La Sumatoria de los numero es :"<<suma_num<<endl;
    pauseClear();
}

void ejercicio4() {
    cout<<"Ingrese un numero"<<endl;
    cin>>num_c_4;
    
    while (multiplo_4<=num_c_4) {
        multiplo_4 = multiplo_4+num_a_4;
        if (multiplo_4<=num_c_4) {
            cout<<" - "<<multiplo_4;
        }
    }
    cout<<endl;
    pauseClear();
}

void ejercicio5() {
    cout<<"1. ingrese un numero:";
    cin>>numero1;
    while (numero1<=0) {
        cout<<"1. ingrese un numero:";
        cin>>numero1;
        
        if (numero1 % 2 != 0 ) {
            numero1 = -1;
        }
    }

    cout<<"2. ingrese un numero:";
    cin>>numero2;
    while (numero2<=0) {
        cout<<"2. ingrese un numero:";
        cin>>numero2;
        if (numero2 % 2 != 0) {
            numero2 = -1;
        }
    }

    cout<<"3. ingrese un numero:";
    cin>>numero3;
    while (numero3<=0) {
        cout<<"3. ingrese un numero:";
        cin>>numero3;
        if (numero3 % 2 != 0) {
            numero3 = -1;
        }
    }
    
    cout<<"4. ingrese un numero:";
    cin>>numero4;
    while (numero4<=0) {
        cout<<"4. ingrese un numero:";
        cin>>numero4;
        if (numero4 % 2 != 0) {
            numero4 = -1;
        }
    }
    
    cout<<"5. ingrese un numero:";
    cin>>numero5;
    while (numero5<=0) {
        cout<<"5. ingrese un numero:";
        cin>>numero5;
        if (numero5 % 2 != 0) {
            numero5 = -1;
        }
    }
    
    suma_numeros = numero1+numero2+numero3+numero4+numero5;
    cout<<"La suma de los numeros es:"<<endl;
    cout<<numero1<<" + "<<numero2<<" + "<<numero3<<" + "<<numero4<<" + "<<numero5<<" ="<<suma_numeros<<endl;
    
    pauseClear();
}

void ejercicio6()
{
    cout<<"Ingrese 3 numeros (a,b y c) calcularemos sus multiplos entre b y c"<<endl;
    cin>>num_a>>num_b>>num_c;
    
    while (multiplo<=num_c) {
        multiplo = multiplo+num_a;
        //cout<<multiplo<<" - "<<num_c<<endl;
        if (multiplo<=num_c) {
            cout<<multiplo<<" - ";
        }
    }
    cout<<endl;
    pauseClear();
}


void ejercicio7() {
    cout<<"Ingrese un numero entero:"<<endl;
    cin>>numero_entero_7;
    
    while (numero_entero_7>0) {
        numero_entero_7=numero_entero_7/10;
        cuenta_digito++;
    }
    cout<<"tiene :"<<cuenta_digito<<endl;
    pauseClear();
}

void ejercicio9() {
    cout<<"ingrese un numero entero positivo:"<<endl;
    cin>>numero_entero_8;
    
    
    for (numero_divisible_8=1; numero_entero_8>=numero_divisible_8; numero_divisible_8++) {
        if (numero_entero_8 % numero_divisible_8 == 0) {
            cout<<" -"<<numero_divisible_8<<endl;
            suma_numero_8++;
        }
    }
    pauseClear();
}

void ejercicio10() {
    cout<<"La cantidad de los divisores del punto 9 es: "<<suma_numero_8<<endl;
    pauseClear();
}

void ejercicio11() {
    cout<<"ingrese un numero entero positivo:"<<endl;
    cin>>numero_entero_11;
    numero_divisible_11=2;
    
    while (numero_divisible_11<numero_entero_11) {
        if (numero_entero_11 % numero_divisible_11 != 0) {
        } else {
            numero_primo = false;
        }
        numero_divisible_11++;
    }
    
    if (numero_primo == false) {
        cout<<"No es numero Primo"<<endl;
    } else {
        cout<<"Si es Primo"<<endl;
    }
    pauseClear();
}

void ejercicio12() {
    cout<<"Ingrese un numero entero positivo"<<endl;
    cin>>numero_entero_12;
    numero_divisible_12=2;
    
    for (int i=1; i<numero_entero_12; i++) {
        //cout<<i<<endl;
        
        while (int b=0<i) {
            //cout<<i<<"% "<<numero_divisible_12<<enld;
            if (i % b != 0) {
                cout<<"-"<<i<<endl;
            }
            b++;
        }
    }
    
}

void ejercicio14() {
    cout<<"Ingrese un numero entero mayor que 1 y que sea positivo:"<<endl;
    cin>>numero_entero_14;
    
    if (numero_entero_14>=1) {
        for (int ciclo=1; ciclo<=ciclo_hasta_14; ciclo++) {
            resultado_mutiplicacion_14 = ciclo*numero_entero_14;
            cout<<numero_entero_14<<" x "<<ciclo<<" = "<<resultado_mutiplicacion_14<<endl;
        }
    }
}

//Aqui voyyyyyyyyy
void ejercicio15() {
    if (numero_entero_14>=1) {
        for (int ciclo=1; ciclo<=ciclo_hasta_14; ciclo++) {
            resultado_mutiplicacion_14 = ciclo*numero_entero_14;
            cout<<ciclo<<" x "<<numero_entero_14<<" = "<<resultado_mutiplicacion_14<<endl;
        }
    }
}

 

int main(int argc, const char * argv[]) {
    do {
        cout<<"Menu Principal"<<endl<<"1. Ejericio de ciclo asc,desc"<<endl
        <<"2. Ejericio de ciclo numeros de asc,desc"<<endl
        <<"3. Ejericio de sumatoria de los numero punto"<<endl
        <<"4. Calcular numero primo"<<endl
        <<"5. Ingrese 5 numeros enteros positivos"<<endl
        <<"6. Pida al usuario los enteros a,b,c.  Escriba en pantalla los múltiplos de a que estén entre b y c."<<endl
        <<"7. Pida al usuario los entero y calcular sus cifras."<<endl
        <<"9. Pida al usuario los entero y mostrar por cual es divisible."<<endl
        <<"10. Catidad de divisores del ejericio 9."<<endl
        <<"11. Preguntar si es numero primo."<<endl
        <<"14. Tabla de mutiplicar de N."<<endl
        <<"15. Tabla de 1 con mutiplicar de N."<<endl

        <<"21. Salir."<<endl;
        
        cin>>vMenu;
        switch (vMenu) {
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
                ejercicio4();
            break;
            case 5:
                ejercicio5();
                break;
            case 6:
                ejercicio6();
                break;
            case 7:
                ejercicio7();
                break;
            case 9:
                ejercicio9();
                break;
            case 10:
                ejercicio10();
            case 11:
                ejercicio11();
                break;
            case 12:
                ejercicio12();
                break;
            case 14:
                ejercicio14();
                break;
            case 15:
                ejercicio15();
                break;
            default: cout<<"No pue posible ingresar al menu solicitado";
        }
    }
    while (vMenu!=99);
}
