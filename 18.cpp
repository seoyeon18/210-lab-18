// COMSC-210 | Lab 18 | Seoyeon An
#include <iostream>
#include <string>
using namespace std;

struct Node {
    float rating;
    string comment;
    Node* next;
};

void addHead(Node*& head, float rating, string comment) {
    Node* newNode = new Node;
    newNode->rating = rating;
    newNode->comment = comment;
    newNode->next = head;
    head = newNode;
}

void addTail(Node*& head, float rating, string comment) {
    Node* newNode = new Node;
    newNode->rating = rating;
    newNode->comment = comment;
    newNode->next = nullptr;
}


void output(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->rating << ": " << curr->comment << endl;
        curr = curr->next;
    }
}


int main() {
    Node* head = nullptr;
    int choice;

    cout << "Which linked list method should we use?" << endl;
    cout << "New nodes are added at head of the linked list" << endl;
    cout << "New nodes are added at tail of linked list" << endl;
    cout << "Choice: ";
    cin >> choice;

    do{
        cout << "Enter review rating->";
        cin >> rating;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter review comments: ";
        getline(cin, comment);
        if(choice == 1){

        }
        else {

        }
    }

    addHead(head, 4.8, "Oscar contender");
    addHead(head, 4.1, "Brilliant lead acting");

    cout << "You selected option " << choice << endl;

    return 0;
}