// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Napisz program, który wczyta od u¿ytkownika jego wiek a nastêpnie wyœwietli go na konsoli.

void task1()
{

    short ageFromUser;

    std::cout << "Podaj swoj wiek: ";
    std::cin >> ageFromUser;

    std::cout << "Masz" << ageFromUser << "lat.\n";
}

//Stwórz program, który pobiera od u¿ytkownika
//d³ugoœci w metrach i przelicza j¹ na centymetry
//milimetry i kilometry. Wyœwietl wynik.

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
    std::cout << "Pole prostok¹ta wynosi\n" << AreaOfRectangle << "\n";
    
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
    Algorytm - skoñczony zbiór instrukcji realizuj¹cy postawione przed nim zadanie.
    Kolejnoœæ instrukcji w zbiorze jest okreœlona.
=======
    Algorytm - zbiÃ³r instrukcji realizujÄ…cy postawione przed nim zadanie.
>>>>>>> 41dc9cc6617836b9d94098020bf24d87057ab1a2
    Sposoby zapisu:
    * w punktach
    * opis sÅ‚owny
    * jÄ™zyk programowania lub pseudokod
    * zbiÃ³r rysunkÃ³w
    * schemat blokowy

    Zmienna - jest to powien obszar w pamiÄ™ci, sÅ‚Ã³Å¼Ä…cy do przechowywania danych. Te dane moÅ¼na modyfikowaÄ‡.
    Zmienna pozwala przechowaÄ‡ tylko jednÄ… wartoÅ›Ä‡ w danym momencie czasu.

    Deklaracja zmiennej - moment jej utworzenia

    typ_zmiennej oraz nazwa_zmiennej;

    Typ zmiennej - mÃ³wi o wielkoÅ›ci obszaru w pamiÄ™ci i o rodzaju przechowywanych danych.

    short         liczby caÅ‚kowite ze znakiem 2  bajty  <-32 768; 32 767>
    int/long      liczby caÅ‚kowite ze znakiem 4 bajty  <-2 147 483 648; 2 147 483 647>
    long long     liczby caÅ‚kowite ze znakiem 8 bajty <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

    JeÅ¼eli przed powyÅ¼szymi typami dodamy sÅ‚owo "unsigned" to zakres jest od zero do podwojnego zakresu gÃ³rnego

    float         liczby rzeczywiste ze znakiem 4 bajty
    double        liczby rzeczywiste ze znakiem 8 bajtÃ³w
    long double   liczby rzeczywiste ze znakiem 12 bajtÃ³w

    Nazwa zmiennej - nazwa obszaru w pamiÄ™ci. Poprzez ta nazwÄ™ odwoÅ‚ujemy siÄ™ do tego obszaru.

    Wymagania kompilatora wzglÄ™dem nazwy:
    * uzycie tylko dozwolonych znakÃ³w
    -  alfabet angielski a-z oraz A-Z
    -  cyfry arabskie 0-9
    -  podkreÅ›lenie (podÅ‚oga) _
    * pierwszym znakiem nie moÅ¼e byÄ‡ cyfra
    * nie moÅ¼e byÄ‡ sÅ‚owo kluczowe danego jÄ™zyka programowania
    * musi byÄ‡ unikalna w danej widocznoÅ›ci

    Wymagania programistÃ³w:
    * jeÅ›li nazwa skÅ‚ada siÄ™ z wielu wyrazÃ³w to zamiast spacji:
    - uÅ¼ywamy znaku podkreÅ›lenia np. first_number_from_user
    - stosujemy camel case, czyli piszemy wszystko razem a sÅ‚owa (zaczynamy od drugiego)
    zaczynamy z duÅ¼ej litery np. firstNumberFromUser
    * nazwa zmiennej musi oddawaÄ‡ charakter przechowanych danych, czyli mieÄ‡ znaczenie
    * nazwy po angielsku !!!

*/
/*
* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.

* Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Napisz program, który poprosi u¿ytkownika o podanie trzech liczb (a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.

* Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.


*/