#include <iostream>

using namespace std;

int main()
{
    /*
        Se pide por teclado un entero que representa una tabla de multiplicar.
        Se generar tantas tablas de multiplicar, hasta que la tabla ingresada
        Sea igual a 0
    */
       int i;
       int tabla;
    cout<<endl<<endl<<"Ingrese la tabla que deseas multiplicar: ";
    cin>>tabla;
   if(! (tabla>=0))
    {
        cout<<endl<<"Error";
        return 0;
    }
    i=0;
    while(i<=25)
    {
        cout<<"\n"<< tabla << " x " << i << " = " << (tabla * i);
        i++;
    }
    return 0;
}