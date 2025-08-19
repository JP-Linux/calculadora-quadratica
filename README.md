# Calculadora de Funções Quadráticas em C

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![GitHub stars](https://img.shields.io/github/stars/JP-Linux/calculadora-quadratica?style=social)](https://github.com/JP-Linux/calculadora-quadratica/stargazers)

Este é um programa em C que calcula raízes e vértices de funções quadráticas (equações do segundo grau) com tratamento robusto de erros.

## ✨ Funcionalidades

- Cálculo das raízes reais ou complexas
- Determinação do vértice da parábola
- Validação completa dos coeficientes
- Tratamento de erros para:
  - Entradas inválidas (não numéricas)
  - Coeficiente `a` igual a zero
  - Valores NaN (Not a Number) ou infinitos
  - Discriminante negativo (raízes complexas)
- Formatação clara dos resultados

## ⚙️ Compilação e Execução

### Pré-requisitos
- Compilador GCC (ou equivalente)

### Passo a passo:
```bash
# Clone o repositório
git clone https://github.com/JP-Linux/calculadora-quadratica.git

# Acesse o diretório
cd calculadora-quadratica

# Compile o programa
gcc -lm -Iinclude  src/*.c main.c -o main

# Execute
./main
```

## 📝 Exemplos de Uso

**Entrada válida:**
```
Digite os coeficientes | a b c | separados por espaço: 2 -4 2

=== FUNÇÃO QUADRÁTICA ===

Coeficiente a: 2.00
Coeficiente b: -4.00
Coeficiente c: 2.00

Delta (Δ): 0.00
Raízes: x1 = 1.00, x2 = 1.00
Vértice: (1.00, 0.00)
```

**Discriminante negativo:**
```
Digite os coeficientes | a b c | separados por espaço: 3 2 1

=== FUNÇÃO QUADRÁTICA ===

Coeficiente a: 3.00
Coeficiente b: 2.00
Coeficiente c: 1.00

Delta (Δ): -8.00
Raízes: Complexas (discriminante negativo)
Vértice: (-0.33, 0.67)
```

**Erro de entrada:**
```
Digite os coeficientes | a b c | separados por espaço: a 5 2
ERRO: Entrada inválida!
```

## 🧠 Algoritmos Implementados

1. **Cálculo de Delta**
   ```c
   Δ = b² - 4ac
   ```

2. **Fórmula de Bhaskara**
   ```c
   x = [-b ± √Δ] / (2a)
   ```

3. **Coordenadas do Vértice**
   ```c
   xv = -b/(2a)
   yv = -Δ/(4a)
   ```

## 🛡️ Tratamento de Erros

O programa verifica:
- Tipos de entrada corretos
- Coeficiente `a` diferente de zero
- Valores numéricos válidos (não NaN/infinito)
- Casos especiais de discriminante negativo


## 👤 Autor

**Jorge Paulo Santos**  
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/JP-Linux)
[![Email](https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:jorgepsan7@gmail.com)

## 📄 Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENSE) para detalhes.
