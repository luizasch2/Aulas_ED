# Vetores e ponteiros

E se eu quiser atribuir um vetor à um ponteiro? Em programação vetor e ponteiro é a mesma coisa. Note que:
```cpp
    int arriValores[5] = {0,7,13,42,666};

    cout << "Endereço de V[0]: " << arriValores << endl;

    int* ptrArrayValores1 = arriValores;

    cout << "PTR: " << ptrArrayValores1 << endl;

    int* ptrArrayValores2  = &arriValores[0];

    cout << "PTR2" << ptrArrayValores2 << endl;
```

dão o mesmo endereço




## Aritimética de ponteiro

Quando soma ou subtrái em um ponteiro ele anda a quantidade de bytes do tipo. Então se somo 1 em um ponteiro (vetor) de inteiros, ele vai andar 4 passos na memória, haja vista que int tem 4 bytes. Dessa forma, posso acessar elementos de um vetor.
 
```cpp
    cout << "Valor de ptrArrayValores1[0]: " << *ptrArrayValores1 << endl;

    cout << "Endereço de ptrArrayValores1[0]: " << ptrArrayValores1 << endl;


    ptrArrayValores1 += 1;

    cout << "Valor de ptrArrayValores[1]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[1]: " << ++ptrArrayValores1 << endl;

    ptrArrayValores1 += 1;

    cout << "Valor de ptrArrayValores[3]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[3]: " << ++ptrArrayValores1 << endl;


    ptrArrayValores1 -= 2;

    cout << "Valor de ptrArrayValores[1]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[1]: " << ++ptrArrayValores1 << endl;
```

Valor de ptrArrayValores1[0]: 0
Endere├ºo de ptrArrayValores1[0]: 0x62fef4
Valor de ptrArrayValores[1]: 7
Endere├ºo de ptrArrayValores1[1]: 0x62fefc
Valor de ptrArrayValores[3]: 42
Endere├ºo de ptrArrayValores1[3]: 0x62ff04
Valor de ptrArrayValores[1]: 13
Endere├ºo de ptrArrayValores1[1]: 0x62ff00

Isso so da certo se tivermos uma alocação continua de memoria