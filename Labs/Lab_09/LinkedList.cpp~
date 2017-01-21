#include <iostream>
#include<string>
#include "LinkedList.h"


LinkedList::LinkedList()
{
first = NULL; 
last = NULL;
}


LinkedList::~LinkedList()
{

Node* temp = first;
Node* nextNode = first;
while(nextNode!=last)
{
delete last;
tmp = nextNode;
nextNode = tmp->next;

}


}


void LinkedList::insertAtBack(int valueToInsert)
{

Node* newNode = new Node();
newNode->val = valueToInsert;
newNode-> next = newNode;
Last->next = newNode;
last = newNode;

}

bool LinkedList::removeFromBack()
{
Node* newNode = new Node();
Node* temp = last;


while( newNode->next =! Last)
{
newNode = newNode->next;



if(newNode->next = Last)
{
delete last;
last = newNode;
}


}



}



void LinkedList::print()
{


}


bool LinkedList::isEmpty()
{
if (first == NULL)
{
return true;
}
else 
{
return false;
}
}


int LinkedList::size()
{

int size = 0;

Node* nextNode = first;

while(nextNode->next != NULL || nextNode == Last)
{

nextNode = nextNode->next;
size++;
}

return size;
}



void LinkedList::clear()
{

Node* nextNode = first;

while(nextNode-> next != last)
{
delete last;
nextNode = nextNode->Last;

}

}













int main()
{






return 0;
}
