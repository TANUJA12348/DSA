# include <iostream>
using namespace std;
int main ( ) {
    int row=1;
    int n;
    cin>>n;
    while ( row<=n) {
        int space=n-row; //space
        while ( space){
            cout<<" ";
            space=space-1;
        }
        int col=1; // star
        while ( col<=row) {
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}