#include "Arquivo.hpp"

/* brief: construtor padrao: abre os arquivos de leitura e escrita
* pre: nenhuma
* pos: arquivos de leitura e escrita abertos
*/
Arquivo::Arquivo (const std::string &fileName)
{
   this->fileName = fileName;
   out.open(fileName, std::ios::out | std::ios::binary);
   in.open(fileName, std::ios::in | std::ios::binary);
}

/* brief: destrutor: fecha os arquivos de leitura e escrita 
* pre: arquivos deve estar abertos
* pos: arquivos de leitura e escrita fechados 
*/
Arquivo::~Arquivo ()
{
   out.close();
   in.close();
}

/* brief: metodo getter: obtem o nome do arquivo
* return: string contendo o nome do arquivo
* pre: nenhuma
* pos: nome obtido
*/
std::string Arquivo::getName () const
{
   return fileName;
}