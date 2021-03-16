#include <iostream>
using namespace std;

int main()
{

    int numero,n,aco=0,otron;

    cout<<"Ingrese el numero: ";
    cin>>numero;

    while(numero>0){
        n=numero%10;
        otron=n;
        for(int i=n;i>1;i--){
            n=n*otron;
        }
        aco+=n;
        numero=numero/10;

    }
    cout<<aco<<endl;


    return 0;
}
