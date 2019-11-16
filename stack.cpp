#include <iostream>
using namespace std;
const int maxn=1e6;

int stack[maxn];
int endn=-1;


//returns whether the stack is empty or not
bool empty(){
	if (endn==-1)
		return true;
	return false;
}


//returns the size of the stack
int size(){
	return endn+1;
}


//returns the top most element of the stack
auto top(){
	return stack[--endn];
}


//adds element 'n' to the end of the stack
void push(int n){
	stack[endn]=n;
	endn++;
}


//deletes the top most element of the stack
void pop(){
	cout << stack[--endn] << endl;
	stack[endn]=0;
}


int main(){
	int n;
	cin >> n;
	
	string s;
	int a;
	for (int i=0; i<n; i++){
		cin >> s;

		if (s=="empty"){
			if (empty())
				cout << "Stack is empty." << endl;
			else
				cout << "Stack is not empty." << endl;

		}


		else if (s=="size")
			cout << size();

		else if (s=="top")
			cout << top();

		else if (s=="push"){
			cin >> a;
			push(a);
		}

		else if (s=="pop"){
			if (endn > -1)
				pop();
			else
				cout << "Stack underflow(the stack is empty!)" << endl;
		}
			
	}
}
