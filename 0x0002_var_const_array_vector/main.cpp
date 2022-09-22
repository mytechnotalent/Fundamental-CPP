#include <iostream>
#include <vector>
#include <string>

int main()
{
  // char
  char x = 'x';
  std::cout << x << std::endl;

  // bool
  bool isHappy = true;
  std::cout << isHappy << std::endl;
  
  // int
  int y = 42;
  std::cout << y << std::endl;  

  // floating-point
  std::cout.precision(17);
  double zz = 42.111111111111111;
  std::cout << zz << std::endl;

  // constants
  const int MAGIC_NUMBER = 42;
  std::cout << MAGIC_NUMBER << std::endl;

  // arrays
  int favorite_numbers[2] = {42, 7};
  std::cout << &favorite_numbers << std::endl;
  std::cout << favorite_numbers[0] << std::endl;
  std::cout << favorite_numbers[1] << std::endl;

  // vectors
  std::vector<int> favourite_numbers;  // always init to 0, no need to init
  favourite_numbers.push_back(42);
  favourite_numbers.push_back(7);
  std::cout << &favourite_numbers << std::endl;
  std::cout << favourite_numbers.at(0) << std::endl;
  std::cout << favourite_numbers.at(1) << std::endl;  
  std::cout << favourite_numbers.size() << std::endl;
  int da_fav_num = 42;
  std::vector<int>::iterator it;
  it = std::find(favourite_numbers.begin(), favourite_numbers.end(), da_fav_num);
  if (it != favourite_numbers.end())
  {
    std::cout << da_fav_num << " found at position: ";
    std::cout << it - favourite_numbers.begin() << std::endl;
  }
  else
    std::cout << da_fav_num << " not found...";

  // operators
  int result = 0;
  result++;
  std::cout << result << std::endl;

  // strings
  std::string secret_number = "forty-two";
  std::cout << secret_number << std::endl;
  secret_number.at(4) = 'e';
  std::cout << secret_number << std::endl;
  std::cout << secret_number.length() << std::endl;
  std::cout << (secret_number == "forte-two") << std::endl;  
  std::cout << secret_number.substr(3, 8) << std::endl;
  std::cout << secret_number.find("te-two") << std::endl;
  std::cout << secret_number.erase(0, 3) << std::endl;
  secret_number.clear();
  std::cout << secret_number << std::endl;

  return 0;
}
