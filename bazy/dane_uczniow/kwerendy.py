#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy.py
#  
import sqlite3


def kwerenda1(cur):
    
    cur.execute("""
        SELECT plec, AVG(egz_mat) FROM uczniowie
        GROUP BY plec
    """)
    # SELECT * FROM nazwiska INNER JOIN dane_osobowe ON nazwiska.nr_ucznia = dane_osobowe.nr_ucznia
    # SELECT COUNT(*) FROM nazwiska WHERE imie1  LIKE 'A__a'
    # SELECT * FROM nazwiska WHERE imie1  LIKE 'A__a'
    # SELECT * FROM nazwiska WHERE nazwisko  LIKE 'G%'
    # WHERE miejsce_rodz='Gdańsku'
    # WHERE miejsce_urodz <> 'Gdańsku'
    # miesiac > 6 and miesiac < 9
    for row in cur.fetchall():
        print(tuple(row))
def main(args):
      # konfiguracja ##########
    baza = 'uczniowie'
    tabele = ['nazwiska', 'dane_osobowe', 'oceny']
    roz = '.txt'
    naglowki = True # czy pliki źródłowe zawierają nagłówki?
    ###################
    con = sqlite3.connect(baza + '.db') # połączenie
    cur = con.cursor() # obiekt kursora
    
    kwerenda1(cur)
    
    con.commit()
    con.close()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
