#include "gracz.h"
#include "kolo.h"
#include "kolor.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <string>  
#include <fstream>
#include <vector>
#include <cstring>
#include <cassert>
#include <locale.h>

using namespace std;

int kolejka = 0;

Kolo kolory[] = { Kolo(-1), Kolo(0), Kolo(100), Kolo(200), Kolo(100), Kolo(200), Kolo(100), Kolo(200), Kolo(500), Kolo(500), Kolo(1000), Kolo(1000), Kolo(1500), Kolo(2000), Kolo(3000), Kolo(5000) };

int main(){
    Gracz gracze[3]{
        Gracz("Anna"),
        Gracz("Bartek"),
        Gracz("Celina")
    };
}