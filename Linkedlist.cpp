#include <iostream>

struct Node
{
  int data;
  Node *next;
};

void printList(Node *n)
{
  while (n != nullptr)
  {
    std::cout << n->data << " ";
    n = n->next;
  }
}

int main()
{
  Node *head = new Node();
  Node *second = new Node();
  Node *third = new Node();

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = nullptr;

  std::cout << "Linked List elements: ";
  printList(head);

  return 0;
}