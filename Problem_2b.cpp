#include <iostream>

using namespace std;



struct Node {
	int data;
	struct Node *next;
};

struct Node* head = NULL;

void insert(int new_data) {
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
}

int find(int element) {
	struct Node* prev = NULL;
	struct Node* ptr = head;
	
	while ( ptr != NULL) {
		
		if (ptr->data == element) {

			prev->next = ptr->next;
			ptr->next = head;
			head = ptr;
			
		}
		prev = ptr;
		ptr = ptr->next;
	}
	return 0;
		//ptr->data;
}



void display() {
	struct Node* ptr;
	ptr = head;
	while (ptr != NULL) {
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}



int main() {
	//struct Node* head = NULL;
	for (int i = 0; i < 10; i++) {
		insert(i);
	}
	
	

	find(8);
	display();
	//cout << at(0);
	int x;
	cin >> x;
	return 0;
}
