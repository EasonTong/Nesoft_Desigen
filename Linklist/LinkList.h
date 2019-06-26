//
// Created by apple34 on 2019-06-26.
//

#ifndef NESOFT_DESIGEN_LINKLIST_H
#define NESOFT_DESIGEN_LINKLIST_H

template <typename T>
struct Node{
    T data;
    Node<T>* next;
};

template <typename T>
struct Linklist{
    Node<T>* header;

};

#endif //NESOFT_DESIGEN_LINKLIST_H
