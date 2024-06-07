#include <iostream>
#include <stdexcept>

class Fraction
{
private:
    int numerator_;
    int denominator_;

    // ��������������� ������� ��� ���������� ����������� ������ ��������
    int gcd(int a, int b) const
    {
        while (b != 0)
        {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }

    // ���������� �����
    void reduce()
    {
        int divisor = gcd(numerator_, denominator_);
        numerator_ /= divisor;
        denominator_ /= divisor;
    }

public:
    Fraction(int numerator = 0, int denominator = 1)
        : numerator_(numerator), denominator_(denominator)
    {
        if (denominator_ == 0)
        {
            throw std::invalid_argument("Denominator cannot be zero.");
        }
        if (denominator_ < 0)
        {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }
        reduce();
    }

    // ��������� ���������
    bool operator==(const Fraction& other) const
    {
        return (numerator_ * other.denominator_ == other.numerator_ * denominator_);
    }

    bool operator!=(const Fraction& other) const
    {
        return !(*this == other);
    }

    bool operator<(const Fraction& other) const
    {
        return (numerator_ * other.denominator_ < other.numerator_ * denominator_);
    }

    bool operator>(const Fraction& other) const
    {
        return other < *this;
    }

    bool operator<=(const Fraction& other) const
    {
        return !(other < *this);
    }

    bool operator>=(const Fraction& other) const
    {
        return !(*this < other);
    }

    // ��������� �������������� ��������
    Fraction operator+(const Fraction& other) const
    {
        return Fraction(numerator_ * other.denominator_ + other.numerator_ * denominator_, denominator_ * other.denominator_);
    }

    Fraction operator-(const Fraction& other) const
    {
        return Fraction(numerator_ * other.denominator_ - other.numerator_ * denominator_, denominator_ * other.denominator_);
    }

    Fraction operator*(const Fraction& other) const
    {
        return Fraction(numerator_ * other.numerator_, denominator_ * other.denominator_);
    }

    Fraction operator/(const Fraction& other) const
    {
        return Fraction(numerator_ * other.denominator_, denominator_ * other.numerator_);
    }

    // ������� �����
    Fraction operator-() const
    {
        return Fraction(-numerator_, denominator_);
    }

    // ���������� ���������
    Fraction& operator++()
    {
        numerator_ += denominator_;
        reduce();
        return *this;
    }

    // ����������� ���������
    Fraction operator++(int)
    {
        Fraction temp(*this);
        ++(*this);
        return temp;
    }

    // ���������� ���������
    Fraction& operator--()
    {
        numerator_ -= denominator_;
        reduce();
        return *this;
    }

    // ����������� ���������
    Fraction operator--(int)
    {
        Fraction temp(*this);
        --(*this);
        return temp;
    }

    friend std::ostream& operator<<(std::ostream& out, const Fraction& f)
    {
        out << f.numerator_ << '/' << f.denominator_;
        return out;
    }

    friend std::istream& operator>>(std::istream& in, Fraction& f)
    {
        char slash;
        in >> f.numerator_ >> slash >> f.denominator_;
        if (f.denominator_ == 0)
        {
            throw std::invalid_argument("Denominator cannot be zero.");
        }
        f.reduce();
        return in;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    try
    {
        Fraction f1, f2;
        std::cout << "������� ��������� � ����������� ����� 1 (��������, 3/4): ";
        std::cin >> f1;
        std::cout << "������� ��������� � ����������� ����� 2 (��������, 4/5): ";
        std::cin >> f2;

        std::cout << f1 << " + " << f2 << " = " << (f1 + f2) << '\n';
        std::cout << f1 << " - " << f2 << " = " << (f1 - f2) << '\n';
        std::cout << f1 << " * " << f2 << " = " << (f1 * f2) << '\n';
        std::cout << f1 << " / " << f2 << " = " << (f1 / f2) << '\n';

        std::cout << "++" << f1 << " * " << f2 << " = " << (++f1 * f2) << '\n';
        std::cout << "�������� ����� 1 = " << f1 << '\n';
        std::cout << f1 << "-- * " << f2 << " = " << (f1-- * f2) << '\n';
        std::cout << "�������� ����� 1 = " << f1 << '\n';

        // ���������� � ����������� ��������� � ���������
        Fraction f3(3, 4);
        std::cout << "f3 = " << f3 << '\n';
        std::cout << "++f3 = " << ++f3 << '\n';
        std::cout << "f3++ = " << f3++ << '\n';
        std::cout << "f3 ����� f3++ = " << f3 << '\n';
        std::cout << "--f3 = " << --f3 << '\n';
        std::cout << "f3-- = " << f3-- << '\n';
        std::cout << "f3 ����� f3-- = " << f3 << '\n';
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}