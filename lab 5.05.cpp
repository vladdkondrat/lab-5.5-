#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath> 

using namespace std;

vector<int> pseudorandom_generator(int a, int b, int c, int m, int V1, int V2, int n) {
    vector<int> sequence;
    sequence.push_back(V1);
    sequence.push_back(V2);
    for (int i = 2; i < n; ++i) {
        int Vi = (a * static_cast<int>(pow(sequence[i - 1], b)) + c) % m;
        sequence.push_back(Vi);
    }
    return sequence;
}

int main() {
    srand(time(0));

    // Параметри
    int a = 5;
    int b = 3;
    int c = 7;
    int m = 100;
    int V1 = rand() % m;
    int V2 = rand() % m;
    int n = 10;  // Кількість чисел у послідовності

    // Генерація послідовності
   vector<int> sequence = pseudorandom_generator(a, b, c, m, V1, V2, n);

    // Виведення послідовності
    for (int num : sequence) {
       cout << num << " ";
    }
   cout << endl;

    return 0;
}
