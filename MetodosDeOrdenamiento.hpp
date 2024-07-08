#ifndef METODOSDEORDENAMIENTO_HPP_INCLUDED
#define METODOSDEORDENAMIENTO_HPP_INCLUDED

template<typename Tipo>
void Intercambiar(Tipo &a, Tipo &b);

void Burbuja(int v[], int n, int velocidadanimacion, int mayor);
void Seleccion(int v[], int n, int velocidadanimacion, int mayor);
void Insercion(int v[], int n, int velocidadanimacion, int mayor);
void ShellSort(int v[], int n, int velocidadanimacion, int mayor);
void QuickSort(int v[], int n, int velocidadanimacion, int izq, int der, int mayor);
void Merge(int v[], int n, int velocidadanimacion, int inicio, int mitad, int final, int mayor);
void MergeSort(int v[], int n, int velocidadanimacion, int inicio, int final, int mayor);


#endif // METODOSDEORDENAMIENTO_HPP_INCLUDED
