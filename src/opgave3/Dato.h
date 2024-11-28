#pragma once

class Dato
{
public:
	Dato(int, int, int);
	void setDato(int, int, int);
	int getDag() const;
	int getMaaned() const;
	int getAar() const;
private:
	int dag_;
	int maaned_;
	int aar_;
};

