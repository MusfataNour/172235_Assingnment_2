#include <iostream>
#include <ctime> 
#include <unistd.h>

using namespace std;

int main() {
    int lightState = 1; 

    while (true) {
        switch (lightState) {
            case 1:
                cout << "Red Light\n";
                sleep(5);
                break;

            case 2:
                cout << "Green Light\n";
                sleep(5); 
                break;

            case 3:
                cout << "Yellow Light\n";
                sleep(2);
                break;
        }

        
        lightState = (lightState % 3) + 1;
    }

    return 0;
}
