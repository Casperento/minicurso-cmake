# Exemplo de Compilação Simples

Para compilar o código-fonte deste projeto, use os seguintes comandos em seu interpretador de comandos:

```
$ g++ -S -fverbose-asm main.cpp -o main.s
$ g++ -c main.s -o main.o
$ g++ main.o -o programa.bin
```

E para executar o programa compilado, use:

```
$ ./programa.bin
```
