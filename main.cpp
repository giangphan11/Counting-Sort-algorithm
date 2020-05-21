#include <bits/stdc++.h>

using namespace std;

int timMax(int Arr[], int n){
    int m= Arr[0];
    for(int i=0; i<n; i++){
        if(Arr[i]>m)
            m=Arr[i];
    }
    return m;
}
int timMin(int Arr[], int n){
    int m= Arr[0];
    for(int i=0; i<n; i++){
        if(Arr[i]<m)
            m=Arr[i];
    }
    return m;
}
void countingSort(int Arr[], int n, int _max, int _min){
    int index=0;
    int m=_max-_min;
    int _count[m]={};

    // Mảng count với max phần tử và được gán giá trị là 0 tại mỗi vị trí
    for(int i=_min; i<=_max; i++){
        _count[i]=0;
    }

    // Đếm số lượng đối tượng có cùng giá trị và lưu kết quả vào mảng count
        for (int i=0; i < n; i++) {
            _count[Arr[i]]++;
        }

     // Thay đổi giá trị của mảng count và return ra mảng đã sx
        for (int i = _min; i <= _max; i++) {
            while (_count[i] > 0) {
                Arr[index] = i;
                index++;
                _count[i]--;
            }
        }
}
int main()
{
    int Arr[]={4,2,-3,1,9};
    int _max=timMax(Arr,5);
    int _min=timMin(Arr,5);

    countingSort(Arr,5,_max,_min);
    for(int i=0; i<5; i++){
            cout << Arr[i]<<"\t";
        }
    //cout <<"Hello world !"<<endl;
    return 0;
}
