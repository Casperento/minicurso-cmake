# Escolhendo o tipo de build

Especifique o tipo de *build* na linha de comando e imprima as *flags* de cada tipo de *build* no *CMakeLists.txt*.

# Dependências

As ferramentas necessárias para realizar a prática são:

- GCC
- Make
- CMake (3.5)

# Instruções

Para construir este projeto, abra seu interpretador de comandos com a ferramenta *cmake* instalada e digite:

1. Crie a pasta de *build* fora da pasta *src*:

```$ mkdir -p build```

2. Mude a pasta atual de trabalho para a pasta *build*:

```$ cd build```

3. Configure e gere os arquivos de construção do CMake, para o projeto:

```$ cmake -D CMAKE_BUILD_TYPE=Debug ..```, para informar qual tipo de *build* usar.
