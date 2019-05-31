#include "doctest.h"
#include "triangulo.h"


TEST_CASE("Teste VPL - Equilatero") {
    Triangulo t(5, 5, 5);
    Tipo tipo = t.determinar_tipo();
    CHECK_EQ(tipo, 0);
}

TEST_CASE("Teste VPL - Excecao Negativo") {
    CHECK_THROWS(new Triangulo(5, -5, 5));
}


TEST_CASE("Teste VPL - Isosceles") {
Triangulo t(5, 5, 8);
Tipo tipo = t.determinar_tipo();
CHECK_EQ(tipo, 1);
}


TEST_CASE("Teste VPL - Escaleno") {
Triangulo t(5, 6, 8);
Tipo tipo = t.determinar_tipo();
CHECK_EQ(tipo, 2);
}

TEST_CASE("Teste VPL - Lado 0") {
CHECK_THROWS(new Triangulo(5, 0, 5));
}