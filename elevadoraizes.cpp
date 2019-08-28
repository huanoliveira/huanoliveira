/**********************************************************
- Autor:     Huan oliveira
- Descrição: elevado e raizes
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
int inumero1=0;
int inumero2=0;
int icontrol=0;

cout<<" digite o primeiro numero";
cin>> inumero1;

cout<<" digite o segundo numero";
cin>> inumero2;

cout<<"\n\n Digite 1 para obter o primeiro numero elevado ao segundo";
cout<<"\n\n Digite 2 para obter a raiz quadrada";
cout<<"\n\n Digite 3 para obter a raiz cubica";
cin>>icontrol ;


if (icontrol<=1)
    { cout<< "o primeiro numero elevado ao segundo e igual" << pow(inumero1,inumero2)
         << endl;
    }



else if  (icontrol<=2)
    { cout<< "As raizes sao respectivamente  " << sqrt(inumero1)       <<sqrt(inumero2)
         << endl;
    }


else if  (icontrol<=3)
    { cout<< "As raizes sao respectivamente  " << cbrt(inumero1)       <<cbrt(inumero2)
         << endl;
    }

    else if  (icontrol<=5)
    { cout<< "escolha entre 1, 2, 3 ou 4 "
         << endl;
    }


    else if  (icontrol<=0)
    { cout<< "escolha entre 1, 2, 3 ou 4 "
         << endl;
    }
  }
