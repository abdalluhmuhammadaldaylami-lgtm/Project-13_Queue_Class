#include<iostream>
#include"clsMyQueue.h"
using namespace std;


int main() {

	clsMyQueue<int>MyQueue;

	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);
	MyQueue.Push(50);

	cout << "the Print List:\n";

	MyQueue.Print();

	cout << "\nQueue size :" << MyQueue.Size() << endl;
	cout << "Queue frount :" << MyQueue.Frount() << endl;
	cout << "Queue Back :" << MyQueue.Back() << endl;

	MyQueue.Pop();
	cout << "\nQueue After Pop :\n";
	MyQueue.Print();

	cout << "\nItem (2) :" << MyQueue.GitItem(2) << endl;

	MyQueue.Reverse();
	cout << "\nQueue After Revers :\n";
	MyQueue.Print();

	MyQueue.UpdateItem(2, 600);
	cout << "\nQueue After Update :\n";
	MyQueue.Print();

	MyQueue.insertAfter(2, 800);
	cout << "\nQueue After insert Afert :\n";
	MyQueue.Print();

	MyQueue.InsertAtFrount(1000);
	cout << "\nQueue After insert at frount :\n";
	MyQueue.Print();

	MyQueue.InsertAtBack(2000);
	cout << "\nQueue After insert at back :\n";
	MyQueue.Print();

	MyQueue.Clear();
	cout << "\nQueue After Clear :\n";
	MyQueue.Print();
}