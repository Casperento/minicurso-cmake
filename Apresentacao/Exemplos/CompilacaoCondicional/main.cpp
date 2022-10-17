#include <iostream>

using std::cout;
using std::endl;

#ifdef _WIN32
    #define OS_NAME "Windows"
    #define OS_SLASH_TYPE "\\"
#else
    #define OS_NAME "Linux"
    #define OS_SLASH_TYPE "/"
#endif

int main(int argc, char** argv) {
    cout << "Sistema Operacional atual: " << OS_NAME << endl;
    cout << "Barra usada para nomear diretórios: " << OS_SLASH_TYPE << endl;
    return 0;
}

