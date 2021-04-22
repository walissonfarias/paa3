#include <iostream>
#include <vector>

using namespace std;

vector<int> insertionSort(vector<int> avector) {
    for (unsigned int index=1; index<avector.size(); index++) {

        int currentvalue = avector[index];
        int position = index;

        while (position>0 && avector[position-1]>currentvalue) {
            avector[position] = avector[position-1];
            position--;
        }

        avector[position] = currentvalue;
    }

    return avector;
}

int main() {
    // Vector initialized using a static array
    static const int arr[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    vector<int> avector (arr, arr + sizeof(arr) / sizeof(arr[0]) );

    avector = insertionSort(avector);

    //prints the sorted vector
    for (unsigned int i=0; i<avector.size(); i++) {
        cout << avector[i] << " ";;
    }
    cout << endl;

    return 0;
}