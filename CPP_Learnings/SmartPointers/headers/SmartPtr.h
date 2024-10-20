#pragma once
#include <iostream>
using namespace std;

template <typename T>
class SmartPtr
{
	T* ptr;	// raw pointer to object T as data member
public:
	explicit SmartPtr(T* p = nullptr) // explicit constructor so that dev knows that smart pointer is being constructed
	{
		cout << "smart pointer constructed" << endl;
		ptr = p;
	}
	~SmartPtr()
	{
		cout << "smart pointer destructed" << endl;
		delete ptr;
	}

	//SmartPtr(const SmartPtr&) = delete;	// to avoid copying pointer
	//SmartPtr& operator= (const SmartPtr&) = delete; // to avoid copying pointer
	SmartPtr(const SmartPtr& other)
	{
		if (other.ptr)
		{
			ptr = new T(*other.ptr);
		}
		else
			ptr = nullptr;	// initialize pointer null if other pointer is null.
	}
	SmartPtr& operator= (const SmartPtr& other)
	{
		if (this != &other)
		{
			delete ptr;
			if (other.ptr)
			{
				ptr = new T(*other.ptr);
			}
			else
				ptr = nullptr;
		}
		return *this;
	}

	T& operator*() const	// return by reference to avoid copying of object
	{
		return *ptr;
	}

	T* operator->() const	// returns raw pointer of object of T, used to access members
	{
		return ptr;
	}

	T* release()	// returns the raww pointer to the object. Meaning smart pointer does not work on the object but the raw pointer is still there to access the object.
	{
		cout << "releasing smart pointer and returning pointer to object in raw pointer" << endl;
		T* temp = ptr;
		ptr = nullptr;
		return temp;
	}
};

