
# Bibliotecas em C
**Prof. Hudson Neves**

---

## 1. Objetivo
Este material apresenta as bibliotecas da linguagem C, sua utilidade e como utilizá-las corretamente. O aluno aprenderá:
- O que são bibliotecas em C
- Como incluir bibliotecas com `#include`
- Diferença entre bibliotecas padrão e personalizadas
- Principais bibliotecas da linguagem
- Exemplos práticos de uso

---

## 2. O que são bibliotecas?
Bibliotecas são coleções de funções prontas que podem ser utilizadas em programas C. Elas evitam que o programador escreva código repetitivo, fornecendo ferramentas que estendem as capacidades da linguagem.

As bibliotecas podem ser:
- **Padrão** (fornecidas pelo compilador)
- **Personalizadas** (criadas pelo próprio programador)

---

## 3. Incluindo bibliotecas — diretiva `#include`
Para usar uma biblioteca, utiliza-se:
```
#include <biblioteca.h>
```
Ou, para bibliotecas criadas pelo usuário:
```
#include "arquivo.h"
```

### Diferença
- `<arquivo.h>` → procura nos diretórios padrão do sistema
- `"arquivo.h"` → procura na pasta do projeto

---

## 4. Bibliotecas padrão mais utilizadas

### 4.1 `<stdio.h>` — Entrada e saída
Funções comuns:
```c
printf();
scanf();
fgets();
putchar();
```

---

### 4.2 `<stdlib.h>` — Utilidades gerais
Funções importantes:
```c
malloc();
free();
rand();
exit();
```

---

### 4.3 `<string.h>` — Manipulação de strings
Funções úteis:
```c
strlen();
strcpy();
strcmp();
strcat();
```

---

### 4.4 `<math.h>` — Funções matemáticas
Exemplos:
```c
sqrt();
pow();
sin();
cos();
```

---

### 4.5 `<stdbool.h>` — Suporte ao tipo booleano
```c
#include <stdbool.h>
bool ativo = true;
```

---

## 5. Exemplo com múltiplas bibliotecas
```c
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    double x = 25.0;
    double raiz = sqrt(x);
    bool valido = true;

    printf("Raiz de %.2f = %.2f
", x, raiz);
    printf("Valido: %d
", valido);

    return 0;
}
```

---

## 6. Criando uma biblioteca personalizada

**utils.h**
```c
void saudacao();
```

**utils.c**
```c
#include <stdio.h>
#include "utils.h"

void saudacao() {
    printf("Bem-vindo ao sistema!
");
}
```

**main.c**
```c
#include "utils.h"

int main() {
    saudacao();
    return 0;
}
```

---

## 7. Exercícios

**1.** Escreva um programa que utilize `<math.h>` para calcular a raiz quadrada de um número digitado pelo usuário.

**2.** Utilize `<string.h>` para comparar duas strings digitadas e informar se são iguais.

**3.** Crie uma biblioteca com uma função `int soma(int a, int b)` e utilize-a no programa principal.

---
Material finalizado.
