/**********************************************************
- Autor:     Huan oliveira
- Descri��o: senha
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
        float fNum1 = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

      cout << "Digite a senha: ";
      cin >> fNum1;

    if  (fNum1 == 0000)

      cout << " A senha est� correta. ";

    else

      cout << " A senha est� errada. Tente novamente. ";

    return 0;
}
