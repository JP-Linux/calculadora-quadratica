#include "tinyexpr.h"
#include <math.h>
#include <stdio.h>

void calcula_limite(const char* expressao, double ponto)
{
    printf("Calculando limite de f(x) = %s quando x → %.2f\n\n", expressao, ponto);

    // Variável para armazenar erros de parsing
    int error;

    // Variável para x
    double x_val;

    // Compila a expressão
    te_variable vars[] = { { "x", &x_val } };
    te_expr* expr = te_compile(expressao, vars, 1, &error);

    if (!expr) {
        printf("Erro na expressão na posição %d\n", error);
        return;
    }

    // Aproximação pela esquerda
    printf("Aproximação pela esquerda:\n");
    for (int i = 1; i <= 6; i++) {
        double h = 1.0 / pow(10, i);
        x_val = ponto - h;
        double y = te_eval(expr);
        printf("f(%.6f) = %.6f\n", x_val, y);
    }

    printf("\n");

    // Aproximação pela direita
    printf("Aproximação pela direita:\n");
    for (int i = 1; i <= 6; i++) {
        double h = 1.0 / pow(10, i);
        x_val = ponto + h;
        double y = te_eval(expr);
        printf("f(%.6f) = %.6f\n", x_val, y);
    }

    // Cálculo do valor no ponto
    x_val = ponto;
    double valor_do_ponto = te_eval(expr);
    printf("\nValor da função no ponto: f(%.2f) = %.6f\n", ponto, valor_do_ponto);

    te_free(expr);
}
