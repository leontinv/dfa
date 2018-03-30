#include <iostream>
#include<fstream>
#include <string.h>
using namespace std;

int main()
{
    //ifstream ff("date.in");
    int q,s,x,*f,i,j,sf,a[20][20],ok=1,k=0;
    char *alfabet,*w;
    alfabet=new char;
    w=new char;
    cout<<"introduceti alfabetul: \n";
    cin>>alfabet;
    cout<<"introduceti numarul de stari: \n";
    cin>>q;
    cout<<"introduceti starea initiala: \n";
    cin>>s;
    cout<<"introduceti numarul de stari finale: \n";
    cin>>x;
    f=new int[x];
    cout<<"introduceti starile finale: \n";
    for(i=0; i<x; i++)
    {
        cin>>f[i];
    }

    for(i=0; i<q; i++)
        for(j=0; j<strlen(alfabet); j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    cout<<"introduceti cuvantul: ";
    cin>>w;
    for(j=0; j<x; j++)
        if(s==f[j]&&w[0]=='*')
        {
            cout<<"cuvantul nu apartine";
            return 0;
        }

    i=s;
    sf=0;
    while(i<strlen(w))
    {
        k=0;
        for(int t=0; t<strlen(alfabet); t++)
            if(w[i]==alfabet[t])
            {
                sf=a[sf][w[i]-alfabet[0]];
                k=1;
            }
        if(k==0)
        {
            cout<<"cuvantul nu apartine";
            return 0;
        }
        else
            i++;
    }

    int gasit=0;
    for(j=0; j<x; j++)
        if(sf==f[j])
            gasit=1;
    if(gasit==1)
        cout<<"cuvantul apartine";
    else
        cout<<"cuvantul nu apartine";
    return 0;
}
