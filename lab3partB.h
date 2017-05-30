//templated doubly linked list with sentinel nodes
#include <iostream>
using namespace std;
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
	class const_iterator{
		friend class DList;
	protected:
		Node* curr_;
		const_iterator(Node* n){
			curr_=n;
		}
	public:
		const_iterator(){
			curr_=nullptr;
		}
		//++x
		const_iterator operator++(){
			if(curr_){
				curr_=curr_->next_;
			}
			return *this;
		}
		//x++
		const_iterator operator++(int){
			const_iterator old=*this;
			if(curr_){
				curr_=curr_->next_;
			}
			return old;			
		}
		const_iterator operator--(){
			if(curr_){
				curr_=curr_->prev_;
			}
			return *this;

		}
		const_iterator operator--(int){
			const_iterator old=*this;
			if(curr_){
				curr_=curr_->prev_;
			}
			return old;			
		}
		T operator*()const{
			return curr_->data_;
		}
		bool operator==(const_iterator other) const{
			return curr_==other.curr_;
		}
		bool operator!=(const_iterator other) const{
			return curr_!=other.curr_;
		}
	};
	class iterator:const_iterator{
		friend class DList;
		iterator(Node* n):const_iterator(n){

		}
	public:
		iterator():const_iterator(){
		}
		//++x
		iterator operator++(){
			if(this->curr_){
				this->curr_=this->curr_->next_;
			}
			return *this;
		}
		//x++
		iterator operator++(int){
			iterator old=*this;
			if(this->curr_){
				this->curr_=this->curr_->next_;
			}
			return old;			
		}
		iterator operator--(){
			if(this->curr_){
				this->curr_=this->curr_->prev_;
			}
			return *this;

		}
		iterator operator--(int){
			iterator old=*this;
			if(this->curr_){
				this->curr_=this->curr_->prev_;
			}
			return old;			
		}
		T& operator*(){
			return this->curr_->data_;
		}
		T operator*()const{
			return this->curr_->data_;
		}
		bool operator==(iterator other) const{
			return this->curr_==other.curr_;
		}
		bool operator!=(iterator other) const{
			return this->curr_!=other.curr_;
		}
	};
	//returns an iterator to first piece of data
	//in DList
	iterator begin(){
	}
	//returns an iterator to the thing that
	//FOLLOWS the last piece of data in DList;
	iterator end(){
	}
	//returns an iterator to first piece of data
	//in DList
	const_iterator begin() const{
	}
	//returns an iterator to the thing that
	//FOLLOWS the last piece of data in DList;
	const_iterator end() const{
	}
	DList(){
	}
	//insert data into front of linked list
	//data is will be first piece of data in linked
	//list
	void push_front(const T& data){
	}
	//insert data into back of linked list
	//data will be last piece of data in linked list
	void push_back(const T& data){		
	}
	//removes first node from linked list
	void pop_front(){
	}
	//remove's last node from linked list
	void pop_back(){

	}
	void print() const{
	}
};