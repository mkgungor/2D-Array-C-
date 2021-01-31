#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int dayBread[31][2];
    ifstream fin("breadData.txt");

    if (!fin.is_open())
    {
        cout << "Input file cannot be found\n";
        return 1;
    }
    int row = 0;
    while (!fin.eof()) 
    {
        fin >> dayBread[row][0];
            cout << dayBread[row][0] << " ";

        fin >> dayBread[row][1];
            cout << dayBread[row][1] << endl;
        row++;
    }

    cout << row << " days - Printing the day and bread\n";
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << dayBread[i][j] << " ";
        }  
        cout << endl;
    }
    cout << "End of Program\n";
}