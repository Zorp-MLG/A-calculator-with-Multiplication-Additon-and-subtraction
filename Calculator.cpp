#include <iostream>
#include <string>
int main(){
std::cout<<"Hello, this is an calculator!"<< std::endl;
    std::cout<<"Send an number"<< std::endl;
    std::string userinput1 = "x";
std::cin >> userinput1;

    std::cout<<"One more!"<<std::endl;
    std::string userinput2 = "y";
std::cin >> userinput2;

std::cout<<"+ or x or -"<< std::endl;
std::string operations;
std::cin>> operations;
if (operations == "+"){
  
 int x = std::stoi(userinput1);
 int y = std::stoi(userinput2);
 int z = x + y;

  std::cout << "Result is " <<z<< "!" << std::endl;
}
if (operations == "x"){
    int x = std::stoi(userinput1);
    int y = std::stoi(userinput2);
    int z = x * y;
    std::cout << "result is "<<z<< "!"<< std::endl;
}
  if (operations == "-"){
    int x = std::stoi(userinput1);
    int y = std::stoi(userinput2);
    int z = x - y;
    std::cout << "result is "<<z<< "!"<< std::endl;
    }
    
    std::cout<<"Made by Mustafa Berisha In 2026, for live hackclub."<< std::endl;
}


