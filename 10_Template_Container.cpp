
#include <iostream>
using namespace std;
#include <assert.h>

// a container is a name for specific type of classes which functions as data structures.
// a container is an object which stores a collection or data structures of other objects.
// a container provides member functions to interact with data.
// a container is responsible for encapsulating memory management

template<typename T>
class MyArray {
private:
    T *p;               // partially filled array of type T
    int capacity;
    int size;
public:
    MyArray();
    MyArray(int c);
    T& operator[](int index);               // returning by reference from the [] operator
    const T& operator[](int index) const;
    void push_back(T e);                    // adding info to array so we accept pass by value
    int getSize() const;
    int getCapacity() const;
};

// *********************************** member functions

template<typename T>
MyArray<T>::MyArray(): MyArray(10) {}

template<typename T>
MyArray<T>::MyArray(int c): size(0) {
    assert(c > 0);                                      // runtime error if c <= 0
    capacity = c;
    p = new T[capacity];
}

template<typename T>
T & MyArray<T>::operator[](int index) {
    assert(index >= 0 && index < size);                 // runtime error if index is illegal
    return p[index];
}

template<typename T>
const T& MyArray<T>::operator[](int index) const {
    assert(index >=0 && index < size);                  // runtime error if index is illegal
    return p[index];
}

template<typename T>
void MyArray<T>::push_back(T e) {
    p[size++] = e;
}

template<typename T>
int MyArray<T>::getSize() const {
    return size;
}

template<typename T>
int MyArray<T>::getCapacity() const {
    return capacity;
}

// *********************************** non-member functions

template<typename T>
void print(const MyArray<T> &d) {
    for (int i = 0; i < d.getSize(); ++i) {
        cout << d[i] << " ";
    }
    cout << "\n";
}

template<typename T>
void printPtrs(const MyArray<T> &d) {
    for (int i = 0; i < d.getSize(); ++i) {
        cout << *(d[i]) << " ";
    }
    cout << "\n";
}


// *********************************************************************************
// **************************      MAIN FUNCTION     *******************************
// *********************************************************************************

int main() {
    cout << "\n";


    MyArray<int> staticNums(10);        // array of non pointers
    for (int i = 0; i < staticNums.getCapacity(); ++i) {
        int nums = i;
        staticNums.push_back(nums);
    }
    print(staticNums);

    MyArray<int*> dynamicNums(10);      // array of pointers
    for (int i = 0; i < dynamicNums.getCapacity(); ++i) {
        int *nums = new int(i + 1);
        dynamicNums.push_back(nums);
    }
    print(dynamicNums);



    cout << "\n";
    return 0;
}
