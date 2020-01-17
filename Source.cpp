#include <iostream>
#include <list>

using namespace std;

void printLots(list<int> L, list<int> P) {
	//Function takes two lists as arguments
	
	for (list<int>::iterator i = P.begin(); i != P.end(); advance(i, 1)) {
		//iterates through every element in P
		if (*i < L.size()){
			list<int>::iterator j = L.begin();
			advance(j, *i); //advances iterator j the integer at i
			cout << *j << '\n'; //prints the integer at j
		}
		else {
			cout << "Error, Index out of scope\n";
		}
		
		
	}
}


int main() {
	list<int> L = { 0, 1, 2, 3, 4, 5, 7 };
	list<int> P = { 0, 1, 2, 4, 12 };

	printLots(L, P);

	int x;
	std::cin >> x;
}
