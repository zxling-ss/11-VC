#pragma once
int pchar(int n);
float nchar(float m);
class FAC {
	int a=1;
public:
	int factorial(int n);
	float convert(float deg);
	FAC() { a = 100; }
	
	int GetA() {
		return a + 1;
	}
};