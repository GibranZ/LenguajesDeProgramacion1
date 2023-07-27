#include <stdio.h>
#include <iostream>

int main()
{
    int edad;
    std::cout << "¿Cuántas vueltas le has dado al sol?: ";
    std::cin >> edad;
    
    if (edad >= 18){
        std::cout << "Seguro 'dormiste pero no descansaste' (Chiste de viejitos)" << std::endl;
    } else {
            std::cout << "Uy, no puedes pasar ¡Siguiente!" << std::endl;
    }
    
    return 0;
}