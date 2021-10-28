#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10

int queue[SIZE], tail = -1, head = -1;

void enqueue(int null)
{
	if (tail == SIZE)
	{
		cout << "queue full";
	}
	else if (head == -1 && tail == -1)
	{
		head++;
		tail++;
		queue[tail] = null;
	}
	else
	{
		tail++;
		queue[tail] = null;
	}
}
int dequeue() {
	if (head == -1 || head > tail)
	{
		cout << "empty";
		return -1;
	}
	else
	{
		cout << "The deleted element -  " << queue[head++];
		return queue[head - 1];
	}
}
void show()
{
	int i = head;
	if (head == -1 || head > tail)
	{
		cout << "empty";
	}
	else
	{
		while (i <= tail)
		{
			cout << "\t" << queue[i];
			i++;
		}
		cout << endl;
	}
}
int main()
{
	int number, element;
	cout << "Switch number of command";
	cout << "\n1.Add element to queue  \n2.Delete element  \n3.Show queue \n4.Exit";
	while (1)
	{
		cout << "Enter the command" << endl;
		cin >> number;

		switch (number)
		{
		case 1: cout << "Enter the value to be add: ";
			cin >> element;
			enqueue(element);
			break;
		case 2: dequeue();
			break;
		case 3: cout << "Queue : ";
			show();
			break;
		case 4: exit(0);

		default:cout << "\n Error" << endl;
		}
	}
	return 0;
}