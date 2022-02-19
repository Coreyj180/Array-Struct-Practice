#include <iostream>
#include <array>
#include <string>

using namespace std;

struct Addresses {
	int streetNumber{};
	string street{};
	string city{};
	string state{};
	int zipcode{};
};

int main()
{
	array<Addresses, 3> block{};

	cout << "Please enter your home address starting with Street Number, Street, City, State, and Zipcode: " << endl;
	cin >> block.at(0).streetNumber >> block.at(0).street >> block.at(0).city >> block.at(0).state >> block.at(0).zipcode;

	cout << "Please enter the address of your favorite restaurant starting with Street Number, Street, City, State, and Zipcode: " << endl;
	cin >> block.at(1).streetNumber >> block.at(1).street >> block.at(1).city >> block.at(1).state >> block.at(1).zipcode;

	cout << "Please enter the address for your job starting with Street Number, Street, City, State, and Zipcode: " << endl;
	cin >> block.at(2).streetNumber >> block.at(2).street >> block.at(2).city >> block.at(2).state >> block.at(2).zipcode;
	
	cout << "So your home address is " << block.at(0).streetNumber << " " << block.at(0).street << " " << block.at(0).city << " " << block.at(0).state << " " << block.at(0).zipcode << " ?" << endl;
	
	cout << "And your favorite restaurant is at " << block.at(1).streetNumber << " " << block.at(1).street << " " << block.at(1).city << " " << block.at(1).state << " " << block.at(1).zipcode << " ?" << endl;

	cout << "WHAT!?!?!? and your job is at " << block.at(2).streetNumber << " " << block.at(2).street << " " << block.at(2).city << " " << block.at(2).state << " " << block.at(2).zipcode << " ?" << endl;

	cout << "Now I know everything about you! MUWHAAAHAAAHAA!!!!!!!!" << endl;

		return 0;


}
