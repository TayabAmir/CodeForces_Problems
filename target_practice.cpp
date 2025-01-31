#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int getScore(int i, int j){
    for(int x = 1; x <= 5; x++)
        if(i == x || i == 10-x+1 || j == x || j == 10-x+1) return x;
        
    // return (i == 1 || i == 10 || j == 1 || j == 10) ? 1 : (i == 2 || i == 9 || j == 2 || j == 9) ? 2 : (i == 3 || i == 8 || j == 3 || j == 8) ? 3 : (i == 4 || i == 7 || j == 4 || j == 7) ? 4 : 5;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int score = 0;
        char c;
        for(int i = 1; i <= 10; i++)
            for(int j = 1; j <= 10; j++){
                cin >> c;
                if(c == 'X')
                    score += getScore(i, j);
            }
        cout << score << endl;
    }
}