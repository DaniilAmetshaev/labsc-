#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Rus");

    int N;  
    long long pr = 1; 
    int minNum = 10000000000; 
    int minIndex = -1;  
    bool found = false;  

    cout << "Введите количество чисел в последовательности: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        int num;
        cout << "Введите число " << i << ": ";
        cin >> num;

        if (num % 10 == 2 || num % 10 == 4) {
            if (!found) {
                pr = num;
                minNum = num;
                minIndex = i;
                found = true;
            }
            else {
                pr *= num;
                if (num < minNum) {
                    minNum = num;
                    minIndex = i;
                }
            }
        }
    }

    if (found) {
        cout << "Произведение чисел, заканчивающихся на 2 или 4: " << pr << endl;
        cout << "Наименьшее число, заканчивающееся на 2 или 4: " << minNum << endl;
        cout << "Номер этого числа в последовательности: " << minIndex << endl;
    }
    else {
        cout << "Нет чисел, заканчивающихся на 2 или 4." << endl;
    }

    return 0;
}