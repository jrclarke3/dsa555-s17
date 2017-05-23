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
	class iterator{

	};
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
			Node* nn=new Node(data,front_);
			//change previous pointer of old front node
			front_->prev_=nn;
			//change front pointer
			front_=nn;
		}	
	}
	void push_back(const T& data){		

	}
	void pop_front(){
		if(the list is not empty){
			Node* rm = front_;
			front_=front_->next_;
			delete rm;
			if(front_!=nullptr){
				front_->prev_=nullptr;
			}
			else{
				//this else only happens if list had only one node
				back_=nullptr;
			}
		}
	}
	void pop_back();
	void print() const;
};