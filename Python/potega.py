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

def main(args):
    podst = int(input("Podaj podstawę: "))
    wykladnik = int(input("Podaj wykładnik: "))
    #print("Wynik: ", potega_it(podst, wykladnik))
    assert type(podst) == int
    assert type(wykladnik) == int

    assert potega_it(45, 0) == 1
    assert potega_it(45, 1) == 45
    assert potega_it(3, 2) == 9

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
