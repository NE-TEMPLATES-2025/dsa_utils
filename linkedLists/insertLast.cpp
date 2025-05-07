// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// void print(Node *head)
// {
//     // Node *temp = head;
//     while (head != NULL)
//     {
//         cout <<  "->" << head->data << endl;
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }
// Node *userData()
// {
//     int data;
//     cin >> data;
//     Node *head = NULL; /// LL is empty
//     Node *tail = NULL; /// LL is empty
//     while (data != -1)
//     {
//         /// creating LL
//         Node *n = new Node(data);
//         /// 1st node
//         if (head == NULL)
//         {
//             head = n;
//             tail = n;
//         }
//         else
//         {
//             tail->next = n; /// Inserting at Tail
//             tail = n;
//         }
//         cin >> data;
//     }
//     return head;
// }
// int main()
// {
//     Node *head = userData();
//     print(head);
//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    };
};

class Inventory{
    public:
    int id;
    string name;
    int quantity;
    string regDate;  // Changed from undefined Date type to string
    Inventory *next;
    Inventory(int id, string name, int quantity, string regDate){
        this->id = id;
        this->name = name;
        this->quantity = quantity;
        this->regDate = regDate;
        this->next = NULL;
    }
    void display(){
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Registration Date: " << regDate << endl;
}
};

class InventoryList{
    public:
    Inventory *head;
    Inventory *tail;
    InventoryList(){
        head = NULL;
        tail = NULL;
    }
    void addInventory(int id, string name, int quantity, string regDate){
        Inventory *n = new Inventory(id, name, quantity, regDate);
        if(head == NULL){
            head = n;
            tail = n;
        }
        else{   
            tail->next = n;
            tail = n;
        }
    }
    void displayInventory(){
        Inventory *current = head;
        while(current != NULL){
            current->display();
            current = current->next;
        }
    }
};

void display(Node *ptr){
    while(ptr != NULL){
        cout << ptr->data << " -> ";
        ptr=ptr->next;
    };
    cout << " NULL" << endl;
}

int main(){
    InventoryList inventoryList;
    while(true){
        cout << "1. Add Inventory" << endl;
        cout << "2. Display Inventory" << endl;
        cout << "3. Exit" << endl;
        int choice;
        cin >> choice;
        switch(choice){
            case 1: {
                int id;
                string name;
                int quantity;
                string regDate;
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter Name: ";
                cin.ignore(); // To clear the newline left by previous cin
                getline(cin, name);
                cout << "Enter Quantity: ";
                cin >> quantity;
                cout << "Enter Registration Date: ";
                cin >> regDate;
                inventoryList.addInventory(id, name, quantity, regDate);
                break;
            }
            case 2:
                inventoryList.displayInventory();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}