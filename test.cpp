#include<iostream>

int main(){
  std::string eingabe;
  std::cout << "Gib eine Zahl ein: ";
  getline(std::cin, eingabe);
  std::size_t stelle = eingabe.find(",");
  if(stelle != std::string::npos){
    //probiere string to float cast
    
    std::cout << "Fehler!";
  }
  else{
    stelle = eingabe.find(".");
    if(stelle != std::string::npos){
      stelle = eingabe.find(".", stelle+1);
      if(stelle != std::string::npos){
        
        std::cout << "Fehler!";   
      }
      else{
        std::cout << std::stof(eingabe); 
      }
    }
    else{
      std::cout << std::stof(eingabe);
    }
  }
  

}