#include <iostream>
using namespace std;

int i, j, n, temp;
    int arr[40];

void insertionSort() {
    for(i = 1; i <= n-1 ; i++) { //step 1
        temp = arr[i]; //step 2
        j = i - 1;

        while(j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j = j - 1; //step 4b
        }
        arr [j + 1] = temp;

    }
}

void input() {
    while (true) {
        cout << "masukan banyaknya elemen oada array = " ;
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ":";
        cin >> arr[i]; 
    }

}

void display() {
    cout << endl;
    cout << "=================" << endl;
    cout << "Elemen Array Yang Telah Tersusun" << endl;
    cout << "=================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl;
    }
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;

}

int main()
{
   input();
   insertionSort();
   display();

   system("pause");
   return 0;


}