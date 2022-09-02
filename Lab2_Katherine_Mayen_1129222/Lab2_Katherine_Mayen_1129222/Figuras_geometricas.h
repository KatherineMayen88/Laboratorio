#pragma once
#include <math.h>

struct medidas {
	double base, lado, altura, apotema;
};


//STRUCT TRIANGULO
struct triangulo:medidas {
	public: double CalculoArea() {
		double area = (base * altura) / 2;
		return area;
	}

	public: double CalculoPerimetro() {
		double perimetro = lado*3;
		return perimetro;
	}
};


//STRUCT CUADRILATERO
struct cuadrilatero:medidas {
	public: double CalculoArea() {
		double area = pow(lado, 2);
		return area;
	}

	public: double CalculoPerimetro() {
		double perimetro = lado * 4;
		return perimetro;
	}
};


//STRUCT PENTAGONO
struct pentagono:medidas {
	public: double CalculoArea() {
		double area = lado*apotema*(5/2);
		return area;
	}

	public: double CalculoPerimetro() {
		double perimetro = lado * 5;
		return perimetro;
	}
};


//STRUCT HEXAGONO
struct hexagono:medidas {
	public: double CalculoArea() {
		double area = lado * apotema * 3;
		return area;
	}

	public: double CalculoPerimetro() {
		double perimetro = lado * 6;
		return perimetro;
	}
};



//STRUCT HEPTAGONO
struct heptagono:medidas {
	public: double CalculoArea() {
		double area = lado * apotema * (7 / 2);
		return area;
	}

	public: double CalculoPerimetro() {
		double perimetro = lado * 7;
		return perimetro;
	}
};


//STRUCT OCTAGONO
struct octagono:medidas {
	public: double CalculoArea() {
		double area = ((lado*8) * apotema) /2;
		return area;
	}

	public: double CalculoPerimetro() {
		double perimetro = lado * 8;
		return perimetro;
	}
};


//STRUCT ENEAGONO
struct eneagono:medidas {
	public: double CalculoArea() {
		double area = (9* lado * apotema) / 2;
		return area;
	}

	public: double CalculoPerimetro() {
		double perimetro = lado * 9;
		return perimetro;
	}
};


//STRUCT DECAGONO
struct decagono:medidas {
	public: double CalculoArea() {
		double area = ((lado*10)*apotema) / 2;
		return area;
	}

	public: double CalculoPerimetro() {
		double perimetro = lado * 10;
		return perimetro;
	}
};


