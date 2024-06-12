#include "Archivo.h"

bool Archivo::open(std::string modo)
{
    _pFile = fopen(_fileName.c_str(),modo.c_str());
    if(_pFile == nullptr){return false;}
    return true;
}
void Archivo::close()
{
    fclose(_pFile);
}
