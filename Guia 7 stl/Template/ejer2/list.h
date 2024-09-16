#ifndef LIST_H
#define LIST_H

template <class T>
class List
{
public:
    List();
    void add(T);
    void printList();
    void removeAll();

private:
    struct lista
    {
        T dato;
        lista* link;
        lista(T dato): dato(dato),link(nullptr){}
    };
    lista* head;
};

#endif // LIST_H
