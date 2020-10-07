#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main () {
    char selection;
    vector<int> numbers;
    cout << "HEY THERE.................." << endl;
    cout << "Welcome to my Application............." << endl;
    
    do{
        
        cout << "Press the Following...to do following function...." << endl;
        cout << "P = Print the numbers entered in the console     " << "     A =  To Add a number in the console" << endl;
        cout << "M = Mean of the numbers in the console     " << "           S = To find the Smallest Number in the console" <<endl;
        cout << "L = To print the Largest number in the console      " << "  Q = Quit" << endl;
        cout << "\nEnter Your selection" << endl;
        
        cin >> selection;
        
        if (selection == 'P' || selection == 'p'){
            cout << "\nYou entered P" << endl;
            if (numbers.size() == 0)
                cout << "[ Your list is empty ]" << endl;
                else{
                   cout << "[ ";
                   for (auto num : numbers){
                      cout << num << " " ;
                    }
                   cout << "]" << endl;
            
                }
        }
        else if (selection == 'A' || selection == 'a') {
            cout << "\nYou entered A" << endl;
            int num_to_add;
            cout << "\nEnter a number you want to add" << endl;
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " was added" << endl;
            cout << endl;
        }
        else if (selection == 'M' || selection == 'm'){
            if (numbers.size() == 0){
                cout << "[ Your List is empty.....Unable to find the Mean..... ]" << endl;
            }
            else{
                cout << "\nYou entered M" << endl;
            
            double sum{0};
            
            for (auto val : numbers){
                sum += val;
            }
            
            
            double mean = sum / numbers.size();
            cout << "Mean = " << mean << endl;
                }
        }
        else if (selection == 'S' || selection == 's'){
            
            cout << "\nYou entered S" <<endl;
            if (numbers.size() == 0){
                cout << "[ Your List is empty......Unable to find the smallest.... ]" << endl;
            }
            else{
                int smallest = numbers.at(0);
                for (auto val : numbers){
                    if (val < smallest){
                        smallest = val;                     
                    }
                }
                cout << "The Smallest number is " << smallest << endl;
            }
        }
        else if (selection == 'L' || selection == 'l'){
            
            cout << "\nYou entered L" <<endl;
            if (numbers.size() == 0){
                cout << "[ Your List is empty......Unable to find the Largest.... ]" << endl;
            }
            else{
                int largest = numbers.at(0);
                for (auto val : numbers){
                    if (val > largest){
                        largest = val;                     
                    }
                }
                cout << "The largest number is " << largest << endl;
            }
                
        }
        else if (selection == 'Q' || selection == 'q'){
            cout << "You entered Q" << endl;
            cout << "GoodBye................." << endl;
        }
    }
    
    while (selection != 'Q' && selection != 'q');
    return 0;
}