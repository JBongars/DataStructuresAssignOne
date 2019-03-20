#include "DS_Vector.h"

template<typename T>
DS_Vector<T>::DS_Vector(std::vector<T> input){
    int realSize = input.size();
    int virtualSize = 8; // alternatively, we could use obj.capacity()

    while(virtualSize < realSize){
        virtualSize = virtualSize * 2;
    }
    T obj[virtualSize];
    std::copy(std::begin(input), std::end(input), obj);

    this->_realSize = realSize;
    this->_virtualSize = virtualSize;
    this->_obj = obj;
}

template<typename T>
DS_Vector<T>::DS_Vector(T input[]){
    int realSize = sizeof(input);
    int virtualSize = 8;

    while(virtualSize < realSize){
        virtualSize = virtualSize * 2;
    }
    T obj[virtualSize];
    std::copy(std::begin(input), std::end(input), obj);

    this->_realSize = realSize;
    this->_virtualSize = virtualSize;
    this->_obj = obj;
}

template<typename T>
DS_Vector<T>::~DS_Vector(){
    delete[] this->_obj;
    delete this->_realSize;
    delete this->_virtualSize;
}

template<typename T>
void DS_Vector<T>::resize(){

    if(this->_realSize * 2 == this->_virtualSize){
        return;
    } else if (this->_realSize * 2 < this->_virtualSize){
        this->_virtualSize = this->_virtualSize / 2;
    } else {
        this->_virtualSize = this->_virtualSize * 2;
    }

    T result[this->_virtualSize];

    int i = 0;
    while(i < this->_realSize){
        result[i] = this->_obj[i];
        i++;
    }
    delete[] this->_obj;
    this->_obj[i] = result;
}

template<typename T>
void DS_Vector<T>::push(T item){
    this->_pushIndex(item, this->_realSize - 1);
}

template<typename T>
T DS_Vector<T>::pop(){
    this->_popIndex(this->_realSize - 1);
}

template<typename T>
void DS_Vector<T>::shift(T item){
    this->_pushIndex(item, 0);
}

template<typename T>
T DS_Vector<T>::unshift(){
    this->_popIndex(0);
}

template<typename T>
int DS_Vector<T>::size() const {
    return this->_realSize;
}

template<typename T>
T DS_Vector<T>::start() const {
    return this->_obj[0];
}

template<typename T>
T DS_Vector<T>::end() const {
    return this->_obj[this->_realSize - 1];
}

template<typename T>
void DS_Vector<T>::pushIndex(T item, int i){
    this->_resize();
    for(int j = this->_realSize - 1; j >= i; j--){
        this->_obj[j + 1] = this->_obj[j];
    }
    this->_obj[i] = item;
    this->_realSize++;
}

template<typename T>
T DS_Vector<T>::popIndex(int i){
    this->_resize();
    for(int j = i; j < this->_realSize; j++){
        this->_obj[j] = this->_obj[j + 1];
    }
    delete this->_obj[this->_realSize - 1];
    this->_realSize--;
}

template<typename T>
T DS_Vector<T>::getIndex(int i) const {
    return this->_obj[i];
}

template<typename T>
int DS_Vector<T>::findIndex(T item) const {
    for(int i = 0; i < this->_realSize; i++){
        if(item == this->_obj[i]){
            return i;
        }
    }
    return -1;
}

// DS_Vector<T>::map();
// DS_Vector<T>::splice(int start, int size);
// void DS_Vector<T>::join(DS_Vector obj);