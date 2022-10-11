#include <iostream>
using namespace std;
class List
{
private:
	int arr[50];
	int *p;
public:
	List()
	{
		p = new int;
		p = arr;
		for (int i = 0; i < 5; i++)
		{
			cin >> arr[i];
			*p = arr[i];
			p++;
		}
		cout << "Default Constructor Invoked" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << *p+arr[i]<< endl << endl;
			
		}
	}

	void add(int a)
	{
		p = new int;
		p = arr;
		for (int i = 0; i < 5; i++)
		{
			arr[i] = arr[i] + a;
		}
		cout << "The values That has been added to the default values are " << a << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << p[i] << endl;
		}
	}

	void remove(int a)
	{
		p = new int;
		p = arr;
		for (int i = 0; i < 5; i++)
		{
			arr[i] = arr[i] - a;
		}
		cout << "The Values That Are Removed From the Lists is" << a << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << p[i] << endl;
		}
	}

	void removeat(int key)
	{
		p = new int;
		p = arr;
		for (int i = 0; i < 5; i++)
		{
			if (i == key)
			{
				arr[i] = 0;
			}
		}
		cout << "The Value after removing at " << key << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << p[i] << endl;
		}
	}

	void add_at(int a, int index)
	{
		p = new int;
		p = arr;
		for (int i = 0; i > index; i--)
		{
			arr[i] = arr[i - 1];
		}
		if (index >= 0 && index <= 5)
		{
			arr[index] = a;
		}
		else
		{
			cout << "Index Does Not Exist....." << endl;
		}

		cout << "The index at which you entered is  " << index << "The Value You Entered At it is " << a << endl;
		cout << "Array Elements after insetion are  " << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << p[i] << endl;
		}
	}

	void search(int a)
	{
		p = new int;
		p = arr;
		for (int i = 0; i < 5; i++)
		{
			if (i == a)
			{
				cout << "The Index You Searched For is...." << p[i] << endl;
			}
		}
	}

	void AddAtStart(int a)
	{
		p = new int;
		p = arr;
		for (int i = 0; i < 5; i++)
		{
			if (i == 0)
			{
				arr[i] = arr[i] + a;
			}
		}
		cout << "Adding Element at the First Node & the Element is" << a << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "First Index Changed After New Index Values are " << p[i] << endl;
		}
	}

	void AddAtEnd(int a)
	{
		p = new int;
		p = arr;
		for (int i = 0; i < 5; i++)
		{
			if (i == 4)
			{
				arr[i] = arr[i] + a;
			}
		}
		cout << "Adding Element at the Last Node and the element is " << a << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "Last Index Changed After New Index Values are " << p[i] << endl;
		}
	}
};
void main()
{
	List obj1;
	obj1.add(10);
	obj1.remove(20);
	obj1.removeat(3);
	obj1.add_at(20, 4);
	obj1.search(2);
	obj1.AddAtStart(1);
	obj1.AddAtEnd(4);

	system("pause");
}
