//Compute the product of elements in array

#include<iostream>
using namespace std;
int main() {

	int nums[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int product = 1;
	for (int i = 0; i < 10; i++) {

		product = product * nums[i];
	}
	cout << "The Product of Array Elements is:  " << product << endl;





	return 0;
}
