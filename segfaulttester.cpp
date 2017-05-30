//uncomment whichever is most appropriate

#include "segfault.h"
#include <iostream>
using namespace std;
void print(const DList<int>& list){
	DList<int>::const_iterator it;
	for(it=list.begin();it!=list.end();it++){
		cout << *it << endl;
	}
	cout << "--------------" << endl;	
}
int main(void){
	DList<int> list;
	DList<int>::iterator it;

	list.push_front(1);
	list.push_front(2);
	list.push_front(3);
	//prints 3 2 1 (on separate lines)
	print(list);

	for(it=list.begin();it!=list.end();it++){
		*it = *it + 1;
	}
	//prints 4 3 2
	print(list);	

	list.push_back(6);
	list.push_back(7);
	list.push_back(8);

	//prints 4 3 2 6 7 8
	print(list);

	for(int i=0;i<5;i++){
		list.pop_front();
	}
	//prints 8
	print(list);
	list.pop_front();
	//prints nothing
	print(list);
	//shouldn't do anything...just don't crash
	list.pop_front();
	for(int i=0;i<5;i++){
		list.push_back(i);
	}
	//prints 0 1 2 3 4
	print(list);

	for(int i=0;i<4;i++){
		list.pop_back();
	}
	//prints 0
	print(list);
	list.pop_back();
	//prints nothing
	print(list);
	//shouldn't do anything...just don't crash
	list.pop_back();
	return 0;
}


