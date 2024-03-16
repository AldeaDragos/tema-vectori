#pragma once
#include <iostream>
#include <string.h>
using namespace std;

bool pareOrdonat(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0) {
			int j = i + 2;
			if (j < dim && v[j] < v[i]) {
				return false;
			}

		}
	}
	return true;
}

int cifrePare(int n) {
	int ct = 0;
	while (n != 0) {
		int cifra = n % 10;
		if (cifra % 2 == 0) {
			ct++;
		}
		n = n / 10;
	}
	return ct;
}

bool verifNrParCifre(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (cifrePare(v[i]) % 2 != 0) {
			return false;
		}
	}
	return true;
}

bool suntMultiplii(int v[], int dim) {

	int ultimulElement = v[dim - 1];

	for (int i = 0; i < dim - 1; i++) {

		if (v[i] % ultimulElement != 0) {
			return false;
		}

	}
	return true;
}


bool verifParitate1(int v[], int dim) {

	for (int i = 0; i < dim - 1; i += 2) {

		if ((v[i] % 2 == 0 && v[i + 1] % 2 != 0) && (v[i] % 2 != 0 && v[i + 1] % 2 == 0)){
			return false;
		}

	}
	return true;
}

bool alternativ(int v[], int dim) {

	for (int i = 0; i < dim - 1; i++) {
		if (v[i] != 0 && v[i + 1] != 0){
			continue;
		}
		else {
			return true;
		}
	}
	return false;
}

bool identice(int v1[], int dim1, int v2[], int dim2) {

	for (int i = 0; i < dim1; i++) {
		if (v1[i] != v2[i]){
			return false;
		}
	}
	return true;
}

bool interval3(int v[], int dim) {

	int primulElement = v[0];
	int ultimulElement = v[dim - 1];

	for (int i = 0; i < dim; i++) {

		if (v[i] < primulElement && v[i] > ultimulElement) {
			return false;
		}
		
	}
	return true;
}


int oglindit(int n) {

	int oglindit_numar = 0;
	while (n != 0) {
		oglindit_numar = oglindit_numar * 10 + n % 10;
		n = n / 10;
	}
	return oglindit_numar;;
}

bool egaleOglindit(int v[],int dim){

	int oglindit_prim = oglindit(v[0]);

	for (int i = 1; i < dim; i++) {

		if (v[i] == oglindit_prim) {
			return true;
		}
	}
	return false;
}

int rasturnatNumar(int n) {

	int rasturnat = 0;

	while (n != 0) {
		int cifra = n % 10;
		rasturnat = rasturnat * 10 + cifra;
		n = n / 10;
	}
	return rasturnat;
}


bool palindrom(int  n) {

	int inv = rasturnatNumar(n);

	if (n == inv) {
		return true;
	}
	return false;
}

bool palXXL(int v[], int dim) {

	int numar = 0;
	for (int i = 0; i < dim; i++) {
		numar = numar * 10 + v[i];
	}
	return palindrom(numar);
}

bool VerifParitate2(int v[], int dim) {

	return 0;
}

int distinct(int n) {

	int cifra2 = n / 10 % 10;
	while (n != 0) {
		int cifra = n % 10;
		if (cifra != cifra2) {
			return true;
		}
		n = n / 10;
	}
	return false;
}

bool cifreDistincte(int v[], int dim) {

	for (int i = 0; i < dim; i++) {

		if (!distinct(v[i])) {
			return false;
		}

	}
	return true;
}

