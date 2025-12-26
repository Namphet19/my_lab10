//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    ifstream source;
    source.open("score.txt");
    
    double number;
    double sum = 0;
    double sum_sq = 0;
    int N = 0;
    while (source >> number) {
        sum += number;
        sum_sq += pow(number, 2);
        N++;
    }
    
    if (N > 0) {
        double mean = sum / N;
        double std_deviation = sqrt((sum_sq / N) - pow(mean, 2));
        
        cout << "Number of data = " << N << endl;
        cout << setprecision(3) << "Mean = " << mean << endl;
        cout << setprecision(3) << "Standard deviation = " << std_deviation << endl;
    } else {
        cout << "No data found in score.txt" << endl;
    }
    
    source.close();
    return 0;
}