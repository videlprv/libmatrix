// matrix.h

typedef struct
{
  float** tab;
  int dimX;
  int dimY;  
} Matrix;

//Wyznacznik macierzy [1pkt.]
float matrixDeterminant(Matrix m);
 
//Transpozycja macierzy [1pkt.]
Matrix matrixTransposition(Matrix m);
 
//Dodawanie macierzy [1pkt.]
Matrix matrixSum(Matrix m1, Matrix m2);
 
//Mnożenie macierzy [1pkt.]
Matrix matrixMultiplication(Matrix m1, Matrix m2);

//Mnożenie macierzy przez skalar [1pkt.]
Matrix matrixMultiplication(float a, Matrix m);
