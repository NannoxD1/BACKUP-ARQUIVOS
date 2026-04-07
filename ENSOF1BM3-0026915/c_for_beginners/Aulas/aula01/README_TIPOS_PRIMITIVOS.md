
# Tipos Primitivos em C
**Prof. Hudson Neves**

---

## 1. Objetivo
Este material apresenta os tipos primitivos da linguagem C de forma clara, organizada e adequada para estudantes iniciantes. Após o estudo, o aluno deverá compreender:
- Quais são os tipos primitivos disponíveis em C
- Quando utilizar cada tipo
- Como declarar e utilizar variáveis baseadas nesses tipos
- Como realizar leitura e escrita de dados

---

## 2. O que são tipos primitivos?
Tipos primitivos são categorias básicas de dados fornecidas pela linguagem C. Eles definem **o tamanho**, **o tipo de valor** e **o comportamento** de variáveis dentro da memória.

Os principais grupos são:
- Valores inteiros
- Valores com ponto flutuante
- Caracteres individuais
- Valores lógicos (C99+)

---

## 3. Tipos inteiros
Usados para representar valores sem parte decimal.

### Exemplos de declaração
```c
int idade;
short ano;
long populacao;
unsigned int quantidade;
```

### Modificadores
- `short` → valores menores
- `long` → valores maiores
- `unsigned` → somente positivos

---

## 4. Tipos de ponto flutuante
Representam valores com casas decimais.

```c
float altura;
double distancia;
```

- `float` → precisão simples
- `double` → maior precisão

---

## 5. Tipo caractere
Armazena um único caractere.
```c
char inicial = 'A';
```

---

## 6. Tipo lógico (bool)
Disponível a partir de C99.
```c
#include <stdbool.h>
bool ativo = true;
```

---

## 7. Entrada de dados — scanf
```c
int idade;
printf("Digite sua idade: ");
scanf("%d", &idade);
```

### Tabela de especificadores
| Tipo      | Código |
|-----------|--------|
| int       | %d     |
| float     | %f     |
| double    | %lf    |
| char      | %c     |
| bool      | %d     |

---

## 8. Saída de dados — printf
```c
printf("Idade: %d
", idade);
printf("Altura: %.2f
", altura);
```

---

## 9. Exemplo completo
```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int idade;
    float salario;
    char inicial;
    bool ativo = true;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);

    printf("
--- Dados Informados ---
");
    printf("Idade: %d
", idade);
    printf("Salário: %.2f
", salario);
    printf("Inicial: %c
", inicial);
    printf("Ativo: %d
", ativo);

    return 0;
}
```

---

## 10. Exercícios
**1. Declare variáveis dos seguintes tipos:**
- int
- float
- char
- double
- bool

**2. Solicite entrada do usuário para cada variável e exiba os valores.**

**3. Use sizeof para imprimir o tamanho (em bytes) de cada tipo.**
```c
printf("int: %lu bytes
", sizeof(int));
printf("float: %lu bytes
", sizeof(float));
```

---
Material finalizado.
