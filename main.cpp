#include<bits/stdc++.h>
#include"project.h"
using namespace std;


int main()
{


    int choice;
    while(1)
    {
        cout<<"These are the operation available in the matrix function:"<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Determinant"<<endl;
        cout<<"5.Transpose"<<endl;
        cout<<"6.SLE"<<endl;
        cout<<"7.Inverse"<<endl;
        cout<<"8.Exit"<<endl;
        cout<<"Enter you choice:"<<endl;
        cin>>choice;
        if(choice==1)
        {
            Add_Matrices();
        }
        else if(choice==2)
        {
            Sub_Matrices();
        }
        else if(choice==3)
        {
            Mul_Matrices();
        }
        else if(choice==4)
        {
            DET_MATRIX();
        }
        else if(choice==5)
        {
            TRANS_MATRIX();
        }

        else if(choice==6)
        {

            SLE();

        }
        else if(choice==7)
        {
            Inverse_Mat();
        }
        else if(choice==8)
        {
            return 0;
        }

    }
    return 0;
}
