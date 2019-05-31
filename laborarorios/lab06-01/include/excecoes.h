#ifndef PDS2_EXCECOES_H
#define PDS2_EXCECOES_H

#include <stdexcept>

class TrianguloInvalidoException : public std::exception {
public:
    const char * what () const throw (){
        return "TrianguloInvalidoError";
    }
};

#endif