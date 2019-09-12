//************************************
//Nome: huan oliveira
//Descrição: Media das idades
//************************************

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
int i= 0;
int iIdade = 0;
int iIdd = 0;

    //setlocale(LC_ALL,"");
    //system("color F3");

while (i < 10)
{
  cout << "Digite sua idade:" ;
  cin >> iIdade;

  iIdd=iIdd+iIdade;
  i++;
  }
  cout << "A média das idades: " << iIdd/10 ;
}
