#include <iostream>

using namespace std;

int main()
{
    int cont,i,j,n=21; //La variable n determina las dimensiones de la figura. Puede ser cualquier impar.
    char letra='A';
    cont=n/2;

    for(i=1;i<=n;i++){ //Itera sobre las lineas
        if(i<=(n/2 +1)){ //Se imprime primero la parte superior de la figura

            for(j=1;j<=n;j++){ // Itera sobre cada letra de una fila i dada
                if(j<=i){ //El contador de filas, i, dice cuantos deben de imprimirse de primeras
                    cout<<letra++<<' ';
                }
                else if(i==(n/2+1)){ //Caso Particular: La unica fila que está llena, no se imprimia correctamente
                    if(j>=(n/2+2)){
                        if(j==(n/2+2))
                            letra--;
                        cout<<--letra<<' ';
                    }
                }
                else if (j>(n-i)){ //Parte de la derecha que se imprime
                    cout<<--letra<<' '; //La resta de la contidad de filas(n) y el contador de filas
                }                       //da la posicion en la que se debe empezar a imprimir estos.
                else{ //Caso que solo hay espacios
                    cout<<"  ";
                }
            }letra='A'; // En la impresion de cada linea se resetea el valor de letra
            cout<<"\n";

        }else { // Se imprime despues la parte de abajo de la figura.

            for (j=1;j<=n;j++){
                if(j<=cont) //Como son impares, la variable cont me da cantidad a imprimir de los de la derecha
                    cout<<letra++<<' ';
                else if (j>(n-cont)) //cont tambien me da la posicion desde la cual empezar a imprimir
                    cout<<--letra<<' '; // los de la izquierda
                else
                    cout<<"  ";

            }letra='A';
            cout<<"\n";
            cont-=1;
        }
    }

    cout << "Hello World!" << endl;
    return 0;
}
