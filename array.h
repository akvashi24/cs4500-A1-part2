
#pragma once
#include "object.h"
#include "string.h"

class Array : public Object {
    public:
        int size_;
        int capacity_; 
        Object** data_;

        Array();
        virtual ~Array();

        virtual Object* get(int index);
        virtual void set(int index, Object* element);
        virtual void push_back(Object* element);
        virtual void swap(int index1, int index2);
        virtual Object* remove(int index);
        virtual int size();
};

class StrArray : public Array {
    public:
        String* data_;

        StrArray();
        ~StrArray();

        String* get(int index);
        void set(int index, String* element);
        void push_back(String* element);
        String* remove(int index);
};

class IntArray : public Object {
    public:
        int size_;
        int capacity_; 
        int* data_;

        IntArray();
        ~IntArray();

        int get(int index);
        void set(int index, int element);
        void push_back(int element);
        void swap(int index1, int index2);
        int remove(int index);
        int size();
};

class FloatArray : public Object {
    public:
        int size_;
        int capacity_; 
        float* data_;

        FloatArray();
        ~FloatArray();

        float get(int index);
        void set(int index, float element);
        void push_back(float element);
        void swap(int index1, int index2);
        float remove(int index);
        int size();
};

class BoolArray : public Object {
    public:
        int size_;
        int capacity_; 
        float* data_;

        BoolArray();
        ~BoolArray();


        bool get(int index);
        void set(int index, bool element);
        void push_back(bool element);
        void swap(int index1, int index2);
        bool remove(int index);
        int size();
};
