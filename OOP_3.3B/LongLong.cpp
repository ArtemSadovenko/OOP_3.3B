#include "LongLong.h"

bool operator==(LongLong& first, LongLong& second)
{
    return first.get_high() == second.get_high() && first.get_low() == second.get_low();
}

bool operator!=(LongLong& first, LongLong& second)
{
    return !(first == second);
}

bool operator>(LongLong& first, LongLong& second)
{
    return first.get_high() > second.get_high() || (first.get_high() == second.get_high() && first.get_low() > second.get_low());
}

bool operator<(LongLong& first, LongLong& second)
{
    return !(first > second);
}

ostream& operator<<(ostream& out, LongLong& a)
{
    out << "high: " << a.get_high() << endl;
    out << "low: " << a.get_low() << endl;
    return out;

    // TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, LongLong& a)
{
    long h;
    long l;
    cout << "high: "; in >> h;  a.set_high(h);
    cout << "low: "; in >> l;  a.set_low(l);
    cout << endl;
    return in;
    // TODO: вставьте здесь оператор return
}

LongLong::LongLong()
{
    set_high(0);
    set_low(0);
}

LongLong::LongLong(long a, long b)
{
    set_high(a);
    set_low(b);
}

LongLong::LongLong(LongLong& a)
{
    set_high(a.get_high());
    set_low(a.get_low());
}

LongLong::~LongLong()
{
}

LongLong::operator string()
{
    stringstream sout;
    sout << "high = " << get_high() << endl <<
        "low = " << get_low() << endl;
    return sout.str();
}

LongLong& LongLong::operator++()
{
    set_high(get_high() + 1);
    return *this;
    // TODO: вставьте здесь оператор return
}

LongLong& LongLong::operator--()
{
    set_high(get_high() - 1);
    return *this;
    // TODO: вставьте здесь оператор return
}

LongLong LongLong::operator++(int)
{
    LongLong t(*this);
    set_low(get_low() + 1);
    return t;
}

LongLong LongLong::operator--(int)
{
    LongLong t(*this);
    set_low(get_low() - 1);
    return t;
}
