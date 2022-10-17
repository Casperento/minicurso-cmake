# Apresentando opções para o usuário

Dado códigos-fonte (*.cpp*) de um projeto, construa-o e compile-o de forma que o usuário possa configurar variáveis do *CMakeLists.txt* pela ferramenta CMake.

# Dependências

As ferramentas necessárias para realizar a prática são:

- GCC
- Make
- CMake (3.5)

# Instruções

Antes de construir seu projeto, altere a variável **USE_LIBRARY**, **MAKE_STATIC_LIBRARY** e **MAKE_SHARED_LIBRARY** em seu *CMakeLists.txt* para mudar o resultado da avaliação dos blocos **if-else-endif** ou não.

Para construir este projeto, abra seu interpretador de comandos com a ferramenta *cmake* instalada e digite:

1. Crie a pasta de *build* fora da pasta *src*:

```$ mkdir -p build```

2. Mude a pasta atual de trabalho para a pasta *build*:

```$ cd build```

3. Configure e gere os arquivos de construção do CMake, para o projeto:

```$ cmake -D USE_LIBRARY=OFF ..```, para construir o projeto sem compilar nenhum tipo de biblioteca.

Ou

```$ cmake -D USE_LIBRARY=ON -D MAKE_STATIC_LIBRARY=ON -D MAKE_SHARED_LIBRARY=OFF ..```, para construir o projeto compilando sua biblioteca estaticamente.

Ou

```$ cmake -D USE_LIBRARY=ON -D MAKE_STATIC_LIBRARY=OFF -D MAKE_SHARED_LIBRARY=ON ..```, para construir o projeto compilando sua biblioteca dinamicamente.


4. Construa seu programa final com o seguinte comando:

```$ cmake --build .```

Seguindo a organização de construção feita com o arquivo *CMakeLists.txt*, o executável final estará na pasta build.
