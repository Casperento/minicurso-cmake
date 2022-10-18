# Exemplo de Tipos de Linkagem

Abaixo estão elencados exemplos de comandos para realizar compilação com linkagem *estática* ou *dinâmica*.

## Linkagem estática

Para compilar o código-fonte deste projeto com linkagem **estática**, use os seguintes comandos em seu interpretador de comandos:

```
$ g++ -c *.cpp
$ ar -cvq libgeometry.a geometry_*.o
$ g++ main.o libgeometry.a -o programa1.bin
```

E para executar o programa compilado, use:

```
$ ./programa1.bin
```

## Linkagem dinâmica

Para compilar o código-fonte deste projeto com linkagem **dinâmica**, use os seguintes comandos em seu interpretador de comandos:

```
$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
$ g++ -fPIC -c geometry_*.cpp
$ g++ -shared -o libgeometry.so geometry_*.o
$ g++ -c main.cpp
$ g++ main.o -o programa2.bin -L. -lgeometry
```

Para executar o programa compilado, use:

```
$ ./programa2.bin
```

E para verificar se a biblioteca foi linkada corretamente, use:

```
$ ldd programa2.bin
```
