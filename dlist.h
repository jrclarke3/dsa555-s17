//templated doubly linked list

template <typename T>
class DList{
	struct Node{
		T data_;
		Node* next_;
		Node* prev_;
		Node(const T& data=T{},Node* n=nullptr,Node* p=nullptr){
			data_=data;
			next_=n;
			prev_=p;
		}		
	};
	Node* front_;
	Node* back_;
public:
	DList(){
		front_=back_=nullptr;
	}
	void push_front(const T& data){
		if(its an empty list){
		//make a node
			Node* nn=new Node(data);
			//make front point to the node
			front_=nn;
			//make back point to the node
			back_=nn;
		}
		else{
			//make a node
			//change previous pointer of old front node
			//change front pointer
		}	
	}
	void push_back(const T& data){		

	}
	void pop_front(){
		
	}
	void pop_back();
	void print() const;
};