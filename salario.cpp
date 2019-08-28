/**********************************************************
- Autor:     Huan oliveira
- Descrição: salario
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
int isalario=0;

cout<<" digite o salario";
cin>> isalario;


if (isalario>=500)
    { cout<< "voce nao tem direito ao aumento no salario "
         << endl;
    }



else if  (isalario<500)
    { cout<< " seu novo salario e de" << (isalario+(isalario*(0.3)))
         << endl;
    }

}
