#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector <int> vector1{}, vector2{};

    int add1;
    cout << "Add 10 to vector1: " << endl;
    cin >> add1;
    vector1.push_back(add1);
    int add2;
    cout << "Add 20 to vector1: " << endl;
    cin >> add2;
    vector1.push_back(add2);
    cout << "\nElements in vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1);
    cout << "\nvector1 contains " << vector1.size() << " elements" << endl;

    cout << endl;

    int add3;
    cout << "Add 100 to vector2: " << endl;
    cin >> add3;
    vector2.push_back(add3);
    int add4;
    cout << "Add 200 to vector2: " << endl;
    cin >> add4;
    vector2.push_back(add4);
    cout << "\nElements in vector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1);
    cout << "\nvector2 contains " << vector2.size() << " elements" << endl;

    cout << endl;

    vector <vector<int>> vector_2d{};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    cout << endl;

    cout << "Changing index 0 of vector1 to 1000 and displaying vector_2d" << endl;
    vector1.at(0) = 1000;

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    cout << endl;

    cout << "\nDisplay the elements in vector1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    cout << endl;


    return 0;
}
