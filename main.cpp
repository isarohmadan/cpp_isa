#include <iostream>
using namespace std;


int main(){
    int arr[10] ={1,5,9,2,4,6,12,42,52,22};
    int pos;
    int tmp;

    for(int i = 0; i < 9; i++){
        pos = i;
        for(int j = i+1; j < 10; j++){
            if(arr[pos] > arr[j]){
                pos = j;
            }
        }
        tmp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = tmp;
    }
    for(int a = 0; a < 10; a++){
        cout << arr[a]<< endl;
    }
    return 0;
}