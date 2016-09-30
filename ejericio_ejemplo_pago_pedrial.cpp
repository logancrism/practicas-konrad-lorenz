#include <iostream>
#include <ctype.h>
using namespace std;

float cobro,tasa;
int estrato,v_predio;

void imprimir(int estrato, int v_predio, float tasa){
    cout<<"Correspondiento al cobro de su estracto ("<<estrato<<") y el valor de su Predio :"<<v_predio<<" a una tasa de "<<tasa<<" su cobro de impuesto predial fue de: "<<cobro<<endl;
};

int main() {
    //Asignar estrato
    cout<<"Ingrese su estrato:"<<endl;
    cin>>estrato;
    //Asignar Valor Predio
    cout<<"Ingrese el valor de su predio:"<<endl;
    cin>>v_predio;
    
    switch(estrato)
    {
        case 1:
            tasa = 0.1;
            cobro = v_predio*tasa;
            imprimir(estrato,v_predio,tasa);
            break;
            
        case 2:
            tasa = 0.2;
            cobro = v_predio*tasa;
            imprimir(estrato,v_predio,tasa);
            break;
            
        case 3:
            tasa = 0.3;
            cobro = v_predio*tasa;
            imprimir(estrato,v_predio,tasa);
            break;
            
        case 4:
            tasa = 0.4;
            cobro = v_predio*tasa;
            imprimir(estrato,v_predio,tasa);
            break;
            
        case 5:
            tasa = 0.5;
            cobro = v_predio*tasa;
            imprimir(estrato,v_predio,tasa);            
            
            //En caso de que no se pueda cobrar
        default: cout<<"Error no pudimos cobrar segun se estrato";
    }
    return 0;
}

