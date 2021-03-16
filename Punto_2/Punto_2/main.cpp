#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*
    int nu=0,acomulado=0,lont=0;
    string cad,cadaux;

    cout<<"Ingrese un numero entero: ";
    cin>>cad;

    lont=cad.length(); //Encuentro la longitud de la cadena ingresada

    for(int i=0; i<lont;i++){ //Itera sobre la longitud de la cadena
        cadaux=cad[i]; //Obtengo el primer caracter, el primer numero
        nu=stoi(cadaux);//Lo convierto a entero para operarlo
        nu=pow(nu,nu);//Lo elevo a sí mismp
        acomulado+=nu;//Sumo todas potencias.

    }
    cout<<acomulado<<endl;
    */

    int numero,n,aco=0;

    cout<<"Ingrese el numero: ";
    cin>>numero;

    while(numero>0){
        n=numero%10;
        n=pow(n,n);
        aco+=n;
        numero=numero/10;

    }
    cout<<aco<<endl;


    return 0;
}
