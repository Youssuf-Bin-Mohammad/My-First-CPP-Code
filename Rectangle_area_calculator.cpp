#include <iostream>
using namespace std;

int main() {
    int width, length, area;

    cout << "Please enter rectangle width: \n";
    cin >> width;

    cout << "Please enter rectangle length: \n";
    cin >> length;

    area = width * length;

    cout << "Area of rectangle: " << area << " CM" << endl;
    cout << "DONE\a"; // Alarm sound after code execution

    return 0;
}
