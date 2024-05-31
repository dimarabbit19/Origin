#pragma once


class Counter {
private:
    int value;

public:
    // Конструктор по умолчанию
    Counter();

    // Конструктор с инициализирующим значением
    Counter(int initial_value);

    // Методы для увеличения и уменьшения значения счётчика
    void increment();
    void decrement();

    // Метод для получения текущего значения счётчика
    int getValue() const;
};
