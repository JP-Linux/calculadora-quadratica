# Matemática Computacional em C

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

Este é um programa em C que oferece duas funcionalidades matemáticas principais: cálculo de funções quadráticas e cálculo de limites, com tratamento robusto de erros e interface intuitiva.

## ✨ Funcionalidades

### 1. Funções Quadráticas
- Cálculo das raízes reais ou complexas
- Determinação do vértice da parábola
- Cálculo do discriminante (delta)
- Validação completa dos coeficientes

### 2. Cálculo de Limites
- Avaliação de funções matemáticas em notação natural
- Cálculo de limites por aproximação bilateral
- Suporte a diversas funções matemáticas (trigonométricas, logarítmicas, exponenciais)
- Análise do comportamento da função no ponto

## ⚙️ Compilação e Execução

### Pré-requisitos
- Compilador GCC (ou equivalente)
- Biblioteca matemática padrão
  
### Clone o repositório
```bash
git clone https://github.com/JP-Linux/matematica-computacional.git
```
### Acesse o diretório
```bash
cd matematica-computacional
```

### Compilação:
```bash
gcc -lm -Iinclude src/*.c main.c -o main
```

### Execução:
```bash
./main
```

## 📝 Exemplos de Uso

### Função Quadrática:
```
=== FUNÇÃO QUADRÁTICA ===

Digite os coeficientes | a b c | separados por espaço: 2 -4 2

Coeficiente a: 2.00
Coeficiente b: -4.00
Coeficiente c: 2.00

Delta (Δ): 0.00
Raízes: x1 = 1.00, x2 = 1.00
Vértice: (1.00, 0.00)
```

### Cálculo de Limites:
```
=== CÁLCULO DE LIMITES ===

Digite a função f(x) (use 'x' como variável, ex: x^2 + 3*x - 2): sin(x)/x
Digite o ponto onde deseja calcular o limite: 0

Calculando limite de f(x) = sin(x)/x quando x → 0.00

Aproximação pela esquerda:
f(-0.100000) = 0.998334
...

Aproximação pela direita:
f(0.100000) = 0.998334
...

Valor da função no ponto: f(0.00) = 1.000000
```

## 🧠 Algoritmos Implementados

1. **Funções Quadráticas:**
   - Δ = b² - 4ac (Discriminante)
   - x = [-b ± √Δ] / (2a) (Fórmula de Bhaskara)
   - xv = -b/(2a), yv = -Δ/(4a) (Vértice)

2. **Cálculo de Limites:**
   - Aproximação bilateral (esquerda e direita)
   - Avaliação de expressões matemáticas com tinyexpr

## 🛡️ Tratamento de Erros

O programa verifica:
- Tipos de entrada corretos
- Coeficiente `a` diferente de zero em funções quadráticas
- Valores numéricos válidos (não NaN/infinito)
- Expressões matemáticas malformadas
- Casos especiais (discriminante negativo, divisão por zero)

## 📁 Estrutura do Projeto

```
├── include
│   ├── equacoes.h
│   ├── limite.h
│   ├── matematica.h
│   └── tinyexpr.h
├── LICENSE
├── main.c
├── README.md
└── src
    ├── equacoes.c
    ├── limite.c
    ├── matematica.c
    └── tinyexpr.c
```

## 👤 Autor

**Jorge Paulo Santos**  
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/JP-Linux)
[![Email](https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:jorgepsan7@gmail.com)

## 📄 Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENSE) para detalhes.

## 🙌 Créditos

- Biblioteca [tinyexpr](https://github.com/codeplea/tinyexpr) por Lewis Van Winkle, utilizada para parsing e avaliação de expressões matemáticas.