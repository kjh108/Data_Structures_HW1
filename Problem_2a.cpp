#include <iostream>


using namespace std;



int* find(int target, int L[], int size) {
	int location = -5;
	for (int i = 0; i < size; i++) {
		if (L[i] == target) {
			location = i;
			break;
		}
	}
	if (location > 0) {
		for (int i = location; i > 0; i--) {
			L[i] = L[i - 1];
			//L[0] = target;
 		}
		L[0] = target;
	}

	return L;
}

int* insert(int element, int L[], int size) {

	for (int i = size; i > 0; i--) {
		L[i] = L[i - 1];
	}
	L[0] = element;
	size++;

	return L;
}



int main() {
	int size = 6;
	int L[6] = { 1,2,3,4,5,6 };

	int *i;
	
	
	i = insert(10, L, size);
	i = find(4, L, size);
	i = insert(11, L, size);

	for (int j = 0; j < 6; j++) {
		cout << i[j] << endl;
	}
	
	
	int x = 0;
	cin >> x;
}
