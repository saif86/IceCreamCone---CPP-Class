#include<iostream>

using std::cout;
using std::endl;
using std::cin;

class IceCreamCone {
	char *Flavor;
	int NumberOfScoops;
	char *ConeType;
	int Price;
public:
	IceCreamCone(char*, int, char*);
	void displayIceCream();

};

IceCreamCone::IceCreamCone(char *aFlavor = "Vanilla", int aNumberOfScoop = 1, char *aConeType = "Sugar") {
	Flavor = aFlavor;
	NumberOfScoops = aNumberOfScoop;
	ConeType = aConeType;
	Price = (75 * NumberOfScoops) + 40;
}

void IceCreamCone::displayIceCream() {
	cout << "Flavor: " << Flavor << endl;
	cout << "Number of scoops: " << NumberOfScoops << endl;
	cout << "Type of Cone: " << ConeType << endl;
	cout << "Price: " << Price << " cents." << endl;
}

void main()
{
	IceCreamCone ice1, ice2("Mango", 3, "Chocolate");

	ice1.displayIceCream();
	ice2.displayIceCream();

	system("pause");
}