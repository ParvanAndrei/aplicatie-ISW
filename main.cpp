#include <iostream>
#include <chrono>
using namespace std::chrono;

main(){
std::cout<<"Introduceti un numar:"<<std::endl;
int n;
int rezultat = 0;
std::cin>>n;



int index = 2;
auto start = high_resolution_clock::now();
while (n!=1){
	while (n%index == 0){
		n = n / index;
		std::cout << index << std::endl;
    }
	index = index +1;
}
auto stop = high_resolution_clock::now();
auto duration = duration_cast<seconds>(stop - start);

std::cout<< "execution time: " << duration.count()<< std::endl;

return 0;
}

