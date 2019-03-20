#ifndef DS_VECTOR_H
#define DS_VECTOR_H

#include <vector>
#include <string>

template<typename T>
class DS_Vector
{
    T * _obj; // the internal array
    int _realSize; // current size of the array
    int _virtualSize; // the size allocated in memory for the array

    private:
        void resize();

    public:
        DS_Vector() : _obj(new T[8]), _realSize(0), _virtualSize(8) { };
        DS_Vector(std::vector<T> obj);
        DS_Vector(T obj[]);

        virtual ~DS_Vector();

        // ======================================
        // DIAGRAM
        // ======================================
        // unshift <-- [ ... ] <-- push
        //   shift --> [ ... ] --> pop
        // ======================================

        // inserts item at the end of the vector
        void push(T item);
        // removes item from the end of the vector
        T pop();
        // inserts item at the start of the vector
        void shift(T item);
        // removes item from the start of the vector
        T unshift();


        // returns the length of the vector
        int size() const;
        // returns the first item of the vector
        T start() const;
        // returns the last item in the vector
        T end() const;

        // returns the item corresponding to the index i
        T getIndex(int i) const;
        // sets an item to item in the corresponding index i
        void setIndex(T item, int i);
        // sets an item to index i and increase all concurrent item indeces by 1 (remove overlap)
        void pushIndex(T item, int i);
        // remove an item to index i and decrease all concurrent item indeces by 1 (remove holes)
        T popIndex(int i);

        // finds the index that matches the current item
        int findIndex(T item) const;

        // returns a new vector that has been transformed using the iterator t
        // DS_Vector<T> map();
        // returns the aggregate of a reduced value
        // T reduce();
        // transforms the currect vector using the iterator t
        // void forEach();

        // returns a subvector starting from index start of size size
        // DS_Vector<T> splice(int start, int size);

        // joins an external vector to the current vector at the end
        // void join(DS_Vector obj);


};

#endif // DS_VECTOR_H
