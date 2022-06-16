  #include <iostream>

using namespace std;

int main()
{  
    //Se pide por teclado un número entero que deber estar entre 1 y 20
    //Este número respresenta la tabla que el usuario desea generar.
    //Se pide con un bucle while generar la tabla
    int entero;
    int i;
    cout<<endl<<endl<<"Ingrese la tabla que deseas generar: ";
    cin>>entero;
   if(! (entero>=1 && entero<=20))
    {
        cout<<endl<<"Rango no válido";
        return 0; //Abandonar la ejecución edl programa
    }
    i=1;
    while(i<=25)
    {
        cout<<"\n"<< entero << " x " << i << " = " << (entero * i);
        i++;
    }

    return 0;
}