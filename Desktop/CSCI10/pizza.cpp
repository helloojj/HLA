#include <bitset>
#include <iostream>
using namespace std;

const short int THICK = 128;
const short int CHEESE = 64;
const short int RED = 32;
const short int TOMATOES = 16;
const short int MEAT = 8;
const short int PEPPERS = 4;
const short int PINEAPPLE = 2;
const short int MUSHROOM = 1;
// red, tomatoes, meat, peppers, pineapple, mushroom

void display(short int pizza) {
	if (pizza & THICK) {
		cout << "thick crust" << endl;
	} else {
		cout << "thin crust" << endl;
	}
	
	if (pizza & CHEESE) {
		cout << "cheese" << endl;
	} else {
		cout << "no cheese" << endl;
	}

	if (pizza & RED) {
		cout << "Red" << endl;
	} else {
		cout << "not red" << endl;
	}

	if (pizza & TOMATOES) {
		cout << "tomatoes" << endl;
	} else {
		cout << "no tomatoes" << endl;
	}

	if (pizza & MEAT) {
		cout << "meat" << endl;
	} else {
		cout << "no meat" << endl;
	}

	if (pizza & PEPPERS) {
		cout << "PEPPERS" << endl;
	} else {
		cout << "no PEPPERS" << endl;
	}

	if (pizza & PINEAPPLE) {
		cout << "pineapple" << endl;
	} else {
		cout << "no pineapple" << endl;
	}

	if (pizza & MUSHROOM) {
		cout << "mushroom" << endl;
	} else {
		cout << "no mushroom" << endl;
	}

	
	// red, tomatoes, meat, peppers, pineapple, mushroom
}

int main () {

	short int pizza = 0;
	
	pizza = pizza | THICK;
	pizza = pizza | CHEESE;
	pizza = pizza | RED;
	pizza = pizza | TOMATOES;
	pizza = pizza | MEAT;
	pizza = pizza | PEPPERS;
	pizza = pizza | PINEAPPLE;
	pizza = pizza | MUSHROOM;
	
	// red, tomatoes, meat, peppers, pineapple, mushroom
	
	display(pizza);
	cout << "*********" << endl;
	int yourpizza = !pizza;
	display(yourpizza);
	
	/*int temppizza;
	temppizza = yourpizza;
	yourpizza = pizza;
	pizza = temppizza;*/

	cout << "*****" << endl;
	pizza = pizza ^ yourpizza;
	yourpizza = yourpizza ^ pizza;
	pizza = pizza ^ yourpizza;
	
	display(yourpizza);
	cout << "******" << endl;
	display(pizza);

	return 0;
}
