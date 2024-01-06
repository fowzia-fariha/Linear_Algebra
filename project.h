#ifndef PROJECT_H_INCLUDED
#define PROJECT_H_INCLUDED

double **Allocate_MATRIX(int R,int C);
void InputMatrix(double **ptr,int row,int col);
void PRINT_MATRIX(double **pointer,int row,int col);
void Add_Matrices();
void Sub_Matrices();
void Mul_Matrices();
void DET_MATRIX ();
void rowOpeartion(double **ptr,int row,int col);
void swapRows(double **ptr,int m,int n,int p);
void TRANS_MATRIX();
void SLE();
void Inverse_Mat();
void sle(double **Ptr,int r,int c);
#endif // PROJECT_H_INCLUDED
