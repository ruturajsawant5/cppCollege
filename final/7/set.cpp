#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getSet(int [],int);
void display(int [],int);
int main()
{
	int A[100],n1;
	int B[100],n2;

	cout<<"Enter number of elements in set A : ";
	cin>>n1;
	getSet(A,n1);

	cout<<"Enter number of elements in set B : ";
	cin>>n2;
	getSet(B,n2);
	
	cout<<"Elements in set A : ";
	display(A,n1);

	cout<<"Elements in set B : ";
	display(B,n2);

	vector<int> v(100);
	vector<int> :: iterator it;
	
	sort(A,A+n1);
	sort(B,B+n2);

	it=set_union(A,A+n1,B,B+n2,v.begin());
	v.resize(it-v.begin());
	
	cout<<"Elements in A union B :";
	for(it=v.begin();it!=v.end();++it)
		cout<<" "<<*it;

	vector<int> intersection(100);
	vector<int> :: iterator itintersection;
	
	itintersection=set_intersection(A,A+n1,B,B+n2,intersection.begin());
	intersection.resize(itintersection-intersection.begin());
	
	cout<<"\nElements in A intersection B :";
	for(itintersection=intersection.begin();itintersection!=intersection.end();++itintersection)
		cout<<" "<<*itintersection;

	vector<int> relative(100);
	vector<int> :: iterator itrelative;

	itrelative=set_union(A,A+n1,B,B+n2,relative.begin());
	relative.resize(itrelative-relative.begin());
	
	cout<<"\nElements in A relative compliment B :";
	for(itrelative=relative.begin();itrelative!=relative.end();++itrelative)
		cout<<" "<<*itrelative;

	vector<int> symdef(100);
	vector<int> :: iterator itsymdef;

	itsymdef=set_symmetric_difference(A,A+n1,B,B+n2,symdef.begin());
	symdef.resize(itsymdef-symdef.begin());
	
	cout<<"\nElements in A symmetric difference B :";
	for(itsymdef=symdef.begin();itsymdef!=symdef.end();++itsymdef){
		cout<<" "<<*itsymdef;}

	cout<<endl;	
}	
void getSet(int X[],int n){
	cout<<"Enter elements : ";
	for(int i=0;i<n;i++){
		cin>>X[i];
	}
}
void display(int X[],int n){
	//cout<<"Elements in set :";
	for(int i=0;i<n;i++){
		cout<<" "<<X[i];
	}
		cout<<endl;
}

