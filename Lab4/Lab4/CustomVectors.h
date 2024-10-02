#pragma once
using namespace std;

template <typename T>
class CustomVector {
	//FIELDS
private:
	int size; //This is the number of actual items in the vector
	T* data; //We will manually allocate
	int capacity; //This is the amount of space in data array

	//CONSTRUCTOR(S)
public:
	CustomVector() {
		//Zero-parameter constructor will make an empty
		// customVector
		size = 0;
		capacity = 10;
		data = new T[capacity];
	}
	//DESTRUCTOR - automatically called when the object is
	// trash collected
	~CustomVector() {
		delete[] data;
	}

	//METHODS
	void append(T item) {
		//Check if we've run out of space
		if (size >= capacity) {
			T* tmp = new T[capacity * 2];
			//copy everything into tmp
			for (int i = 0; i < size; i++) {
				tmp[i] = data[i];
			}
			delete[] data;
			data = tmp;
			tmp = nullptr; //technically this last line is autoumatic
			capacity *= 2;
		}
		//Where should the item get placed?
		data[size] = item;

		//Remember to increase the size!
		size++;
	}

	//We're just going to hope the user doesn't do 
	// an index out of bounds error
	T get(int index) {
		return data[index];
	}

	int getSize() {
		return size;
	}

	void clear() {
		delete[] data;
	}

	void insert(T item, int index) {
		if (index > data.getSize()) {
			T* temp = new T[index];
			for (int i = 0; i < temp.getSize(); i++) {
				temp[i] = data[i];
			}
			delete[] data;
			data = temp;
			temp = nullptr;
			capacity = index;
			size++;
		}
		data[index] = item;
	}

	void remove(int index) {
		T* temp = new T[capacity-1]; 
		for (int i = 0; i < data.getSize(); i++) {
			if (i < index) {
				temp[i] = data[i];
			}
			else (i >= index) {
				if (i + 1 < data.getSize()) {
					temp[i] = data[i + 1];
				}
			}
		}
		delete[] data;
		data = temp;
		temp = nullptr;
		capacity = capacity - 1;
		size--;
	}

	void set(T item, int index) {
		data[index] = item;
	}

	int size() {
		return size;
	}

	T get(int index) {
		return data[index];
	}
};