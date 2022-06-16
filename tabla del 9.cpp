#include <iostream>

using namespace std;

int main()
{
    cout<<"\n\nEjemplo de bucle while que imprime tabla del 9";

    int tabla=9;
    int i=1;
    while(i<=10)
    {
        cout<<"\n"<< tabla << " x " << i << " = " << (tabla * i);
        i++;
    }
    
    return 0;
}