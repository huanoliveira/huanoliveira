/**********************************************************
- Autor:     Huan oliveira
- Descrição: salario
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>  // comandos pow, sqrt, cbrt, etc
#include <ctype.h> // comando toupper ou tolower


using namespace std;

int main()
{
    //Declaração de variáveis

    int iOpcao = 0;
    float fsalario = 0;
    float fresult = 0;
    int iMeses = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (iOpcao != 4)
    {
        system("cls");
        cout << "----------------------------------------\n\n";
        cout << "1 - Novo salário\n\n";
        cout << "2 - Férias\n\n";
        cout << "3 - Décimo terceiro\n\n";
        cout << "4 - Sair\n\n";
        cout << "----------------------------------------\n\n";

        cout << "Opção: ";
        cin >> iOpcao;

        switch (iOpcao)
        {
        case 1:
            cout << "Você selecionou Novo salário!" << endl;
            cout << "Digite o valor do salário: ";
            cin >> fsalario;

            if (fsalario < 210)
            {
                fresult = fsalario * 1.15;

                cout << "O novo salário será: " << fresult << endl;
                system("pause");
            }

            else if (fsalario <= 600)
            {
                fresult = fsalario * 1.1;

                cout << "O novo salário será: " << fresult << endl;
                system("pause");
            }

            else
            {
                fresult = fsalario * 1.05;

                cout << "O novo salário será: " << fresult << endl;
                system("pause");
            }
            break;

        case 2:
            cout << "Você selecionou Férias!" << endl;
            cout << "Digite o valor do salário: ";
            cin >> fsalario;

            fresult = fsalario + (fsalario / 3);

            cout << "O valor das férias será: " << fresult << endl;
            system("pause");
            break;

            case 3:
            cout << "Você selecionou Décimo terceiro!" << endl;
            cout << "Digite o valor do salário: ";
            cin >> fsalario;

            cout << "Digite a quantidade de meses (no máximo 12): ";
            cin >> iMeses;

            if (0 < iMeses < 13 )
            {
                fresult = (fsalario / 12) * iMeses;

                cout << "O décimo terceiro será de: " << fresult << endl;
                system("pause");
            }

            else
            {
                cout << "Número de meses invalido." << endl;
                system("pause");
            }
            break;

            case 4:
                cout << "Obrigado pelo acesso!" << endl;
                system("pause");
                break;

            default:
                cout << "Opção invalida." << endl;
                system("pause");
        }  //switch
    }        //while


    return 0;
}



