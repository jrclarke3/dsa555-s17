template <typename T>
class Stack{

public:
	Stack();  //empty stack
	void push(const T& data);
	void pop();
	T top() const;
	~Stack();
};
