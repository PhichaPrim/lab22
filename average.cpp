#include<iostream>
using namespace std;

int main(int argc, char *argv[]){
    double temp, avr, sum = 0;
    for(int i=0; i<argc-1; i++){
        temp = atof(argv[i+1]);
        sum += temp;
    }
    avr = sum/(argc-1);
    if(argc==1) cout << "Please input numbers to find average.";
    else{
        cout <<"---------------------------------\n";
        cout << "Average of "<< argc-1 <<" numbers = "<< avr <<endl;
        cout <<"---------------------------------\n";
    }
    return 0;
}
