/**********************************************************
- Autor:     Huan oliveira
- Descrição: media
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
        float fNum1 = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

      cout << "Digite sua idade: ";
      cin >> fNum1;

    if  (fNum1 < 18)

      cout << " Você  é menor de idade. ";

    else

      cout << " Você  é maior de idade. ";

    return 0;
}
