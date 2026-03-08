// COMSC-210 | Lab 18 | Seoyeon An
#include <iostream>
#include <string>
using namespace std;

struct Node {
    float rating;
    string comment;
    Node* next;
};

int main() {
    Node* head = nullptr;
    int choice;

    cout << "Which linked list method should we use?" << endl;
    cout << "New nodes are added at head of the linked list" << endl;
    cout << "New nodes are added at tail of linked list" << endl;
    cout << "Choice: ";
    cin >> choice;

    cout << "You selected option " << choice << endl;

    return 0;
}