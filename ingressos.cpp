/**********************************************************
- Autor:     Huan oliveira
- Descrição: ingressos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iIng = 120;
    float fPre = 5.00;

    while(i<9)
    {
    cout<<"valor do ingresso: R$"<<fPre<<"\n";
    cout<<"ingressos vendidos:  "<<iIng<<"\n";
    cout<<"valor lucro total: R$"<<(iIng*fPre)-200<<"\n";
    iIng=iIng+26;
    fPre=fPre-0.50;
    i=1+i;

    system("pause");
    }


}



