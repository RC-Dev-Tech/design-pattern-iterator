/*
 * Design Pattern - Iterator 疊代器模式
 * 
 * 在這個範例中，Iterator是疊代器的抽象類別，定義了疊代器需要實現的方法，包括Next和HasNext。
 * ConcreteIterator是具體的疊代器實現類，實現了Iterator介面，提供一種方法來迭代容器中的元素。
 * Aggregate是容器的抽象類別，定義了創建疊代器的接口。
 * ConcreteAggregate是具體的容器實現類，實現了Aggregate介面，創建一個ConcreteIterator對象來迭代容器中的元素。
 * 在Client中，我們創建了一個具體容器ConcreteAggregate並初始化了元素。
 * 然後通過CreateIterator方法創建了對應的疊代器ConcreteIterator，並使用疊代器來迭代容器中的元素，直到沒有下一個元素為止。
 * 透過Iterator和Aggregate的分離，我們可以輕鬆地使用不同的疊代器來迭代不同的容器，同時保持了客戶端與容器的解耦。
 */

#include <iostream>
#include <vector>

/*
 * Iterator.
 */
class Iterator {
public:
    virtual int Next() = 0;
    virtual bool HasNext() = 0;
};

/*
 * ConcreteIterator.
 */
class ConcreteIterator : public Iterator {
private:
    std::vector<int> container;
    int index;

public:
    ConcreteIterator(const std::vector<int>& elements) : container(elements), index(0) {}

    int Next() override {
        return container[index++];
    }

    bool HasNext() override {
        return index < container.size();
    }
};

/*
 * Aggregate.
 */
class Aggregate {
public:
    virtual Iterator* CreateIterator() = 0;
};

/*
// ConcreteAggregate.
 */
class ConcreteAggregate : public Aggregate {
private:
    std::vector<int> elements;

public:
    ConcreteAggregate(const std::vector<int>& data) : elements(data) {}

    Iterator* CreateIterator() override {
        return new ConcreteIterator(elements);
    }
};

/*
 * Client.
 */
int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    ConcreteAggregate aggregate(data);
    Iterator* iterator = aggregate.CreateIterator();

    while (iterator->HasNext()) {
        std::cout << iterator->Next() << " ";
    }
    std::cout << std::endl;

    delete iterator;

    return 0;
}
