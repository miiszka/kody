#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import floor

def wyszukaj_liniowo(l, el):
    for i in range(0, len(l)):
        if l[i] == el:
            return i
    return -1


def main(args):
    el = 3
    lista = [9, 8, 7, 6, 5, 4, 3]
    lista.sort()
    print(wyszukaj_liniowo(lista, el))
    assert(wyszukaj_liniowo(lista, 13) == -1)
    wyszukaj_binarnie(lista, el)
    return 0


def wyszukaj_binarnie(lista, el):
    lewy, prawy = 0, len(lista) - 1
    while lewy < prawy:
        srodek = floor((lewy + prawy) / 2)



if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

# int wyszukaj_liniowo(int l[], int n, int el)
# {
#       for(int i = 0; i < n; i++)
#{
#        if(l[i] == el)
#return i;

#}
# return -1;
# }
