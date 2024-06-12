#pragma once
#include <string>

class Archivo
{
    public:

        std::string _fileName;
        FILE *_pFile;

        bool open(std::string modo);
        void close();

    protected:

    private:
};

