#!/usr/bin/env python
# -*- coding: utf-8 -*-


def suma(a, b):
    return a + b


def roznica(a, b):
    return a - b


def iloczyn(a, b):
    return a * b


def iloraz(a, b):
    return a / b


def main(args):
    a = int(input("Podaj 1. liczbę: "))
    print(a)
    b = int(input("Podaj 2. liczbę: "))
    print(b)

    print("Suma: ", a + b)
    print("Różnica: ", a - b)
    print("Iloczyn: ", a * b)
    print("Iloraz: ", a / b)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
