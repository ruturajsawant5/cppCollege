//matrix using class
#include<iostream>
using namespace std;

class matrix{
	private :
	int a[10][10],b[10][10],z[10][10];
	int r,c;
	public :
		void getdata();
		void add();
		void display();
		void sub();
		void mul();
};

void matrix :: getdata(){
	cout<<"Enter number of rows and columns :";
	cin>>r>>c;
	cout<<"Enter first matrix :";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			cin>>a[i][j];
	}
	cout<<"Enter second matrix :";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			cin>>b[i][j];
	}
}

void matrix :: add(){
for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			z[i][j]=a[i][j]+b[i][j];
	}
	cout<<"\nThe addition of  matrix is : \n";
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<z[i][j]<<" ";
		}
	cout<<endl;
	}
}

void matrix :: sub(){
for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			z[i][j]=a[i][j]-b[i][j];
	}
	cout<<"\nThe substraction of  matrix is : \n";
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<z[i][j]<<" ";
		}
	cout<<endl;
	}
}

void matrix :: mul(){
for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			z[i][j]=0;
			for(int k=0;k<c;k++){
				z[i][j]=z[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	cout<<"\nThe miltiplication of  matrix is : \n";
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<z[i][j]<<" ";
		}
	cout<<endl;
	}
}

void matrix :: display(){
	cout<<"\nThe first matrix is : \n";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"\nThe second matrix is : \n";
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<b[i][j]<<" ";
		}
	cout<<endl;
	}
}

int main(){
matrix m1;
m1.getdata();
m1.display();
int choice;
	do{
		cout<<"\n\n######MENU######\n1.Addition\n2.Substraction\n3.Multipliaction\n4.Exit\n\nEnter your choice : ";
		cin>>choice;
		switch(choice){
			case 1:
				m1.add();
				break;
			case 2:
				m1.sub();
				break;
			case 3:
				m1.mul();
				break;
			case 4:
				break;
			default :
				cout<<"Invalid Choice\n";
				break;
		}
	}while(choice!=4);
}


