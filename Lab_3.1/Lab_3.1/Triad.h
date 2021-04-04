//////////////
// Triad.h
//////////////

#pragma once
#include <string>
#include <sstream> 

using namespace std;

class Triad
{
	int first;
	int second;
	int third;
public:
	int getFirst() const { return first; }
	int getSecond() const { return second; }
	int getThird() const { return third; }

	bool setFirst(int);
	bool setSecond(int);
	bool setThird(int);

	void Init(int firstValue, int secondValue, int thirdValue);
	void Display() const;
	void Read();
	const string toString();

	Triad();
	Triad(const int first, const int second, const int third);
	Triad(const Triad& m);

	Triad& operator = (const Triad& m);

	friend ostream& operator << (ostream& out, const Triad& m);
	friend istream& operator >> (istream& in, Triad& m);

	operator string () const;

	Triad& operator ++ ();
	Triad& operator -- ();
	Triad operator ++ (int);
	Triad operator -- (int);

	~Triad(void);

	friend bool G(const Triad& t1, const Triad& t2);

	bool h1(Triad t) const;
	bool h2(Triad t) const;
	bool m1(Triad t) const;
	bool m2(Triad t) const;
	bool s1(Triad t) const;
	bool s2(Triad t) const;

	double check();
};

