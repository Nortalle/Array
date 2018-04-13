/*
 ------------------------------------------------------------------------------
 Exercice    : Array p.79
 Fichier     : Array.h
 Auteur      : Vincent Guidoux
 But         : Implémentation de la classe Array permettant de définir un
               tableau d’un type donné et d’une taille donnée et une classe
               interne Iterator permettant de parcourir ses éléments.
 Date        : 13.04.2018
 ------------------------------------------------------------------------------
*/
#ifndef ARRAY_ARRAY_H
#define ARRAY_ARRAY_H

#include <cstring>

template<typename T>
class Array {
private:
    const size_t length;
    T *data;

public:
    Array(size_t size) : length(size), data(new T[size]) {}

    Array(const Array &o) : length(o.length), data(new T[length]) {

        memcpy(data, o.data, length * sizeof(T));
    }

    ~Array() {
        delete[] data;
    }

    Array &operator=(const Array &o) {
        if (&o != this) {
            Array newArray(o);
            return newArray;
        }
        return *this;
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
