#include<iostream>
using namespace std;

class setops{
	int A[100];
	int B[100];
	int union_[200];
	int intersection[100];
	int relativeCompliment[200];
	int symmetricDifference[200];
	int n1,n2;
	public:
		void getSetA(){
			cout<<"Enter number of elements in set A :";
			cin>>n1;
			for(int i=0;i<n1;i++){
				cin>>A[i];
			}
		}
		void getSetB(){
			cout<<"Enter number of elements in set B :";
			cin>>n2;
			for(int i=0;i<n2;i++){
				cin>>B[i];
			}
		}
		void displayA(){
			cout<<"Elements in set A :";

			for(int i=0;i<n1;i++){
				cout<<" "<<A[i];
			}
		cout<<endl;
		}
		void displayB(){
			cout<<"Elements in set B :";

			for(int i=0;i<n2;i++){
				cout<<" "<<B[i];
			}
		cout<<endl;
		}
};

int main(){
setops s;
s.getSetA();
s.displayA();
return 0;
}
