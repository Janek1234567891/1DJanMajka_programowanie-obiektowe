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



#include <iostream>

void task1()
{
    short ageFromUser;
    std::cout << "Podaj swoj wiek.\n";
    std::cin >> ageFromUser;

    std::cout << "Masz " << ageFromUser << "lat.\n";
}

void task2()
{
    float lengthInMeterFromUser;
    std::cout << "Podaj ddlugosc w metrach\n";
    std::cin >> lengthInMeterFromUser;

    float lenghtInCentimeter;
    lenghtInCentimeter = lengthInMeterFromUser * 100;

    float lenghtInMilimeter = lenghtInCentimeter * 10;
    float lenghtInKilometer = lengthInMeterFromUser / 1000;

    std::cout << "metry" << lengthInMeterFromUser << "\n";
    std::cout << "centymetery" << lenghtInCentimeter << "\n";
    std::cout << "milimetry" << lenghtInMilimeter << "\n";
}
#include <iostream>

using namespace std;

//Napisz program, który wczyta od u¿ytkownika jego wiek a nastêpnie wyœwietli go na konsoli.

void task1()
{

    short ageFromUser;

    cout << "Podaj swoj wiek: ";
    cin >> ageFromUser;
    std::cout << "Podaj swoj wiek: ";
    std::cin >> ageFromUser;

    cout << "Masz" << ageFromUser << "lat.\n";
    std::cout << "Masz" << ageFromUser << "lat.\n";
}

//Stwórz program, który pobiera od u¿ytkownika
@@ - 52, 275 + 23, 42 @@ void task1()
void task2()
{
    float lengthInMeterFromUser;
    cout << "Podaj dlugosc w metrach\n";
    cin >> lengthInMeterFromUser;
    std::cout << "Podaj dlugosc w metrach\n";
    std::cin >> lengthInMeterFromUser;

    float lengthIncentiMeterFromUser = lengthInMeterFromUser * 100;

    cout << lengthInMeterFromUser << "metrow to\n" << lengthIncentiMeterFromUser << "cemtymetrow\n" << endl;
    std::cout << lengthInMeterFromUser << "metrow to\n" << lengthIncentiMeterFromUser << "cemtymetrow\n";

    float lengthInMiliMeterFromUser = lengthInMeterFromUser * 1000;
    cout << lengthInMeterFromUser << "metrow to\n" << lengthInMiliMeterFromUser << "milimetrow\n" << endl;
    std::cout << lengthInMeterFromUser << "metrow to\n" << lengthInMiliMeterFromUser << "milimetrow\n";

    float lengthIniKiloMeterFromUser = lengthInMeterFromUser / 1000;
    cout << lengthInMeterFromUser << "metrow to\n" << lengthIniKiloMeterFromUser << "kilometrow\n" << endl;
    std::cout << lengthInMeterFromUser << "metrow to\n" << lengthIniKiloMeterFromUser << "kilometrow\n";
}

/*
* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.
* Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.
* Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.
*/

// Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.
void task3()
{
    int side_a, side_b;

    cout << "Podaj dlugoœæ boku A:";
    cin >> side_a;

    cout << "Podaj dlugoœæ boku B:";
    cin >> side_b;

    int area_rectangle = side_a * side_b;
    cout << "Pole prostok¹ta o bokach: " << side_a << " i " << side_b << " wynosi " << area_rectangle << endl;
}

//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.

void task4()
{
    int base_triangle, height_triangle;

    cout << "Podaj d³ugoœæ podstawy: ";
    cin >> base_triangle;

    cout << "Podaj wysokoœæ trójk¹ta: ";
    cin >> height_triangle;

    int area_triangle = base_triangle * height_triangle;
    cout << "Pole trójk¹ta o podstawie " << base_triangle << " i wysokoœci " << height_triangle << " jest równe: " << area_triangle;
}

//Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.

void task5()
{
    float PI_number, Circle_radius;
    PI_number = 3.14159;

    cout << "Podaj promieñ ko³a: ";
    cin >> Circle_radius;

    float area_wheels = PI_number * Circle_radius;
    cout << "Pole ko³a o promieniu: " << Circle_radius << " jest równe " << area_wheels << endl;

}

//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.

void task6()
{
    int base_a, base_b, height_h;

    cout << "Podaj d³ugoœæ podstawy A: ";
    cin >> base_a;

    cout << "Podaj d³ugoœæ podstawy B: ";
    cin >> base_b;

    cout << "Podaj wysokoœæ trójk¹ta: ";
    cin >> height_h;

    int area_trapeze = (base_a + base_b) * height_h / 2;
    cout << "Pole trapezu o podstawie A " << base_a << ", podstawie B " << base_b << " i wysokoœci " << height_h << " równa siê: " << area_trapeze << endl;
}

//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.

