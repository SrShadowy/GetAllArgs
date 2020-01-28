#include <iostream>
#include <fstream>
#include <windows.h>

int main(int argc, char *argv[])
{
           SetConsoleTitle("Captura de parametros.");
           
     std::cout << "Obtendo argumentos(parametros)..."
     <<"\nQuantidade de argumentos obtido: " << argc;
     
     if (argc >= 2)
     {
          for(int i = 0; i < argc; ++i)
               std::cout << std::endl << argv[i];
               
     std::ofstream out("args.txt");
     out << "start ";
     
           for(int i = 0; i < argc; ++i)
               out << argv[i] <<  " ";
     
     }
     else
     {
     std::cout << "\n\tError: 0x1\nArgumentos insuficiente"
     << "\n\n\tAperte qualquer tecla para fechar\n";
     std::cin.get(); 
      return 1;    
     }
     
     std::cout << "\n\nEscrito com sucesso... Arquivo criado 'args.txt'"
     <<"\n\n\tAperte qualquer tecla para fecha\n";
     
     std::cin.get(); 
     
 return 0;    
}
