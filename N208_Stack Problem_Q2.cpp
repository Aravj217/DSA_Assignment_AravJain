#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of operations: ";
    cin >> n;                        // Read total number of operations
    char ops[1000][10];              // Array to store all operations
    for (int i = 0; i < n; i++) {
        cout << "Enter operation " << i + 1 << ": ";
        cin >> ops[i];               // Read each operation from user
    }
    int record[1000];                // Array to store valid scores
    int count = 0;                    // Number of scores currently in record
    for (int i = 0; i < n; i++) {
        char* op = ops[i];
        if (op[0] == 'C' && op[1] == '\0') { // If 'C', remove last score
            count--;
        }
        else if (op[0] == 'D' && op[1] == '\0') { // If 'D', double last score
            record[count] = 2 * record[count - 1];
            count++;
        }
        else if (op[0] == '+' && op[1] == '\0') { // If '+', sum last two scores
            record[count] = record[count - 1] + record[count - 2];
            count++;
        }
        else {  // If it's a number
            cin.putback(op[0]);       // Put first character back into input stream
            int num;
            cin >> num;                // Read full number
            record[count] = num;       // Add number to record
            count++;
        }
    }
    int sum = 0;
    for (int i = 0; i < count; i++)
        {sum += record[i];}  // Calculate total sum of scores
    cout << "Output: " << sum << endl;  // Print final sum
    return 0;
}
