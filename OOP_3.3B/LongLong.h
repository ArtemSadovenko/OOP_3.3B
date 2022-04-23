#pragma once
#include "Pair.h"

class LongLong:public Pair
{
public:
	void L_set_high(long a) { set_high(a); }
	void L_set_low(long  a) { set_low(a); }

	long L_get_high() { return get_high(); }
	long L_get_low() { return get_low(); }

	friend bool operator == (LongLong& first, LongLong& second);
	friend bool operator != (LongLong& first, LongLong& second);
	friend bool operator > (LongLong& first, LongLong& second);
	friend bool operator < (LongLong& first, LongLong& second);

	LongLong();
	LongLong(long a, long b);
	LongLong(LongLong& a);
	~LongLong();

	friend ostream& operator << (ostream& out, LongLong& a);
	friend istream& operator >> (istream& in, LongLong& a);

	operator string() ;

	LongLong& operator ++();
	LongLong& operator --();
	LongLong operator ++(int);
	LongLong operator --(int);
};

