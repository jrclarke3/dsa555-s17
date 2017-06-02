template <typename T>
class Queue{
	T* theQueue_;
	int max_;
	void grow(){
	}
public:
	Queue(){
		max_=100;
		theQueue_=new T[max_]
	}
	//O(1) if no grow()
	void push(const T& data){
		if(its not big enough){
			grow();
		}
	}
	//O(1)
	void pop(){
	}
	//O(1)
	T front() const{
	}
	~Stack(){
	}
};
