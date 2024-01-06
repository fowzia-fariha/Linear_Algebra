//Name:FOWZIA FARIHA SHAJ
//Reg.no:2021831015

#include <bits/stdc++.h>
using namespace std;


double **Allocate_MATRIX(int R,int C)
{

    double **operate;
    operate=(double**)malloc(R*sizeof(double));
    for(int i=0; i<R; i++)
    {
        operate[i]=(double*)malloc(C*sizeof(double));

    }
    return operate;
}

void InputMatrix(double **ptr,int row,int col)
{
    double **matrix=ptr;
    for(int i=0; i<row; i++)
    {

        for(int j=0; j<col; j++)
        {

            cin>>matrix[i][j];

        }

    }
}

void PRINT_MATRIX(double **pointer,int row,int col)
{
    double **P=pointer;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<P[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void Add_Matrices()
{
    int row1,col1;
    std::cout<<"Enter the numbers of rows and coloumns for the first matrix:"<<std::endl;
    std::cin>>row1>>col1;
    int row2,col2;
    std::cout<<"Enter the numbers of rows and coloumns for the second matrix:"<<std::endl;
    std::cin>>row2>>col2;

    double **m1=Allocate_MATRIX(row1,col1);
    double **m2=Allocate_MATRIX(row2,col2);
    double **Add=Allocate_MATRIX(row1,col1);


    if(row1==row2 && col1==col2)
    {
        std::cout<<"Enter the elements for first matrix:"<<std::endl;
        InputMatrix(m1,row1,col1);

        std::cout<<"Enter the elements for second matrix:"<<std::endl;
        InputMatrix(m2,row2,col2);


        for(int i=0; i<row1; i++)
        {

            for(int j=0; j<col1; j++)
            {
                Add[i][j]=m1[i][j]+m2[i][j];
            }
        }
        PRINT_MATRIX(Add,row1,col1);
    }

    else
    {
        cout<<"Addition can not be done for the entered matrices!"<<endl;
    }


}

void Sub_Matrices()
{
    int row1,col1;
    std::cout<<"Enter the numbers of rows and coloumns for the first matrix:"<<std::endl;
    std::cin>>row1>>col1;
    int row2,col2;
    std::cout<<"Enter the numbers of rows and coloumns for the second matrix:"<<std::endl;
    std::cin>>row2>>col2;

    double **m1=Allocate_MATRIX(row1,col1);
    double **m2=Allocate_MATRIX(row2,col2);
    double **Sub=Allocate_MATRIX(row1,col1);


    if(row1==row2 && col1==col2)
    {
        std::cout<<"Enter the elements for first matrix:"<<std::endl;
        InputMatrix(m1,row1,col1);

        std::cout<<"Enter the elements for second matrix:"<<std::endl;
        InputMatrix(m2,row2,col2);


        for(int i=0; i<row1; i++)
        {

            for(int j=0; j<col1; j++)
            {
                Sub[i][j]=m1[i][j]-m2[i][j];
            }
        }
        PRINT_MATRIX(Sub,row1,col1);
    }

    else
    {
        cout<<"Subtraction can not be done for the entered matrices!"<<endl;
    }


}


void Mul_Matrices()
{
    int row1,col1;
    std::cout<<"Enter the numbers of rows and coloumns for the first matrix:"<<std::endl;
    std::cin>>row1>>col1;
    int row2,col2;
    std::cout<<"Enter the numbers of rows and coloumns for the second matrix:"<<std::endl;
    std::cin>>row2>>col2;

    double **m1=Allocate_MATRIX(row1,col1);
    double **m2=Allocate_MATRIX(row2,col2);
    double **Mul=Allocate_MATRIX(row1,col2);



    if(col1==row2)
    {
        std::cout<<"Enter the elements for first matrix:"<<std::endl;
        InputMatrix(m1,row1,col1);

        std::cout<<"Enter the elements for second matrix:"<<std::endl;
        InputMatrix(m2,row2,col2);


        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col2; j++)
            {
                Mul[i][j]=0;
                for(int k=0; k<col1; ++k)
                {
                    Mul[i][j]+= m1[i][k]*m2[k][j];
                }
            }
        }
        PRINT_MATRIX(Mul,row1,col2);
    }

    else
    {
        cout<<"Multiplication can not be done for the entered matrices!"<<endl;
    }

}


