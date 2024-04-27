# Libft

Libft é uma biblioteca em C que reproduz algumas das funções da biblioteca padrão do C, como `isalpha`, `isdigit`, `strlen`, entre outras. A reprodução dessas funções foi feita para adquirir conhecimento sobre seu funcionamento por trás dos panos.

## Funções Reproduzidas

Aqui está a lista das funções reproduzidas na biblioteca Libft:


- `isalpha`: Verifica se um caractere é uma letra alfabética.
- `isdigit`: Verifica se um caractere é um dígito decimal.
- `isalnum`: Verifica se um caractere é uma letra alfabética ou um dígito decimal.
- `isascii`: Verifica se um caractere está dentro do conjunto ASCII.
- `isprint`: Verifica se um caractere é imprimível, ou seja, está no conjunto de caracteres imprimíveis da tabela ASCII.
- `strlen`: Calcula o comprimento de uma string.
- `memset`: Preenche uma área de memória com um byte específico.
- `bzero`: Define uma área de memória como zero.
- `memcpy`: Copia uma área de memória para outra.
- `memmove`: Copia uma área de memória para outra, mesmo se as áreas de origem e destino se sobrepuserem.
- `strlcpy`: Copia uma string para um buffer com um tamanho especificado.
- `strlcat`: Concatena duas strings em um buffer com um tamanho especificado.
- `toupper`: Converte um caractere em minúsculo para maiúsculo.
- `tolower`: Converte um caractere em maiúsculo para minúsculo.
- `strchr`: Localiza a primeira ocorrência de um caractere em uma string.
- `strrchr`: Localiza a última ocorrência de um caractere em uma string.
- `strncmp`: Compara os primeiros n caracteres de duas strings.
- `memchr`: Localiza a primeira ocorrência de um byte em uma área de memória.
- `memcmp`: Compara duas áreas de memória byte a byte.
- `strnstr`: Localiza a primeira ocorrência de uma substring em uma string, limitada a um tamanho máximo especificado.
- `atoi`: Converte uma string em um número inteiro.
- `calloc`: Aloca memória para um array de elementos e os inicializa com zero.
- `strdup`: Duplica uma string.



# Como Usar

### Compilando a Biblioteca

Para compilar a biblioteca Libft, você pode usar o Makefile fornecido. Certifique-se de ter o utilitário `make` instalado em seu sistema.

### Uso do Makefile

1. **Navegue até o Diretório do Projeto**: Abra um terminal e navegue até o diretório onde os arquivos fonte da Libft estão localizados.

2. **Execute o Comando Make**: Execute o comando `make` no terminal. Isso iniciará o processo de compilação dos arquivos fonte e criará o arquivo `libft.a`.

```bash
make
```
#
Para usar a biblioteca Libft em seu projeto, inclua o cabeçalho `libft.h` em seu código fonte e compile-o com o arquivo `libft.a`. Certifique-se de incluir a biblioteca ao compilar seu código.

Exemplo de uso:

```c
#include "libft.h"
#include <stdio.h>

int main() {
    char str[] = "Hello, world!";
    int len = ft_strlen(str);
    printf("O comprimento da string é: %d\n", len);
    return 0;
}
```
