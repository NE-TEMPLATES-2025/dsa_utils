// #include<iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node *next;
// };
// void display (Node *node){
//     while(node != NULL){
//         cout << node->data << endl;
//         cout << "Node Address: " << node->next <<endl;
//         node =  node->next ;
//     }
// }
// int main () {
//     Node *first = new Node();
//     Node *second = new Node();
//     Node *third = new Node();
//     first->data = 10;
//     first->next = second;
//     second->data = 12;
//     second->next = third;
//     third->data = 20;
//     // third->next = NULL;
//     display(first);
// }


#include<iostream>
using namespace std;

// struct Node{
//     int data;
//     Node *next;
// };

// void display(Node *ptr){
//     while(ptr != NULL){
//         cout << ptr->data << " -> ";
//         ptr = ptr->next;
//     }
//     cout << "NULL" << endl;
// }
// int main(){
//     Node *first = new Node();
//     Node *second = new Node();

//     first->data = 10;
//     first->next = second;
//     second->data = 12;
//     second->next = NULL;
//     display(first);
// }

class ClassNode{
    public:
        int data;
        ClassNode *next;
        ClassNode(int data){
            this->data = data;
            next = NULL;
        };
};

void display(ClassNode *ptr){
    while(ptr != NULL){
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}

int main(){
    ClassNode *first = new ClassNode(10);
    ClassNode *second = new ClassNode(12);
    first->next = second;
    display(first);
}