#include "head.h"

int main(int argc, char* argv[])
{
    SetConsoleTitle(L"Captura de parametros.");

    cout << "Obtendo argumentos(parametros)..."
        << "\nQuantidade de argumentos obtido: " << argc;

    if (argc >= 2)
    {
        for (int i = 0; i < argc; ++i)
            cout << endl << argv[i];

        ofstream out("1a.bat");
        out << "start ";

        for (int i = 0; i < argc; ++i)
            out << argv[i] << " ";

    }
    else
    {
        cout << "\n\tError: 0x1\nArgumentos insuficiente"
            << "\n\n\tAperte qualquer tecla para fechar\n";
        cin.get();
        return 1;
    }

    cout << "\n\nEscrito com sucesso... Arquivo criado '1a.bat' execute"
        << " apos fechar e abra o arquivo de renomeia novamente"
        << "\n\n\tAperte qualquer tecla para fecha\n";

   cin.get();

    return 0;
}
