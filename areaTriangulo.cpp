#include <iostream>

using namespace std;

/*defino tipo de variables que seran numericas enteras y decimales
las variables seran base del tirangulo, altura del triangulo y area del triangulo
se pide ingresar la base y la altura del triangulo
se procede a hacer la operacion de base por altura sobre dos
se muestra resultado que sera el area del triangulo
*/



int main (){
    float baseDelTriangulo;
    cout << "Ingrese base del triangulo: \n" ;
    cin >> baseDelTriangulo;

    float alturaDelTriangulo;
    cout << "Ingrese altura del triangulo: \n";
    cin >> alturaDelTriangulo;

float areaDelTriangulo;
    areaDelTriangulo = (baseDelTriangulo * alturaDelTriangulo)/2;
    cout << "El Área del triángulo es: \n" << areaDelTriangulo;



return 0;

}
