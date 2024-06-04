#include<iostream>
using namespace std;

int main(){
   int rows, cols;

   cout<<"enter the number of rows and its maximum should be 3: ";
   cin>>rows;

   if(rows > 3){
    cout<<"error. Number of rows exceeded maximum limit of 3"<< endl;
    return 1;
   }
   
    cout<<"enter the number of columns and its maximum should be 3: ";
    cin>>cols;
    if(cols > 3){
        cout<<"Error. Number of columns exceeded maximum limit of 3 \n";
        return 1;
    }

    double ** array = new double*[rows];
    for(int i = 0; i < rows; ++i){
        array[i] = new double[cols];
    }
    cout<<"Enter values for the array \n";
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            cout<<"enter values for element[" <<i <<"][" <<j <<"]:";
            cin>>array[i][j];
        }
        
    }
    cout<<"array variables: \n";
    
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            cout<<array[i][j]<<" ";
        }
      cout<<endl;
    }
    for(int i = 0; i < rows; ++i){
        delete[] array[i];
    }
    delete[] array;
    return 0;
   
}