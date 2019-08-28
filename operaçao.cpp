/**********************************************************
- Autor:     Huan oliveira
- Descrição: operaçao
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
float fnumero1=0;
float fnumero2=0;
int icontrol=0;

cout<<" digite o primeiro numero";
cin>> fnumero1;

cout<<" digite o segundo numero";
cin>> fnumero2;

cout << "\n\n Escolha a operação: ";
cout<<"\n\n digite 1 para media entre os dois numeros " ;
cout<<"\n\n digite 2 para obter a diferenca entre o primeiro pelo segundo ";
cout<<"\n\n digite 3 para produto entre os dois numeros ou ";
cout<<"\n\n digite 4 para divisão do primeiro numero pelo segundo";
cin>>icontrol ;


if (icontrol<=1)
    { cout<< "A media e de" << (fnumero1+fnumero2)/2
         << endl;
    }



else if  (icontrol<=2)
    { cout<< "A diferenca do primeiro pelo segundo e de  " << (fnumero1-fnumero2)
         << endl;
    }

else if  (icontrol<=3)
    { cout<< "O produto e igual a" << (fnumero1*fnumero2)
         << endl;
    }

else if  (icontrol<=4)
    { cout<< "A divisao do primeiro pelo segundo e igual a" << (fnumero1/fnumero2)
         << endl;
    }

    else if  (icontrol>=5)
    { cout<< "escolha entre 1, 2, 3 ou 4 "
         << endl;
    }
  }



