#include "Count.h"

// Реализация конструктора по умолчанию
Counter::Counter() : value(1) {}

// Реализация конструктора с инициализирующим значением
Counter::Counter(int initial_value) : value(initial_value) {}

// Реализация метода для увеличения значения счётчика
void Counter::increment() { value++; }

// Реализация метода для уменьшения значения счётчика
void Counter::decrement() { value--; }

// Реализация метода для получения текущего значения счётчика
int Counter::getValue() const { return value; }