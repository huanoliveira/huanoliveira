/**********************************************************
- Autor:     Huan oliveira
- Descri��o: media
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

      cout << "Digite sua idade: ";
      cin >> fNum1;

    if  (fNum1 < 18)

      cout << " Voc�  � menor de idade. ";

    else

      cout << " Voc�  � maior de idade. ";

    return 0;
}
