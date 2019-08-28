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
    int imedia =0;
    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "nota1: ";
    cin  >> inota1;
    cout << endl;
    cout << "nota2: ";
    cin  >> inota2;
    cout << endl;



    imedia=(inota1+inota2)/2;

    if (imedia>=7)
        cout<< "aprovado()";
    if (imedia>=3&&imedia<7)
        cout<<"voce esta de exame";
    if (imedia<3)
        cout<<"reprovado";
}
