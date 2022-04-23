#include "Pair.h"

Pair::Pair():
	high(0), low(0)
{
}

Pair::Pair(long a, long b):
	high(a), low(b)
{
}

Pair::Pair(Pair& a):
	high(a.high), low(a.low)
{
}

Pair::~Pair()
{
}
