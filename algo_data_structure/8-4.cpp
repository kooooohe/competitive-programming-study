#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node {
	Node* next;
	string name;

	Node(string name_ ="") : next(NULL), name(name_) {}
};

Node* nil;

void init() {
	nil = new Node();
	nil->next = nil;
}

void PrintList() {
	Node* cur = nil->next;
	for (; cur != nil; cur = cur->next) {
		cout << cur->name << " -> ";
	}
	cout << endl;
}

void insert(Node* v, Node* p = nil) {
	v->next = p->next;
	p->next = v;
}

int main() {
	init();

	vector<string> names = { "Alice", "Bob", "Charlie", "David", "Eve" };
	for (int i = 0; i < names.size(); i++) {
		Node* node = new Node(names[i]);
		insert(node, nil);
		cout << "step " << i << ": ";
		PrintList();
	}

}
