#pragma once
template<typename T>
class Sabloane
{
public:
	T maxim(T* vector, int n);
	T minim(T* vector, int n);
	int cautareSecventiala(T* vector, int n, T element);
	int cautareBinarã(T* vector, int n, T element);
};

