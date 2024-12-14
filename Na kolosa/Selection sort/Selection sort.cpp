#include <iostream>

using namespace std;

void selectionsort(int tablica[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int najIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (tablica[j] < tablica[najIndex])

                najIndex = j;

        }

        swap(tablica[i], tablica[najIndex]);
    }
}
int main()
{
    int tablica[] = { 50, 40, 30, 20, 10,2,3,4,4,1,2,56,6,765,4,456 };
    int n = sizeof(tablica) / sizeof(tablica[0]);

    cout << "Nieposortowana Tablica: ";
    for (int i = 0; i < n; ++i)
    {
        cout << tablica[i] << " ";
    }

    selectionsort(tablica, n);

    cout << "\nPosortowana Tablica: ";
    for (int i = 0; i < n; ++i)
    {
        cout << tablica[i] << " ";
    }

    return 0;
}