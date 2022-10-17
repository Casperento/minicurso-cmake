# Usando loops

Dado códigos-fonte (*.cpp*) de um projeto, construa-o e compile-o com novas flags dependendo do código-fonte. Ainda, exiba as flags por meio de loops ( **foreach-endforeach** ) no *CMakeLists.txt*.

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

```$ cmake ..```

4. Construa seu programa final com o seguinte comando:

```$ cmake --build . --verbose```

Seguindo a organização de construção feita com o arquivo *CMakeLists.txt*, o executável final estará na pasta build.
