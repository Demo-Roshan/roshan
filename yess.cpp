#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to generate a random color code (ANSI)
string randomColor() {
    int color = rand() % 7 + 31; // ANSI colors 31–37 (red to white)
    return "\033[" + to_string(color) + "m";
}

int main() {
    srand(time(0));
    int n;

    cout << "✨ Enter the number of rows for your star pattern: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << randomColor() << "* " << "\033[0m";
        }
        cout << endl;
    }

    cout << "\n🌈 Beautiful random star pattern generated!\n";
    return 0;
}
