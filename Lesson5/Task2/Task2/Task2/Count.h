#pragma once


class Counter {
private:
    int value;

public:
    // ����������� �� ���������
    Counter();

    // ����������� � ���������������� ���������
    Counter(int initial_value);

    // ������ ��� ���������� � ���������� �������� ��������
    void increment();
    void decrement();

    // ����� ��� ��������� �������� �������� ��������
    int getValue() const;
};
