# Usando condicionais

Dado códigos-fonte (*.cpp*) de um projeto, construa-o e compile-o usando condicionais ( **if-else-endif** ) no *CMakeLists.txt*.

# Dependências

As ferramentas necessárias para realizar a prática são:

- GCC
- Make
- CMake (3.5)

# Instruções

Antes de construir seu projeto, altere a variável **USE_LIBRARY** e **BUILD_SHARED_LIBS** em seu *CMakeLists.txt* para mudar o resultado da avaliação do bloco **if-else-endif** ou não.

Para construir este projeto, abra seu interpretador de comandos com a ferramenta *cmake* instalada e digite:

1. Crie a pasta de *build* fora da pasta *src*:

```$ mkdir -p build```

2. Mude a pasta atual de trabalho para a pasta *build*:

```$ cd build```

3. Configure e gere os arquivos de construção do CMake, para o projeto:

```$ cmake ..```

4. Construa seu programa final com o seguinte comando:

```$ cmake --build .```

Seguindo a organização de construção feita com o arquivo *CMakeLists.txt*, o executável final estará na pasta build.
