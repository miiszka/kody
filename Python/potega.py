#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0 = 1
# a1 = a
# an = a * ... * a (n-czynników) dla N+ - {1}


def potega_it(podst, wykladnik):
    """Funkcja oblicza iteracyjnie potęgę l. naturalnej"""
    wynik = 1
    for i in range(wykladnik):
        wynik = wynik * podst

    return wynik

# a0 = 1 - warunek brzegowy
# an = a(n-1)*a dla n > 0


def potega_rek(podst, wykladnik):
    if wykladnik == 0:
        return 1
    return potega_rek(podst, wykladnik - 1) * podst


def main(args):
    podst = int(input("Podaj podstawę: "))
    wykladnik = int(input("Podaj wykładnik: "))
    # print("Wynik: ", potega_it(podst, wykladnik))
    assert type(podst) == int
    assert type(wykladnik) == int

    assert potega_it(45, 0) == 1
    assert potega_it(45, 1) == 45
    assert potega_it(3, 2) == 9
    assert potega_rek(3, 2) == 9
    print("Wynik: ", potega_rek(podst, wykladnik))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
