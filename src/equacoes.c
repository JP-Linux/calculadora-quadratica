#include "equacoes.h"
#include "matematica.h"


int quadratica(){
    printf("Digite os coeficientes | a b c | separados por espaço: ");
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        fprintf(stderr, "ERRO: Entrada inválida!\n");
        return 1;
    }

    // Validação inicial dos coeficientes
    if (!verificar_numero(a) || !verificar_numero(b) || !verificar_numero(c)) {
        fprintf(stderr, "ERRO: Coeficientes inválidos (NaN ou infinito)\n");
        return 1;
    }

    // Verificação crítica de 'a' zero
    if (a == 0) {
        fprintf(stderr, "ERRO: Coeficiente 'a' não pode ser zero!\n");
        return 1;
    }

    double dt = delta(a, b, c);
    double raizes[2];
    bhaskara(a, b, dt, raizes);
    double xv = vertice_x(a, b);
    double yv = vertice_y(a, dt);

    printf("\n=== FUNÇÃO QUADRÁTICA ===\n\n");
    printf("Coeficiente a: %.2f\n", a);
    printf("Coeficiente b: %.2f\n", b);
    printf("Coeficiente c: %.2f\n", c);
    printf("\nDelta (Δ): %.2f\n", dt);

    // Verificação e exibição de raízes
    if (dt < 0) {
        printf("Raízes: Complexas (discriminante negativo)\n");
    } else {
        printf("Raízes: x1 = %.2f, x2 = %.2f\n", raizes[0], raizes[1]);
    }

    // Vértice sempre será válido quando a != 0
    printf("Vértice: (%.2f, %.2f)\n", xv, yv);

    return 0;
}
