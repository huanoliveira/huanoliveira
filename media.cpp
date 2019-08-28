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
    int inota1 = 0;
    int inota2 = 0;
    int inota3 = 0;
    int inota4 = 0;
    int imedia =0;
    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "nota1: ";
    cin  >> inota1;
    cout << endl;
    cout << "nota2: ";
    cin  >> inota2;
    cout << endl;
    cout << "nota3: ";
    cin  >> inota3;
    cout << endl;
    cout << "nota4: ";
    cin  >> inota4;
    cout << endl;

    imedia=(inota1+inota2+inota3+inota4)/4;

    if (imedia>=7)
        cout<< "voce passou com a nota: "<<imedia;
    else
        cout<<"voce nao passou";

}
