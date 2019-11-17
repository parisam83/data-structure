#include <iostream>
using namespace std;
const int maxn=1e6+5;

int queue[maxn];
int startn=0, endn=-1;

//returns whether the queue is empty or not
bool empty(){
	if (startn > endn)
		return true;
	return false;
}


//returns the size of the queue
int size(){
	return endn+1;
}


//returns the bottom most(!) element of the queue
int bottom(){
	if (!empty())
		return queue[startn];
}


//adds element 'n' to the end of the queue
void push(int n){
	queue[++endn]=n;
}


//delete the bottom most element of the queue
void pop(){
	cout << queue[startn] << endl;
	queue[startn]=0;
	startn++;
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
				cout << "Queue is empty." << endl;

			else
				cout << "Queue is not empty." << endl;
		}

		else if (s=="size")
			cout << size() << endl;

		else if (s=="bottom")
			cout << bottom() << endl;

		else if (s=="push"){
			cin >> a;
			push(a);
		}

		else if (s=="pop"){
			if (!empty())
				pop();
			else
				cout << "Queue underflow(Queue is empty!)" << endl;
		}
	}
}
