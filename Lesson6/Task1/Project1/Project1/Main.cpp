#include <iostream>

#define MODE 1

#if !defined(MODE)
#error "���������� ���������� MODE"
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
    cout << "������� � ������ ����������" << endl;
#elif defined(BATTLE_MODE)
    cout << "������� � ������ ������" << endl;
    int x, y;
    cout << "������� ������ �����: ";
    cin >> x;
    cout << "������� ������ �����: ";
    cin >> y;
    cout << "��������� ��������: " << add(x, y) << endl;
#else
    cout << "����������� �����. ���������� ������" << endl;
#endif

    return 0;
}