/**
* @file IceCreamCone.cpp
*
* @brief C++ Program to demostrate IceCreamCone class.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
#include <string>
using namespace std;

// IceCreamCone class definition
class IceCreamCone {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	IceCreamCone(const string& = "Vanilla", int = 1, const string& = "Sugar");

// OPERATIONS
	/** function that displays the IceCream.
	*
	* @param void
	*
	* @return void
	*/
	void DisplayIceCream()const;

// ACCESS
	// setters
	void SetFlavor(const string& = "Vanilla");
	void SetNoOfScoops(int = 1);
	void SetConeType(const string& = "Sugar");
	void SetIceCreamCone(const string& = "Vanilla", int = 1, const string& = "Sugar");
	/**
	# @overload void setIceCreamCone(const IceCreamCone& aIceCreamCone);
	*/
	void SetIceCreamCone(const IceCreamCone& aIceCreamCone);

	// getters
	const string& GetFlavor() const;
	int GetNoOfScoops() const;
	const string& GetConeType() const;
	float GetPrice() const;
	const IceCreamCone& GetIceCreamCone()const;

private:

// DATA MEMBERS
	string mFlavor;
	int mNoOfScoops;
	string mConeType;
	float mPrice;
};
// end class IceCreamCone

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// IceCreamCone Default+Overloaded Constructor
IceCreamCone::IceCreamCone(const string& aFlavor, int aNoOfScoops, const string& aConeType) : mFlavor(aFlavor), mNoOfScoops(aNoOfScoops), mConeType(aConeType), mPrice(0.75 * aNoOfScoops + 0.40) {
	this->SetIceCreamCone(aFlavor, aNoOfScoops, aConeType);
}
// end IceCreamCone constructor 

//============================= OPERATIONS ===================================
// function that displays the IceCreamCone.
void IceCreamCone::DisplayIceCream() const {
	cout << "Flavor: " << this->GetFlavor() << endl;
	cout << "Number of scoops: " << this->GetNoOfScoops() << endl;
	cout << "Type of Cone: " << this->GetConeType() << endl;
	cout << "Price: " << this->GetPrice() << endl;
}
// end function DisplayIceCream

//============================= ACESS      ===================================

// function that sets flavour of IceCream
void IceCreamCone::SetFlavor(const string& aFlavor) {
	this->mFlavor = aFlavor;
}
// end function SetFlavor

// function that sets number of scoops
void IceCreamCone::SetNoOfScoops(int aNoOfScoops) {
	if (aNoOfScoops < 0)
		cout << "Error: Incorrect number of scoops." << endl;
	else
		this->mNoOfScoops = aNoOfScoops;
}
// end function SetNoOfScoops

// function that sets type of cone
void IceCreamCone::SetConeType(const string& aConeType) {
	this->mConeType = aConeType;
}
// end function SetConeType


// function that sets IceCreamCone
void IceCreamCone::SetIceCreamCone(const string& aFlavor, int aNoOfScoops, const string& aConeType) {
	this->SetFlavor(aFlavor);
	this->SetNoOfScoops(aNoOfScoops);
	this->SetConeType(aConeType);
	this->mPrice = (0.75 * this->mNoOfScoops) + 0.40;
}
// end function SetIceCreamCone

// function that sets the IceCreamCone
void IceCreamCone::SetIceCreamCone(const IceCreamCone &obj) {
	this->SetIceCreamCone(obj.GetFlavor(), obj.GetNoOfScoops(), obj.GetConeType());
}
// end function SetIceCreamCone

// function that gets the flavor of IceCream
const string& IceCreamCone::GetFlavor() const {
	return (this->mFlavor);
}
// end function GetFlavor

// function that gets the number of scoops
int IceCreamCone::GetNoOfScoops() const {
	return this->mNoOfScoops;
}
// end function GetNoOfScoops

// function that gets the type of Cone
const string& IceCreamCone::GetConeType() const {
	return this->mConeType;
}
// end function GetConeType

// function that gets the price
float IceCreamCone::GetPrice() const {
	return this->mPrice;
}
// end function GetPrice

// function that gets the IceCreamCone
const IceCreamCone& IceCreamCone::GetIceCreamCone()const {
	return *this;
}
// end function GetIceCreamCone

/////////////////////////////// MAIN   ///////////////////////////////////////

// function main begins program execution
void main() {
	IceCreamCone ice1, ice2("Mango", 3, "Chocolate");

	ice1.DisplayIceCream();
	ice2.DisplayIceCream();
	
	system("pause");
}
// end main 
