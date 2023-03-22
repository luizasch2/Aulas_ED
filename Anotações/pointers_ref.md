# Referências

Uma referência define um nome alternativo para um objeto. O tipo referencia referencia outro tipo. Referência é definida declarando "&" antes da variável:

``` cpp
int iVal = 1024;
int &refVal = iVal;
```
A variável refVal se refere à iVal e qualquer operação feita em refVal irá ser feita em iVal também. 

Vale ressaltar que caso eu tente criar uma referência de uma variável não declarada o computador irá retornar um erro.

Quando iniciamos uma variável, o valor iniciado é copiado para o objeto que estamos criando. Quando definimos uma referencia, estamos ligando a referencia ao inicializador, quando iniciado a referencia mantém sua ligação com o objeto referenciado. **Quando a referencia é inicializada ela se mantém ligada ao seu objeto de inicialização, não tem como "religar" uma referência para que ela se ligue a um objeto diferente**.

"There is no way to rebind a reference, reference must be initialized".

A referência é basicamente um apelido. Uma referência não é um objeto, mas sim, apenas um outro nome para um objeto que já existe.

Exemplo:

```cpp
int iVal = 2;
int &refval = iVal;
int &refval2 = iVal;

refVal2 = 100;
```

Agora, tanto iVal quanto refVal valem 100. Isso pois refVal2 faz referência a refval que por sua vez faz referência a iVal, logo, mudar o valor de refval2 significa mudar o valor de refval que significa mudar o valor de iVal.

Não podemos inicializar uma referencia, logo:
```cpp
int &refVal4 = 10;
```
daria erro.

O tipo da minha variavel inicializada tem que ser o mesmo tipo da minha referencia.

## * Compound type
O termo "compound type" é geralmente traduzido para o português como "tipo composto". É um tipo de dados que combina dois ou mais tipos de dados mais simples para formar uma única entidade de dados. Em C++ trabalhamos com três tipos de dados compostos: referência, array e ponteiro.

# Ponteiros

Ponteiro é um tipo de dado composto que aponta para outro tipo. Como referencias, ponteiros são usados como uma forma de acesso indireto à um objeto. Diferente da referencia um ponteiro pode ser atribuído e copiado: um único ponteiro pode apontar para mais de um objeto. Além disso, o ponteiro não precisa ser inicializado quando definido. 

Vamos definir um ponteiro escrevendo um declarador *d, sendo d minha variável o * deve ser repetido para cada ponteiro.

Um ponteiro guarda o endereço de um objeto. Pegamos o endereço de um objeto usando o operador "&", exemplo:

```cpp
int ival = 42;
int *p = &ival;
```

p está guardando o endereço da variável ival, p é um ponteiro para ival.

### Valor de um ponteiro:
O valor (endereço) guardado num ponteiro pode ser um destes quatro:
1. Pode apontar para um objeto
2. Pode apontar para a lozalização imediatamente do final do objeto
3. Pode ser um ponteiro nulo, indicando que não está ligado a nenhum objeto
4. Pode ser inválido

```cpp
int iVal = 42;
int *p = &iVal;
cout << *p;
```

Irá printar 42.