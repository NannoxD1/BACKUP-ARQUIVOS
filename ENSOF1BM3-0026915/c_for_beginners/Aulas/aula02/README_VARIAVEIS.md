
# Declaração de Variáveis em C
**Prof. Hudson Neves**

---

## 1. Objetivo
Este material apresenta os conceitos fundamentais sobre declaração de variáveis na linguagem C. Ao final, o estudante deverá ser capaz de:
- Entender o que é uma variável
- Declarar e inicializar variáveis corretamente
- Conhecer os tipos básicos
- Aplicar boas práticas de nomenclatura
- Utilizar scanf e printf para entrada/saída
- Evitar erros comuns

---

## 2. O que é uma variável?
Uma variável é um espaço reservado na memória para armazenar dados que mudam durante a execução do programa. Pense nela como uma “caixa” identificada por um nome.

Exemplos:
- `idade` → guarda um número inteiro
- `altura` → guarda um valor decimal
- `letra` → guarda um caractere

---

## 3. Como declarar variáveis em C
A estrutura básica é:
```
tipo nome;
```
Ou com valor inicial:
```
tipo nome = valor;
```

### Exemplos
```c
int idade;
float altura;
char letra;
double salario = 4500.75;
```

---

## 4. Boas práticas de nomenclatura
- Começar com letra ou `_`
- Pode conter números, letras e `_`
- Sem espaços
- Não iniciar com números
- Linguagem diferencia maiúsculas de minúsculas
- Não usar palavras reservadas

### Válidos
```c
int contador;
float mediaFinal;
char _codigo;
```
### Inválidos
```c
int 2valor;
float preço;
char nome completo;
```

---

## 5. Declaração, inicialização e atribuição
```c
int idade;       // declaração
int ano = 2026;  // declaração + inicialização
idade = 30;      // atribuição
```

---

## 6. Tipos de dados mais comuns
### Inteiros
```c
int ano = 2026;
short dia = 15;
unsigned int alunos = 40;
```

### Ponto flutuante
```c
float temperatura = 26.5;
double distancia = 98765.4321;
```

### Caractere
```c
char letra = 'A';
```

### Booleano
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
| Tipo   | Código |
|--------|--------|
| int    | %d     |
| float  | %f     |
| double | %lf    |
| char   | %c     |
| bool   | %d     |

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
    float altura;
    char inicial;
    bool matriculado = true;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite sua inicial: ");
    scanf(" %c", &inicial);

    printf("
--- Dados Informados ---
");
    printf("Idade: %d
", idade);
    printf("Altura: %.2f
", altura);
    printf("Inicial: %c
", inicial);
    printf("Matriculado: %d
", matriculado);

    return 0;
}
```

---

## 10. Erros comuns
- Variável sem inicialização
- Nome inválido
- Tipo incompatível com o especificador
- Esquecer o `&` no scanf
- Esquecer ponto e vírgula

---

## 11. Exercícios
**1. Declare variáveis para:**
- nome (char)
- idade (int)
- salário (float)
- aprovado (bool)

**2. Leia e exiba valores digitados pelo usuário.**

**3. Declare uma variável e atribua valores diferentes ao longo do programa.**

**4. Corrija o código:**
```c
float numero;
scanf("%d", numero)
char letra = A;
int 3alunos;
```

---

Material finalizado.
