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




