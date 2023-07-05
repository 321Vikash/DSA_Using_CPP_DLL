/* Programmer :Vikash Kumar Thakur
   Topic      :1.Create Node
               2.Display Data
   IDE        :VS Code
   Date       :05/07/2023
*/
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *temp, *newnode;
void create();
void display();
void create()
{
    int choice;
    head = NULL;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Enter the data :\n";
        cin >> newnode->data;
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        cout << "Do you want to continue (0,1)...\n";
        cin >> choice;
    }
}
void display()
{
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
}
int main()
{
    cout << "**********Create Node**********\n";
    create();
    cout << "\nDisplay Data\n";
    display();
    return 0;
}