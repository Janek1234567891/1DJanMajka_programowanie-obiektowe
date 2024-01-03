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

//Napisz program, kt�ry wczyta od u�ytkownika jego wiek a nast�pnie wy�wietli go na konsoli.

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

//Stw�rz program, kt�ry pobiera od u�ytkownika
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
* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.
* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.
* Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.
*/

// Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.
void task3()
{
    int side_a, side_b;

    cout << "Podaj dlugo�� boku A:";
    cin >> side_a;

    cout << "Podaj dlugo�� boku B:";
    cin >> side_b;

    int area_rectangle = side_a * side_b;
    cout << "Pole prostok�ta o bokach: " << side_a << " i " << side_b << " wynosi " << area_rectangle << endl;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.

void task4()
{
    int base_triangle, height_triangle;

    cout << "Podaj d�ugo�� podstawy: ";
    cin >> base_triangle;

    cout << "Podaj wysoko�� tr�jk�ta: ";
    cin >> height_triangle;

    int area_triangle = base_triangle * height_triangle;
    cout << "Pole tr�jk�ta o podstawie " << base_triangle << " i wysoko�ci " << height_triangle << " jest r�wne: " << area_triangle;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.

void task5()
{
    float PI_number, Circle_radius;
    PI_number = 3.14159;

    cout << "Podaj promie� ko�a: ";
    cin >> Circle_radius;

    float area_wheels = PI_number * Circle_radius;
    cout << "Pole ko�a o promieniu: " << Circle_radius << " jest r�wne " << area_wheels << endl;

}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.

void task6()
{
    int base_a, base_b, height_h;

    cout << "Podaj d�ugo�� podstawy A: ";
    cin >> base_a;

    cout << "Podaj d�ugo�� podstawy B: ";
    cin >> base_b;

    cout << "Podaj wysoko�� tr�jk�ta: ";
    cin >> height_h;

    int area_trapeze = (base_a + base_b) * height_h / 2;
    cout << "Pole trapezu o podstawie A " << base_a << ", podstawie B " << base_b << " i wysoko�ci " << height_h << " r�wna si�: " << area_trapeze << endl;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.

void task7()
{
    int length_of_the_edge_of_the_cube;

    cout << "Podaj d�ugo�� kraw�dzi sze�cianiu: ";
    cin >> length_of_the_edge_of_the_cube;

    int volume_cube = length_of_the_edge_of_the_cube * length_of_the_edge_of_the_cube * length_of_the_edge_of_the_cube;
    cout << "Sze�cian o d�ugo�ci kraw�dzi: " << length_of_the_edge_of_the_cube << " Wynosi: " << volume_cube << endl;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.

void task8()
{
    int temperature_C;

    cout << "Podaj temperatur� w stopniach celsjusza: ";
    cin >> temperature_C;

    int temperature_F = (temperature_C * 9 / 5) + 32;
    cout << temperature_C << " stopni celsjusza to: " << temperature_F << " �F" << endl;
}

//Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.

void task9()
{
    float pln;

    cout << "Warto�� w z�ot�wkach: ";
    cin >> pln;

    float funt = pln / 5.08;
    float euro = pln / 4.43;
    float dolar = pln / 4.14;

    cout << pln << " z� to " << funt << "funt�w" << endl;
    cout << pln << " z� to " << euro << "euro" << endl;
    cout << pln << " z� to " << dolar << "dolar�w" << endl;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

void task10()
{
    float a, b;
    cout << "Podaj liczb� pierwsz� (A): ";
    cin >> a;

    cout << "Podaj liczb� drug� (B): ";
    cin >> b;

    float average = (a + b) / 2;
    cout << "�rednia artymetyczna liczb: " << a << " i " << b << " jest r�wna: " << average;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb(a, b, c) i obliczy �redni� arytmetyczn� tych liczb.Nast�pnie wy�wietli wynik.

void task11()
{
    float a, b, c;

    cout << "Podaj pierwsz� liczb� (a): ";
    cin >> a;

    cout << "Podaj drug� liczb� (b): ";
    cin >> b;
    float SideLenghtA;
    std::cout << "Podaj bok a\n";
    std::cin >> SideLenghtA;

    cout << "Podaj drug� liczb� (c): ";
    cin >> c;
    float SideLenghtB;
    std::cout << "Podaj bok b\n";
    std::cin >> SideLenghtB;

    float mean;
    mean = (a + b + c) / 3;
    cout << "�rednia artymetyczna liczby: " << a << ", liczby " << b << " i liczby " << c << " jest r�wna " << mean << endl;
    float AreaOfRectangle;
    AreaOfRectangle = SideLenghtA * SideLenghtB;
    std::cout << "Pole prostok�ta wynosi\n" << AreaOfRectangle << "\n";

}

//Napisz program, obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

void task12()
{
    float number_1, number_2;
    float number_3, w1, w2, w3;

    cout << "Podaj liczb� pierwsz�: ";
    cin >> number_1;

    cout << "Podaj liczb� drug�: ";
    cin >> number_2;

    cout << "Podaj liczb� trzeci�: ";
    cin >> number_3;

    cout << "Podaj wag� pierwszej liczby: ";
    cin >> w1;

    cout << "Podaj wag� drugiej liczby: ";
    cin >> w2;

    cout << "Podaj wag� trzeciej liczby: ";
    cin >> w3;

    float average_weight;
    average_weight = (number_1 * w1 + number_2 * w2 + number_3 * w3) / (w1 + w2 + w3);
    cout << "�rednia waga to: " << average_weight << endl;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych.Nast�pnie wykona operacje(+, -, *, / ) i wy�wietli wyniki.

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

    cout << "Podaj liczb� sekund: ";
    cin >> s;

    min = s / 60;
    h = s / 3600;

    cout << s << " sekund to: \n" << min << " minut \n" << h << "godzin" << endl;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych(x1, y1) i(x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.

void task15()
{
    int x1, y1;
    cout << "Podaj wsp�rz�dne punktu A (x1, y1): ";
    cin >> x1 >> y1;

    int x2, y2;
    cout << "Podaj wspolrzedne punktu B (x2 y2): ";
    cin >> x2 >> y2;

    double distance;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "Odleg�o�� mi�dzy punktami A i B wynosi: " << distance << endl;
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
