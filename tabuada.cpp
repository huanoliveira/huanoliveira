/**********************************************************
- Autor:    Huan oliveira
- Descrição: tabuada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{



    cout << "Por favor, informe a tabuada que voce deseja: " << endl;

    int n = 0;
    cin >> n;


    for(int i = 1; i<=10; i++)
    {

        cout << i << " x " << n << " = " << i*n << endl;
    }


    system("pause");
    return 0;
}
