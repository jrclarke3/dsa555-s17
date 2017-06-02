#include "dlist.h"
template <typename T>
class Queue{
	DList<T> theQueue_;
public:
	Queue(){}  //empty stack
	void push(const T& data){
		theQueue_.push_back(data);
	}
	void pop(){
		theQueue_.pop_front();
	}
	T front() const{
		return *(theQueue_.begin());
	}
	~Queue(){}
};