void task7()
{
    int length_of_the_edge_of_the_cube;

    cout << "Podaj d³ugoœæ krawêdzi szeœcianiu: ";
    cin >> length_of_the_edge_of_the_cube;

    int volume_cube = length_of_the_edge_of_the_cube * length_of_the_edge_of_the_cube * length_of_the_edge_of_the_cube;
    cout << "Szeœcian o d³ugoœci krawêdzi: " << length_of_the_edge_of_the_cube << " Wynosi: " << volume_cube << endl;
}

//Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.

void task8()
{
    int temperature_C;

    cout << "Podaj temperaturê w stopniach celsjusza: ";
    cin >> temperature_C;

    int temperature_F = (temperature_C * 9 / 5) + 32;
    cout << temperature_C << " stopni celsjusza to: " << temperature_F << " °F" << endl;
}

//Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.

void task9()
{
    float pln;

    cout << "Wartoœæ w z³otówkach: ";
    cin >> pln;

    float funt = pln / 5.08;
    float euro = pln / 4.43;
    float dolar = pln / 4.14;

    cout << pln << " z³ to " << funt << "funtów" << endl;
    cout << pln << " z³ to " << euro << "euro" << endl;
    cout << pln << " z³ to " << dolar << "dolarów" << endl;
}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

void task10()
{
    float a, b;
    cout << "Podaj liczbê pierwsz¹ (A): ";
    cin >> a;

    cout << "Podaj liczbê drug¹ (B): ";
    cin >> b;

    float average = (a + b) / 2;
    cout << "Œrednia artymetyczna liczb: " << a << " i " << b << " jest równa: " << average;
}

//Napisz program, który poprosi u¿ytkownika o podanie trzech liczb(a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb.Nastêpnie wyœwietli wynik.

void task11()
{
    float a, b, c;

    cout << "Podaj pierwsz¹ liczbê (a): ";
    cin >> a;

    cout << "Podaj drug¹ liczbê (b): ";
    cin >> b;
    float SideLenghtA;
    std::cout << "Podaj bok a\n";
    std::cin >> SideLenghtA;

    cout << "Podaj drug¹ liczbê (c): ";
    cin >> c;
    float SideLenghtB;
    std::cout << "Podaj bok b\n";
    std::cin >> SideLenghtB;

    float mean;
    mean = (a + b + c) / 3;
    cout << "Œrednia artymetyczna liczby: " << a << ", liczby " << b << " i liczby " << c << " jest równa " << mean << endl;
    float AreaOfRectangle;
    AreaOfRectangle = SideLenghtA * SideLenghtB;
    std::cout << "Pole prostok¹ta wynosi\n" << AreaOfRectangle << "\n";

}

//Napisz program, obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

void task12()
{
    float number_1, number_2;
    float number_3, w1, w2, w3;

    cout << "Podaj liczbê pierwsz¹: ";
    cin >> number_1;

    cout << "Podaj liczbê drug¹: ";
    cin >> number_2;

    cout << "Podaj liczbê trzeci¹: ";
    cin >> number_3;

    cout << "Podaj wagê pierwszej liczby: ";
    cin >> w1;

    cout << "Podaj wagê drugiej liczby: ";
    cin >> w2;

    cout << "Podaj wagê trzeciej liczby: ";
    cin >> w3;

    float average_weight;
    average_weight = (number_1 * w1 + number_2 * w2 + number_3 * w3) / (w1 + w2 + w3);
    cout << "Œrednia waga to: " << average_weight << endl;
}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych.Nastêpnie wykona operacje(+, -, *, / ) i wyœwietli wyniki.

void task13()
{
    int number_one, number_two;

    cout << "Podaj liczbe 1: ";
    cin >> number_one;

    cout << "Podaj liczbe 2: ";
    cin >> number_two;

    int operation_1 = number_one + number_two;
    int operation_2 = number_one - number_two;
    int operation_3 = number_one * number_two;
    int operation_4 = number_one / number_two;

    cout << "Operacja 1 (+): " << operation_1 << "\nOperacja 2 (-): " << operation_2 << "\nOperacja 3 (*): " << operation_3 << "\nOperacja 4 (/): " << operation_4 << endl;
}

void task14()
{
    float s, min, h;

    cout << "Podaj liczbê sekund: ";
    cin >> s;

    min = s / 60;
    h = s / 3600;

    cout << s << " sekund to: \n" << min << " minut \n" << h << "godzin" << endl;
}

//Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych(x1, y1) i(x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.

void task15()
{
    int x1, y1;
    cout << "Podaj wspó³rzêdne punktu A (x1, y1): ";
    cin >> x1 >> y1;

    int x2, y2;
    cout << "Podaj wspolrzedne punktu B (x2 y2): ";
    cin >> x2 >> y2;

    double distance;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "Odleg³oœæ miêdzy punktami A i B wynosi: " << distance << endl;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    //task10();
    //task11();
    //task12();
    //task13();
    //task14();
    //task15();

    return 0;
    task3();
    return 0;
}


@@ - 377, 4 + 115, 33 @@ int main()
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
