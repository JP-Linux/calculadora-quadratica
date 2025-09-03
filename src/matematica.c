#include "matematica.h"
#include <math.h>

// Função para verificar se um número é válido (não-NaN e não infinito)
bool verificar_numero(double num)
{
    return !isnan(num) && !isinf(num);
}

// Função para calcular delta
double delta(double a, double b, double c)
{
    return b * b - 4 * a * c;
}

// Função para calcular as raízes usando Bhaskara
void bhaskara(double a, double b, double dt, double* vetor)
{
    // Verificação centralizada de delta negativo
    if (dt < 0) {
        vetor[0] = vetor[1] = NAN;
        return;
    }
    double raiz = sqrt(dt);
    vetor[0] = (-b + raiz) / (2 * a);
    vetor[1] = (-b - raiz) / (2 * a);
}

// Função para calcular a coordenada x do vértice
double vertice_x(double a, double b)
{
    return -b / (2 * a);
}

// Função para calcular a coordenada y do vértice
double vertice_y(double a, double dt)
{
    return -dt / (4 * a);
}
