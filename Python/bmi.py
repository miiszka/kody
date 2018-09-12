#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  bmi.py
#
#


def main(args):
    wzrost = float(input("Podaj wzrost: "))
    masa = float(input("Podaj masę ciała: "))
    if masa / (wzrost * wzrost) < 18.5:
        print("niedowaga")
    if masa / (wzrost * wzrost) < 24.9:
        print("norma")
    if masa / (wzrost * wzrost) < 25:
        print("nadwaga")
    if masa / (wzrost * wzrost) >= 30:
        print("otyłość")
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
