#include <iostream>
#include <list>

using namespace std;
template <typename T>
class Queue {
public:
    Queue() {}

    // add elevent end
    void enqueue(const T& item) {
        queueList.push_back(item);
    }

    // 1 element start
    T dequeue() {
        if (!is_empty()) {
            T front_item = queueList.front();
            queueList.pop_front();
            return front_item;
        }
        else {
            throw out_of_range("Queue is empty");
        }
    }

    // check queue 
    bool is_empty() {
        return queueList.empty();
    }

    // get size queue
    int size() {
        return queueList.size();
    }

private:
   list<T> queueList;
};
int main() {
    Queue<int> myQueue;
    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);
    myQueue.enqueue(4);

    cout << "Size of the queue: " << myQueue.size() << endl; 

    cout << "Dequeue: " << myQueue.dequeue() << endl;  
    cout << "Dequeue: " << myQueue.dequeue() << endl; 

    cout << "Size of the queue: " << myQueue.size() << endl; 

    return 0;
}