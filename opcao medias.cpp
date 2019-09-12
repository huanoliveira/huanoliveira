/**********************************************************
- Autor:     Huan oliveira
- Descri��o: opcao medias
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

    int iEscolha = 0;
    float fMAnota1 = 0;
    float fMAnota2 = 0;
    float fMPnota1 = 0;
    float fMPnota2 = 0;
    float fMPnota3 = 0;
    float fPeso1 = 0;
    float fPeso2 = 0;
    float fPeso3 = 0;
    float fResultMA = 0;
    float fResultMP = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (iEscolha != 3)
    {
        system("cls");
        cout << "----------------------------------------\n\n";
        cout << "1 - M�dia aritm�tica de 2 notas\n\n";
        cout << "2 - M�dia ponderada de 3 notas\n\n";
        cout << "3 - Sair\n\n";
        cout << "----------------------------------------\n\n";

        cout << "Op��o: ";
        cin >> iEscolha;

        switch(iEscolha)
        {
        case 1:
            cout << "A escolha foi m�dia aritm�tica!" << endl;
            cout << "Digite a primeira nota: ";
            cin >> fMAnota1;

            cout << "Digite a segunda nota: ";
            cin >> fMAnota2;

            fResultMA = (fMAnota1 + fMAnota2) / 2;

            cout << "A m�dia aritm�tica �: " << fResultMA << endl;
            system("pause");
            break;

        case 2:
            cout << "A escolha foi m�dia ponderada!" << endl;
            cout << "Digite a primeira nota: ";
            cin >> fMPnota1;

            cout << "O peso da primeira nota: ";
            cin >> fPeso1;

            cout << "Segunda nota: ";
            cin >> fMPnota2;

            cout << "Peso da segunda nota: ";
            cin >> fPeso2;

            cout << "Terceira nota: ";
            cin >> fMPnota3;

            cout << "Peso da terceira nota: ";
            cin >> fPeso3;

            fResultMP = ((fMPnota1 * fPeso1) + (fMPnota2 * fPeso2) + (fMPnota3 * fPeso3)) / (fPeso1 + fPeso2 + fPeso3);

            cout << "A m�dia ponderada �: " << fResultMP <<endl;
            system("pause");
            break;

        case 3:
            cout << "Obrigado por acessar.";
            system("pause");
            break;

        default:
            cout << "Op��o invalida! Tente uma op��o valida." << endl;
            system("pause");
            break;
        }
    }


    return 0;
}



