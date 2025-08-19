#ifndef MATEMATICA_H
#define MATEMATICA_H
#include <stdbool.h>
#include <stdio.h>

double delta(double a, double b, double c);
void bhaskara(double a, double b, double dt, double *vetor);
double vertice_x(double a, double b);
double vertice_y(double a, double dt);
bool verificar_numero(double num);

#endif
