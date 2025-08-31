#include <iostream>
using namespace std;

int main(){
	
	cout<<"Enter how many elements you want to add: ";
	int n;
	cin>>n;
	int stack[n];
	int menu;
	int top=0;
	int i;
	do{
		cout<<"\n-------STACK MENU-------\n";
		cout<<"1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.Display\n";
		cout<<"4.Peek\n";
		cout<<"5.Exit\n";
		cout<<"What do you want to do: ";
		cin>>menu;
		switch(menu){
			case 1:
				if(top==n){
					cout<<"STACK IS FULL!\n";
					break;
				}
				else{
					cout<<"Enter the number: ";
					cin>>stack[top];
					top++;
					break;
				}
			case 2:
				if(top==0){
					cout<<"STACK IS EMPTY\n";
					break;
				}
				else{
					cout<<"This element is deleted: "<<stack[top-1];
					top--;
					break;
				}
			case 3:
				if(top==0){
					cout<<"STACK IS EMPTY\n";
					break;
				}
				else{
					for(i=top-1;i>=0;i--){
						cout<<stack[i]<<endl;
					}
					break;
				}
			case 4:
				if(top==0){
					cout<<"STACK IS EMPTY\n";
					break;
				}
				else{
					cout<<stack[top-1];
					break;
				}
			case 5:
				menu=5;
				cout<<"\n-------EXITING-------\n";
				break;
		}
		}while(menu!=5);
	
	
	
	
	
	
	return 0;
}
