# Ponteiros

Permitem mudar os argumentos das funções;<br/>
Manipular as rotinasde alocação dinâmica;<br/>
Aumentar a eficiência do programa.<br/>

## Definição

Ponteiro é uma variável que contém um endereço de memória.<br/>
O conteúdo dessa variável é a posição de outra variável na memória.<br/>
Assim, um ponteiro aponta para outra variável quando contém o endereço desta.<br/>

## Aritmética de Ponteiros

Existem duas operações aritméticas com ponteiros: adição e subtração.

int main( ) {<br/>
int x; supor inteiro com 2 bytes<br/>
int *p;<br/>
p = &x; supor endereço 2000 contido em p**<br/>
p++; p = p + 1 = 2000 + 1 * sizeof( int )= 2002<br/>
}