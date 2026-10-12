#include <iostream>

struct List{
  std::string name;
  List* next;
  
  List(std::string w) : name(w), next(nullptr){}
};

void insert(List*& head, std::string name) {
    List* node = new List(name);
    if(head == nullptr) {
        head = node;
        return;
    }
    List* temporary = head;
    while(temporary->next != nullptr) {
        temporary = temporary->next;
    }
    temporary->next = node;
}

void display(List* head) {
    List* temporary = head;
    while(temporary != nullptr) {
        std::cout << "[" << temporary->name << "]" << "->";
        temporary = temporary->next;
    }
    std::cout << "This is the end";
}

int main() {
    List* Display = nullptr;

    insert(Display, "IF001");
    insert(Display, "SI001");
    insert(Display, "TI001");

    display(Display);
    return 0;
}