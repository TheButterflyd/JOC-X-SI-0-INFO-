#include <bits/stdc++.h>
using namespace std;

char matrice[10]= {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};

//VERIFICAREA CASTIGULUI
int castig()
{
    if(matrice[1]==matrice[2] && matrice[2]==matrice[3] && matrice[1]!=' ')
    {
        return 1;
    }
    else if(matrice[4]==matrice[5] && matrice[5]==matrice[6] && matrice[4]!=' ')
    {
        return 1;
    }
    else if(matrice[7]==matrice[8] && matrice[8]==matrice[9] && matrice[7]!=' ')
    {
        return 1;
    }
    else if(matrice[1]==matrice[5] && matrice[5]==matrice[9] && matrice[1]!=' ')
    {
        return 1;
    }
    else if(matrice[2]==matrice[5] && matrice[5]==matrice[8] && matrice[2]!=' ')
    {
        return 1;
    }
    else if(matrice[3]==matrice[5] && matrice[5]==matrice[7] && matrice[3]!=' ')
    {
        return 1;
    }
    else if(matrice[1]==matrice[4] && matrice[4]==matrice[7] && matrice[1]!=' ')
    {
        return 1;
    }
    else if(matrice[3]==matrice[6] && matrice[6]==matrice[9] && matrice[3]!=' ')
    {
        return 1;
    }
    else if(matrice[1]!=' ' && matrice[2]!=' ' && matrice[3]!=' '
            && matrice[4]!=' ' && matrice[5]!=' ' && matrice[6]!=' '
            && matrice[7]!=' ' && matrice[8]!=' ' && matrice[9]!=' ')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void tabel_x_si_0()
{
    system("cls");
    system("Color 0B");
    // pentru curatarea consolei
    cout<<"\n\t\t X SI 0\n\n";

    cout<<"      JUCATOR 1 (X) - JUCATOR 2 (0)\n\n";

    //TABELUL CU X SI 0 PROPRIU-ZIS
    cout<<"                  |   |   \n";
    cout<<"                "<<matrice[1]<<" | "<<matrice[2]<<" | "<<matrice[3]<<'\n';
    cout<<"               ___|___|___ \n";
    cout<<"                  |   |    \n";
    cout<<"                "<<matrice[4]<<" | "<<matrice[5]<<" | "<<matrice[6]<<'\n';
    cout<<"               ___|___|___ \n";
    cout<<"                  |   |    \n";
    cout<<"                "<<matrice[7]<<" | "<<matrice[8]<<" | "<<matrice[9]<<'\n';
    cout<<"                  |   |    \n\n";

}
int main()
{
    int jucator=1,i,ales;
    char semn;
    do
    {
        tabel_x_si_0();
        if(jucator%2==1)
        {
            jucator=1;
        }
        else
        {
            jucator=2;
        }
        cout<<" Jucatorul cu numarul "<<jucator<<" executa mutarea: ";
        cin>>ales;
        if(jucator==1)
        {
            semn='X';
        }
        else
        {
            semn='0';
        }
        if(matrice[ales]==' ')
        {
            matrice[ales]=semn;
        }
        else
        {
            system("Color 04");
            cout<<"Nu poti executa aceasta mutare! Apasa tasta ENTER pentru a incerca din nou!";
            jucator--;
            cin.ignore();
            cin.get();
            system("Color 0B");
        }
        i=castig();
        jucator++;
    }
    while(i==-1);
    tabel_x_si_0();
    if(i==1)
    {
        jucator--;
        system("Color 0A");
        cout<<"CASTIGATORUL ESTE JUCATORUL CU NUMARUL "<<jucator<<"! FELICITARI!";
    }
    else
    {
        system("Color 06");
        cout<<"EGALITATE! Puteti sa mai incercati o data :)";
    }
    return 0;
}