void rowOpeartion(double **ptr,int row,int col)
{
    for(int i=0; i<row-1; i++)
    {
        for(int j=i+1; j<row; j++)
        {
            double factor=ptr[j][i]/ptr[i][j];
            for(int k=0; k<col; k++)
            {
                ptr[j][k]-=factor*ptr[i][k];
            }
        }
    }
}

void DET_MATRIX ()
{
    int r,c;
    std::cout<<"Enter the numbers of rows and coloumns for the matrix:"<<std::endl;
    std::cin>>r>>c;
    double **Det=Allocate_MATRIX(r,c);
    if(r==c)
    {
        std::cout<<"Enter the elements for the matrix:"<<std::endl;
        InputMatrix(Det,r,c);

        for(int i=0; i<r; i++)
        {
            for(int j=i+1; j<r; j++)
            {
                double factor= Det[j][i]/Det[i][i];
                for(int k=i; k<r; k++)
                {
                    Det[j][k]-=factor*Det[i][k];
                }
            }
        }

        double det =1.0;
        for(int i=0; i<r; i++)
        {
            det*=Det[i][i];
        }
        cout<<det<<"\n";
    }
    else
    {
        cout<<"Determining the determinant is not possible!"<<endl;
    }

}


void swapRows(double **ptr,int m,int n,int p)
{
    for(int i=0; i<p; i++)
    {
        double temp=ptr[m][i];
        ptr[m][i]=ptr[n][i];
        ptr[n][i]=temp;
    }
}



void TRANS_MATRIX()
{
    int r,c;
    std::cout<<"Enter the numbers of rows and coloumns for the matrix:"<<std::endl;
    std::cin>>r>>c;
    double **Mat=Allocate_MATRIX(r,c);
    double **Trans=Allocate_MATRIX(c,r);
    std::cout<<"Enter the elements for the matrix:"<<std::endl;
    InputMatrix(Mat,r,c);

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            Trans[j][i]=Mat[i][j];
        }
    }
    PRINT_MATRIX(Trans,c,r);
}

void SLE()
{
    int r,c;
    std::cout<<"Enter the numbers of rows and coloumns for the matrix:"<<std::endl;
    std::cin>>r>>c;
    double **MAT=Allocate_MATRIX(c,r);
    std::cout<<"Enter the elements for the matrix:"<<std::endl;
    InputMatrix(MAT,r,c);

    for (int i=0; i<r; i++)
    {
        double DIA=MAT[i][i];
        for(int j=0; j<c; j++)
        {

            MAT[i][j]/=DIA;
        }
        for (int k=0; k<r; k++)
        {
            if(k!=i)
            {
                double fact= MAT[k][i];
                for(int j=0; j<c; j++)
                {

                    MAT[k][j]-=fact*MAT[i][j];
                }
            }
        }
    }
    PRINT_MATRIX(MAT,r,c);
}

void sle(double **Ptr,int r,int c)
{
    double **MAT=Ptr;
  for (int i=0; i<r; i++)
    {
        double DIA= MAT[i][i];
        for(int j=0;j<c;j++)
        {

            MAT[i][j]/=DIA;
        }
        for (int k=0; k<r; k++)
        {
            if(k!=i)
            {
                double fact= MAT[k][i];
                for(int j=0;j<c;j++)
                {

                    MAT[k][j]-=fact*MAT[i][j];
                }
            }
        }
    }
    PRINT_MATRIX(MAT,r,c);
}

void Inverse_Mat()
{
    int r,c;
    std::cout<<"Enter the numbers of rows and coloumns for the matrix:"<<std::endl;
    std::cin>>r>>c;
    double **Inv=Allocate_MATRIX(r,2*r);
    if(r==c)
    {
    std::cout<<"Enter the elements for the matrix:"<<std::endl;
    InputMatrix(Inv,r,r);
     for (int i=0;i<r;i++)
     {
        for (int j=0;j<r;j++)
         {
            if (i==j)
            {
                Inv[i][j+r]= 1;
            }
            else
              Inv[i][j+r]=0;
        }
    }
   sle(Inv,r,2*r);
    }
    else
        {
            cout<<"Inverse matrix does'nt exist!"<<endl;
        }
    }


