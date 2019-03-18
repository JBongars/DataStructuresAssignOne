#include "DS_Vector.h"

template<typename T>
DS_Vector<T>::DS_Vector( ){
    this->obj[8];
    this->realSize = 0;
    this->virtualSize = 8;
}

template<typename T>
DS_Vector<T>::DS_Vector(std::vector<T> input){
    int realSize = input.size();
    int virtualSize = 8; // alternatively, we could use obj.capacity()

    while(virtualSize < realSize){
        virtualSize = virtualSize * 2;
    }
    T obj[virtualSize];
    std::copy(std::begin(input), std::end(input), obj);

    this->realSize = realSize;
    this->virtualSize = virtualSize;
    this->obj = obj;
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

    this->realSize = realSize;
    this->virtualSize = virtualSize;
    this->obj = obj;
}

template<typename T>
DS_Vector<T>::~DS_Vector(){
    delete[] this->obj;
    delete this->realSize;
    delete this->virtualSize;
}

template<typename T>
void DS_Vector<T>::resize(){

    if(this->realSize * 2 == this->virtualSize){
        return;
    } else if (this->realSize * 2 < this->virtualSize){
        this->virtualSize = this->virtualSize / 2;
    } else {
        this->virtualSize = this->virtualSize * 2;
    }

    T result[this->virtualSize];

    int i = 0;
    while(i < this->realSize){
        result[i] = this->obj[i];
        i++;
    }
    delete[] this->obj;
    this->obj[i] = result;
}

template<typename T>
void DS_Vector<T>::push(T item){
    this->pushIndex(item, this->realSize - 1);
}

template<typename T>
T DS_Vector<T>::pop(){
    this->popIndex(this->realSize - 1);
}

template<typename T>
void DS_Vector<T>::shift(T item){
    this->pushIndex(item, 0);
}

template<typename T>
T DS_Vector<T>::unshift(){
    this->popIndex(0);
}

template<typename T>
int DS_Vector<T>::size() const {
    return this->realSize;
}

template<typename T>
T DS_Vector<T>::start() const {
    return this->obj[0];
}

template<typename T>
T DS_Vector<T>::end() const {
    return this->obj[this->realSize - 1];
}

template<typename T>
void DS_Vector<T>::pushIndex(T item, int i){
    this->resize();
    for(int j = this->realSize - 1; j >= i; j--){
        this->obj[j + 1] = this->obj[j];
    }
    this->obj[i] = item;
    this->realSize++;
}

template<typename T>
T DS_Vector<T>::popIndex(int i){
    this->resize();
    for(int j = i; j < this->realSize; j++){
        this->obj[j] = this->obj[j + 1];
    }
    delete this->obj[this->realSize - 1];
    this->realSize--;
}

template<typename T>
T DS_Vector<T>::getIndex(int i) const {
    return obj[i];
}

template<typename T>
int DS_Vector<T>::findIndex(T item) const {
    for(int i = 0; i < this->realSize; i++){
        if(item == this->obj[i]){
            return i;
        }
    }
    return -1;
}

// DS_Vector<T>::map();
// DS_Vector<T>::splice(int start, int size);
// void DS_Vector<T>::join(DS_Vector obj);