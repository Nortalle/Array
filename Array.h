#ifndef ARRAY_ARRAY_H
#define ARRAY_ARRAY_H

#include <cstring>

template<typename T>
class Array {
private:
    const size_t length;
    T *data;


public:
    Array(const unsigned short size) : length(size), data(new T[size]) {}

    Array(const Array &o) : length(o.length), data(new T[length]) {

        memcpy(&data, &o.data, sizeof(data));
    }

    ~Array() {
        delete[] data;
    }

    Array& operator=(const Array &o) {
        Array a(o);
        return a;
    }

    T &operator[](size_t index) {
        return data[index];
    }

    size_t size() const {
        return length;
    }

    class Iterator {
    private:
        T *data_ptr;

    public:

        explicit Iterator(T *data) : data_ptr(data) {}

        Iterator &operator++() {
            data_ptr++;
            return *this;
        }

        bool operator==(const Iterator &o) const {
            return data_ptr == o.data_ptr;
        }

        bool operator!=(const Iterator &o) const {
            return data_ptr != o.data_ptr;
        }

        T &operator*() {
            return *data_ptr;
        }
    };

    Iterator begin() {
        return Iterator(data);
    }

    Iterator end() {
        return Iterator(data + length);
    }
};

#endif //ARRAY_ARRAY_H
