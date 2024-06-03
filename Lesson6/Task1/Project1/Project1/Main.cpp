#include <iostream>

#define MODE 1

#if !defined(MODE)
#error "Необходимо определить MODE"
#endif

#if MODE == 0
#define TRAINING_MODE
#elif MODE == 1
#define BATTLE_MODE
#endif

using namespace std;

#ifdef BATTLE_MODE
int add(int x, int y) {
    return x + y;
}
#endif

int main() {
    setlocale(LC_ALL, "RU");

#ifdef TRAINING_MODE
    cout << "Работаю в режиме тренировки" << endl;
#elif defined(BATTLE_MODE)
    cout << "Работаю в боевом режиме" << endl;
    int x, y;
    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите второе число: ";
    cin >> y;
    cout << "Результат сложения: " << add(x, y) << endl;
#else
    cout << "Неизвестный режим. Завершение работы" << endl;
#endif

    return 0;
}