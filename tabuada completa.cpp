/**********************************************************
- Autor:     Huan oliveira
- Descrição: tabuada completa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fV1 = 0;
    float fV2 = 0;
    int i = 0;

    setlocale(LC_ALL,"");
    system("color F3");

    cout << "Tabuada de 1 a 10! " << endl;
    while (i < 11)
    {
        while   (fV1 < 11)
        {

            fV2 = fV1 * i;
            cout << fV1 << " x " << i << " = " << fV2 << "\n";
            fV1++;
        }

        fV1 = 0;
        i++;
        cout << endl;
    }
    return 0;
}



