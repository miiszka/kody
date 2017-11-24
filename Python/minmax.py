#!/usr/bin/env python
# -*- coding: utf-8 -*-
from random import randint


def minmax(lista):
    lmin = []
    lmax = []
    indeks = 0
    for i in range(int(len(lista)/2)):
        if lista[indeks] > lista[indeks+1]:
            lmin.append (lista[indeks+1])
            lmax.append (lista[indeks])
        else:
            lmin.append (lista[indeks])
            lmax.append (lista[indeks+1])
        indeks += 2



def minimum(lista):
    min = lista[0]
    for i in lista:
        if i < min:
            min = i
    return min


def maksimum(lista):
    max = lista[0]
    for i in lista:
        if i > max:
            max = i
    return max


def losuj(ile, zakres):
    lista = []
    for i in range(ile):
        lista.append(randint(0, zakres))
    return lista


def main(args):
    ile = 20
    zakres = 50
    lista = losuj(ile, zakres)
    assert minimum([7, 5, 6, 8, 2, 4, 1]) == 1
    assert maksimum([6, 7, 8, 5, 3, 9]) == 9
    print(lista)
    print("Minimum: ", minimum(lista))
    print("Maksimum: ", maksimum(lista))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
