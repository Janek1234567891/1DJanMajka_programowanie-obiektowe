// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Napisz program, kt�ry wczyta od u�ytkownika jego wiek a nast�pnie wy�wietli go na konsoli.

void task1()
{

    short ageFromUser;

    std::cout << "Podaj swoj wiek: ";
    std::cin >> ageFromUser;

    std::cout << "Masz" << ageFromUser << "lat.\n";
}

//Stw�rz program, kt�ry pobiera od u�ytkownika
//d�ugo�ci w metrach i przelicza j� na centymetry
//milimetry i kilometry. Wy�wietl wynik.

void task2()
{
    float lengthInMeterFromUser;
    std::cout << "Podaj dlugosc w metrach\n";
    std::cin >> lengthInMeterFromUser;

    float lengthIncentiMeterFromUser = lengthInMeterFromUser * 100;

    std::cout << lengthInMeterFromUser << "metrow to\n" << lengthIncentiMeterFromUser << "cemtymetrow\n";

    float lengthInMiliMeterFromUser = lengthInMeterFromUser * 1000;
    std::cout << lengthInMeterFromUser << "metrow to\n" << lengthInMiliMeterFromUser << "milimetrow\n";

    float lengthIniKiloMeterFromUser = lengthInMeterFromUser / 1000;
    std::cout << lengthInMeterFromUser << "metrow to\n" << lengthIniKiloMeterFromUser << "kilometrow\n";
}

void task3()
{
    float SideLenghtA;
    std::cout << "Podaj bok a\n";
    std::cin >> SideLenghtA;

    float SideLenghtB;
    std::cout << "Podaj bok b\n";
    std::cin >> SideLenghtB;

    float AreaOfRectangle;
    AreaOfRectangle = SideLenghtA * SideLenghtB;
    std::cout << "Pole prostok�ta wynosi\n" << AreaOfRectangle << "\n";
    
}
int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    task3();
     return 0;
}


/*

<<<<<<< HEAD
    Algorytm - sko�czony zbi�r instrukcji realizuj�cy postawione przed nim zadanie.
    Kolejno�� instrukcji w zbiorze jest okre�lona.
=======
    Algorytm - zbiór instrukcji realizujący postawione przed nim zadanie.
>>>>>>> 41dc9cc6617836b9d94098020bf24d87057ab1a2
    Sposoby zapisu:
    * w punktach
    * opis słowny
    * język programowania lub pseudokod
    * zbiór rysunków
    * schemat blokowy

    Zmienna - jest to powien obszar w pamięci, słóżący do przechowywania danych. Te dane można modyfikować.
    Zmienna pozwala przechować tylko jedną wartość w danym momencie czasu.

    Deklaracja zmiennej - moment jej utworzenia

    typ_zmiennej oraz nazwa_zmiennej;

    Typ zmiennej - mówi o wielkości obszaru w pamięci i o rodzaju przechowywanych danych.

    short         liczby całkowite ze znakiem 2  bajty  <-32 768; 32 767>
    int/long      liczby całkowite ze znakiem 4 bajty  <-2 147 483 648; 2 147 483 647>
    long long     liczby całkowite ze znakiem 8 bajty <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

    Jeżeli przed powyższymi typami dodamy słowo "unsigned" to zakres jest od zero do podwojnego zakresu górnego

    float         liczby rzeczywiste ze znakiem 4 bajty
    double        liczby rzeczywiste ze znakiem 8 bajtów
    long double   liczby rzeczywiste ze znakiem 12 bajtów

    Nazwa zmiennej - nazwa obszaru w pamięci. Poprzez ta nazwę odwołujemy się do tego obszaru.

    Wymagania kompilatora względem nazwy:
    * uzycie tylko dozwolonych znaków
    -  alfabet angielski a-z oraz A-Z
    -  cyfry arabskie 0-9
    -  podkreślenie (podłoga) _
    * pierwszym znakiem nie może być cyfra
    * nie może być słowo kluczowe danego języka programowania
    * musi być unikalna w danej widoczności

    Wymagania programistów:
    * jeśli nazwa składa się z wielu wyrazów to zamiast spacji:
    - używamy znaku podkreślenia np. first_number_from_user
    - stosujemy camel case, czyli piszemy wszystko razem a słowa (zaczynamy od drugiego)
    zaczynamy z dużej litery np. firstNumberFromUser
    * nazwa zmiennej musi oddawać charakter przechowanych danych, czyli mieć znaczenie
    * nazwy po angielsku !!!

*/
/*
* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.

* Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb (a, b, c) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.

* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.


*/