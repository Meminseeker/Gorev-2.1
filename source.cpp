#include <iostream>
#include <vector>
#include <math.h>

double mean(std::vector<double> data){
    double sum = 0;

    for (double x: data){
        sum += x;
    }

    double result = sum / data.size();
    return result;
}

double stddev(std::vector<double> data){
    double average = mean(data);
    double sumOfSquaresOfDiff = 0;

    for (double x: data){
        sumOfSquaresOfDiff += pow((x - average), 2);
    }

    double result = pow((1.0/data.size()) * sumOfSquaresOfDiff, 0.5);
    return result;
}

int main(){
    std::vector<double> myData;
    int n;

    std::cout << "Give me the number of elements in your data: ";
    std::cin >> n;

    for (int i=0; i<n; i++){
        std::cout << "Give me your input: ";
        double x; std::cin >> x;

        myData.push_back(x);
    }


    double average = mean(myData);
    std::cout << average << std::endl;

    double stdDeviation = stddev(myData);
    std::cout << stdDeviation << std::endl;

    return 0;
}