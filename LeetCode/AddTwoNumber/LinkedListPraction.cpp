#include <iostream>

struct Node{
    int age;
    std::string name;
    std::string userID;

    Node* next;

    Node(std::string n, std::string uID, int a) : name(n), userID(uID), age(a), next(nullptr) {}
};

void insertion(Node*& head, int age, std::string name, std::string userID) {
    Node* firstNode = new Node(name, userID, age);
    if(head == nullptr) {
        head = firstNode;
        return;
    }
    Node* tempVariable = head;
    while(tempVariable->next != nullptr){
        tempVariable = tempVariable->next;
    }
    tempVariable->next = firstNode;
}

void display(Node* head) {
    Node* tempVariable = head;
    while(tempVariable != nullptr) {
        std::cout << "[" << tempVariable->name << " : " << tempVariable->userID << " : " << tempVariable->age << "]" << '\n';
        tempVariable = tempVariable->next;
    }
    std::cout << "There's no list again after that list\n";
}
void deletion (Node*& head) {
    if(head != nullptr) {
        Node* nextNode = head->next;
        delete head;
        head = nextNode;
    }
}

int main() {
    Node* library = nullptr;
    insertion(library, 24, "45XL9N3", "Hayan");
    insertion(library, 21, "53KJ1L0", "Madia");
    insertion(library, 20, "20PE2L4", "Lor");

    display(library);
    deletion(library);
    return 0;
}