#include <iostream>
using namespace std;

void generar_pares(int a[], int n);
void imprimir(int a[], int n);
// practicar funciones
int main() {
  int arreglo[50], tamaño;
  cout << "Ingrese el tamaño del arreglo: ";
  cin >> tamaño;
  generar_pares(arreglo, tamaño);
  return 0;
}
void generar_pares(int a[], int n)
{
  int num, b[50], p = 0 ;
  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese el número: ";
    cin >> a[i];
    
  }
  for (int i = 0; i < n; i++)
  {
  if (a[i] % 2 == 0)
    {
      b[p] = a[i];
      p++;
    } 
  }
  cout << endl;
  cout << "Los números pares almacenados son: " << endl;
  for(int i = 0; i < p; i++)
  {
    cout << b[i] << endl;
  }
}