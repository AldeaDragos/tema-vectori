#include "tema-vectori.h"

void sol1() {

	int date[200] = { 2,5,7,6,9,10,5 };
	if (pareOrdonat(date, 7)) {
		cout << " DA " << endl;
	}
	else {
		cout << " NU" << endl;
	}
}

void sol2() {

	int date[200] = { 2820,82,65,1026,84 };
	if (verifNrParCifre(date, 5)) {
		cout << " DA " << endl;
	}
	else {
		cout << " NU " << endl;
	}
}

void sol3() {

	int date[100] = { 84,60,102,24,6 };

	if (suntMultiplii(date, 5)) {
		cout << " DA " << endl;
	}
	else {
		cout << " NU " << endl;
	}
}

void sol4() {

	int date[6] = { 50,19,15,21,35,40 };

	if (verifParitate1(date, 5)) {
		cout << " Toate perechile au aceeasi paritate " << endl;
	}
	else {
		cout << " Exista cel putin o pereche cu paritati diferite " << endl;
	}
}


void sol5() {

	int date[5] = { 0,1,0,0,1 };

	if (alternativ(date, 5)) {
		cout << " Vectoru este alternativ " << endl;
	}
	else {
		cout << " Vectorul nu este alternativ " << endl;
	}
}

void sol6() {

	int date1[5] = { 6,8,7,7,4 };
	int date2[5] = { 8,4,6,7,7 };

	if (identice(date1, 5, date2, 5)) {
		cout << " Vectori sunt identici " << endl;
	}
	else {
		cout << " Vectorii nu sunt identici " << endl;
	}
}

void sol7() {

	int date[7] = { 15,4,8,13,10,10,3 };

	if (interval3(date, 7)) {
		cout << " DA " << endl;
	}
	else {
		cout << " NU " << endl;
	}
}

void sol8() {

	int date[5] = { 804,60,102,408,6 };

	if (egaleOglindit(date, 5)) {
		cout << "DA " << endl;
	}
	else {
		cout << " NU " << endl;
	}
}

void sol9() {

	int date[5] = { 1,2,3,2,1 };

	if (palXXL(date, 5)) {
		cout << "DA " << endl;
	}
	else {
		cout << " NU " << endl;
	}
}

void sol10() {

	int date[5] = {84,60,102,24,6 };

	if (cifreDistincte(date, 5)) {
		cout << "DA " << endl;
	}
	else {
		cout << " NU " << endl;
	}
}

void sol11() {

	int date[6] = { 51,10,1,21,35,40 };

	if (verifParitate2(date, 6)) {

		cout << " DA " << endl;	
	}
	else {
		cout << " NU " << endl;
	}
}

void sol12() {

	int date[5] = { 1,2,3,4,5 };

	if (sir_munte(date, 5)) {
		cout << " DA " << endl;
	}
	else {
		cout << " NU " << endl;
	}
}

void sol13() {

	int date[5] = { 803,60,102,408,6 };

	if (vecini(date, 5)) {
		cout << " DA " << endl;
	}
	else {
		cout << " NU " << endl;
	}

}

void test1() {

	int date1[7] = { 9,6,5,14,2,1,10 };
	int element = 2;
	if (findElementVec(date1, 7, 2)) {
		cout << " exista " << endl;
	}
	else {
		cout << " NU exista" << endl;
	}

}

void sol15() {

	int date1[7] = { 9,6,5,14,2,1,10 };
	int date2[8] = { 8,14,9,14,16,15,4,2 };
	
	cautarea(date2, 8, date1, 7);
}
