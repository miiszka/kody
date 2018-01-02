#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sort_wyb.py


def wypelni(t[], n, m):
    srand(time(NULL))
    for(i=0; i < n; i + 1):
        t[i] = 1 + rand() % m


def drukuj(t[], n):
    for(i=0; i < n; i + 1):
        print(t[i])


def zamien(a, b):
    tmp = a
    a = b
    b = tmp


def sort_wyb(t[], n):
    for(i=0; i < n; i + 1):
        k = i
        for(j=i + 1; j < n; j + 1):
            if(t[j] < t[k]):
                k = j
        zamien(t[i], t[k])


def main(args):
    ile = 10
    wypelnij(tab, ile, 20)
    drukuj(tab, ile)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
