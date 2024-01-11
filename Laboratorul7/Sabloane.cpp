#include "Sabloane.h"
template <typename T>

T Sabloane<T>::maxim(T* vector, int n) {
	T maxEle = vector[0];
	for (int i = 1; i < n; i++) {
		if (vector[i] > maxEle) {
			maxEle = vector[i];
		}
	}
	return maxEle;
}
template <typename T>
T Sabloane<T>::minim(T* vector, int n) {
	T minEle = vector[0];
	for (int i = 1; i < n; i++) {
		if (vector[i] < minEle) {
			minEle = vector[i];
		}
	}
	return minEle;
}

template <typename T>
int Sabloane<T>::cautareSecventiala(T* vector, int n, T element) {
	for (int i = 0; i < n; i++) {
		if (vector[i] == element) {
			return i;
		}
	}
	return -1;
}

template <typename T>
int Sabloane<T>::cautareBinarã(T* vector, int n, T element) {
	int stanga = 0, dreapta = n - 1;

	while (stanga <= dreapta) {
		int mijloc = stanga + (dreapta - stanga) / 2;

		if (vector[mijloc] == element) {
			return mijloc;
		}

		if (vector[mijloc] < element) {
			stanga = mijloc + 1;
		}
		else {
			dreapta = mijloc - 1;
		}
	}

	return -1;
}


template class Sabloane<int>;
template class Sabloane<double>;