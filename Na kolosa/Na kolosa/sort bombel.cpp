//DODANIE BIBLIOTEKI
#include <iostream>

//DZIEKI TEMU NIE TRZEBA UZYWAC DODATKU STD PRZED KAZDA METHODA Z BIBLIOTEKI STANDARDOWEJ
using namespace std;

//STWORZENIE G£OWNEJ FUNKCJI MAIN
int main()
{
    //STWORZENIE ZMIENNEJ N TYPU INT I NADANIE WARTOSCI 5
    int n = 5;
    //STWORZENIE TABLICY N ELEMENTOWEJ I PRZYPISANIE JEJ WARTOSCI{5, 4, 3, 2, 1 }
    int myNumbers[n] = { 5, 4, 3, 2, 1 };
    //WYSWIETLENIE TEKSTU "Before: " w konsoli
    cout << "Before: ";
    //deklaracjia petli iterujacej po n elementach tablicy myNumbers wyswietlajacej kazdy element po koleji
    for (int i = 0; i < n; i++)
    {
        cout << myNumbers[i] << " ";
    }
    //petla iterujaca po n - 1 elementach
    for (int j = 0; j < n - 1; j++)
    {
        //petla iterujaca po n - 1 - j elementach
        for (int i = 0; i < n - 1 - j; i++)
        {
            //jezeli element petli jest wiekszy od nastepnego zamienia miejsca elementow biezacego i nastepnego
            if (myNumbers[i] > myNumbers[i + 1])
            {
                int temp = myNumbers[i];
                myNumbers[i] = myNumbers[i + 1];
                myNumbers[i + 1] = temp;
            }
            //nastepnie wyswietla cala tabele po koleji ze zmienionymi elementami
            cout << "\nstep: ";
            for (int i = 0; i < n; i++)
            {
                cout << myNumbers[i] << " ";
            }
        }
    }

    // po calym zabiegu sortowania wyswietla stan koncowy tabeli po sortowaniu
    cout << "\nAfter: ";
    for (int i = 0; i < n; i++)
    {
        cout << myNumbers[i] << " ";
    }
    return 0;
}