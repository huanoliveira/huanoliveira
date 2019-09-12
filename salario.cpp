/**********************************************************
- Autor:     Huan oliveira
- Descri��o: salario
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>  // comandos pow, sqrt, cbrt, etc
#include <ctype.h> // comando toupper ou tolower


using namespace std;

int main()
{
    //Declara��o de vari�veis

    int iOpcao = 0;
    float fsalario = 0;
    float fresult = 0;
    int iMeses = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (iOpcao != 4)
    {
        system("cls");
        cout << "----------------------------------------\n\n";
        cout << "1 - Novo sal�rio\n\n";
        cout << "2 - F�rias\n\n";
        cout << "3 - D�cimo terceiro\n\n";
        cout << "4 - Sair\n\n";
        cout << "----------------------------------------\n\n";

        cout << "Op��o: ";
        cin >> iOpcao;

        switch (iOpcao)
        {
        case 1:
            cout << "Voc� selecionou Novo sal�rio!" << endl;
            cout << "Digite o valor do sal�rio: ";
            cin >> fsalario;

            if (fsalario < 210)
            {
                fresult = fsalario * 1.15;

                cout << "O novo sal�rio ser�: " << fresult << endl;
                system("pause");
            }

            else if (fsalario <= 600)
            {
                fresult = fsalario * 1.1;

                cout << "O novo sal�rio ser�: " << fresult << endl;
                system("pause");
            }

            else
            {
                fresult = fsalario * 1.05;

                cout << "O novo sal�rio ser�: " << fresult << endl;
                system("pause");
            }
            break;

        case 2:
            cout << "Voc� selecionou F�rias!" << endl;
            cout << "Digite o valor do sal�rio: ";
            cin >> fsalario;

            fresult = fsalario + (fsalario / 3);

            cout << "O valor das f�rias ser�: " << fresult << endl;
            system("pause");
            break;

            case 3:
            cout << "Voc� selecionou D�cimo terceiro!" << endl;
            cout << "Digite o valor do sal�rio: ";
            cin >> fsalario;

            cout << "Digite a quantidade de meses (no m�ximo 12): ";
            cin >> iMeses;

            if (0 < iMeses < 13 )
            {
                fresult = (fsalario / 12) * iMeses;

                cout << "O d�cimo terceiro ser� de: " << fresult << endl;
                system("pause");
            }

            else
            {
                cout << "N�mero de meses invalido." << endl;
                system("pause");
            }
            break;

            case 4:
                cout << "Obrigado pelo acesso!" << endl;
                system("pause");
                break;

            default:
                cout << "Op��o invalida." << endl;
                system("pause");
        }  //switch
    }        //while


    return 0;
}



