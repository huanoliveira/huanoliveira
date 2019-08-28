/**********************************************************
- Autor:     Huan oliveira
- Descrição: senha
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

      cout << "Digite a senha: ";
      cin >> fNum1;

    if  (fNum1 == 0000)

      cout << " A senha está correta. ";

    else

      cout << " A senha está errada. Tente novamente. ";

    return 0;
}
