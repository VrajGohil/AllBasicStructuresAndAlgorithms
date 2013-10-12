#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>


using namespace std;
void bubble(vector<int>* data){
	for (int i = 0; i < data->size(); i++)
		for (int j = 0; j < data->size() - 1; j++)
			if (data->at(j) > data->at(j + 1)){
				int tmp = data->at(j);
				data->at(j) = data->at(j + 1);
				data->at(j + 1) = tmp;
			}
	
	
}
void insertionSort(vector<int>* arr) {

      int i, j, tmp;

      for (i = 1; i < arr->size(); i++) {

            j = i;

            while (j > 0 && arr->at(j - 1) > arr->at(j)) {

                  tmp = arr->at(j);

                  arr->at(j) = arr->at(j - 1);

                  arr->at(j - 1) = tmp;

                  j--;
            }
      }
}

int main ()
{
	bool vec = false; //vector
	bool has = false;  //hashtable
	bool stac = false; //stack
	bool queue = false;
	int structureType = 0;
	cout << "Please choose a sort type:" << endl 
		<< "1. Vector" << endl
		<< "2. Hash Table" << endl
		<< "3. Stack" << endl
		<< "4. Queue" << endl; 

	cin >> structureType;
	cout << endl;
	vector<int> toSort;
	map<string, int> beersOwed;
	std::stack<int> stuffStack; 
	std::queue<int> stuffQ;
	switch(structureType){
		case 1:
			//vector
			toSort.push_back(4);
			toSort.push_back(5);
			toSort.push_back(9);
			toSort.push_back(3);
			toSort.push_back(2);
			toSort.push_back(6);
			toSort.push_back(7);
			toSort.push_back(11);
			toSort.push_back(15);
			toSort.push_back(12);
			break;
		case 2: 
			//hashtable
			beersOwed.insert(pair<string,int>("Nick", 4)); 
			beersOwed.insert(pair<string,int>("Adam", 100));
			beersOwed.insert(pair<string,int>("Bobby", 40));
			beersOwed.insert(pair<string,int>("Steve", 5));
			beersOwed.insert(pair<string,int>("Chris", 1));
			beersOwed.insert(pair<string,int>("Sam", 13));
			beersOwed.insert(pair<string,int>("Alex", 10));
			beersOwed.insert(pair<string,int>("Andrew", 9001));
			beersOwed.insert(pair<string,int>("Doctor", 12));
			break;
		case 3: 
			//Stack
			cout << "Stack Initially" << endl;
			stuffStack.push(4);
			cout << stuffStack.top() << endl;
			stuffStack.push(5);
			cout << stuffStack.top() << endl;
			stuffStack.push(9);
			cout << stuffStack.top() << endl;
			stuffStack.push(3);
			cout << stuffStack.top() << endl;
			stuffStack.push(2);
			cout << stuffStack.top() << endl;
			stuffStack.push(6);
			cout << stuffStack.top() << endl;
			stuffStack.push(7);
			cout << stuffStack.top() << endl;
			stuffStack.push(11);
			cout << stuffStack.top() << endl;
			stuffStack.push(15);
			cout << stuffStack.top() << endl;
			stuffStack.push(12);
			cout << stuffStack.top() << endl;
			
			//cout << 4 << endl << 5  << endl <<	9  << endl << 3  << endl <<	2  << endl <<	6 << endl << 7 << endl << 11 << endl << 15 << endl << 12 endl;
			break;
			
		case 4:
			//queue
			cout << "queue initially" << endl;
			stuffQ.push(4);
			cout << stuffQ.front() << endl;
			stuffQ.push(5);
			cout << stuffQ.front() << endl;
			stuffQ.push(9);
			cout << stuffQ.front() << endl;
			stuffQ.push(3);
			cout << stuffQ.front() << endl;
			stuffQ.push(2);
			cout << stuffQ.front() << endl;
			stuffQ.push(6);
			cout << stuffQ.front() << endl;
			stuffQ.push(7);
			cout << stuffQ.front() << endl;
			stuffQ.push(11);
			cout << stuffQ.front() << endl;
			stuffQ.push(15);
			cout << stuffQ.front() << endl;
			stuffQ.push(12);
			cout << stuffQ.front() << endl;
			
			//cout << 4 << endl << 5  << endl <<	9  << endl << 3  << endl <<	2  << endl <<	6 << endl << 7 << endl << 11 << endl << 15 << endl << 12 endl;
			break;
	}
	if(structureType == 1){
		cout << "initial Vector" << endl;
		for(int x = 0; x < 10; x++){
				cout << toSort[x] << endl;
			}
		int sortType;
		cout << "Please choose a sort type:" << endl 
			<< "1. Bubble Sort" << endl
			<< "2. Insertion" << endl; 

		cin >> sortType;
		cout << endl;
		
		
		
		switch(sortType){
			case 1:
				cout << "1. Bubble Sort" << endl;
				bubble(&toSort);
				break;
			case 2:
				cout << "2. Insertion" << endl;
				insertionSort(&toSort);
				break;

			default:
				cout << "Invalid selection" << endl;
		}
		cout << endl << "final Vector" << endl;
		for(int x = 0; x < 10; x++){
			cout << toSort[x] << endl;
		}
	}
	else if(structureType == 2){ //hashtable
		cout << "initial hashtable" << endl;
		for (std::map<string,int>::iterator it=beersOwed.begin(); it!=beersOwed.end(); ++it)
			std::cout << it->first << " => " << it->second << '\n';
		
		string person;
		cout << "Enter a name:" << endl;
		cin >> person;
		cout << endl;
		cout << beersOwed.find(person)->second << endl;
	
	}
	else if(structureType == 3){
		cout << "Stack contains: " << endl;
		while (!stuffStack.empty()){
			std::cout << ' ' << stuffStack.top();
			stuffStack.pop();
		}
		std::cout << '\n';
	}
	else if(structureType == 4){
		cout << "queue contains: " << endl;
		while (!stuffQ.empty()){
			std::cout << ' ' << stuffQ.front();
			stuffQ.pop();
		}
		std::cout << '\n';
	}
	string eop;
	cin >> eop;
	return 0;
}
