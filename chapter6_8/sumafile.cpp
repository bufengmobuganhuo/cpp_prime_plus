#include <fstream>
#include <iostream>
//
// Created by tiger on 2025/1/2.
//
const int SIZE = 60;

int main(int argc, char *argv[]) {
  char filename[SIZE];
  std::ifstream infile;

  std::cout << "Enter name of data file: ";
  std::cin.getline(filename, SIZE);
  infile.open(filename);
  if (!infile.is_open()) {
    std::cout << "Could not open the file " << filename << std::endl;
    std::cout << "Program terminating.\n";
    exit(EXIT_FAILURE);
  }

  double value;
  double sum = 0.0;
  int count = 0;

  infile >> value;
  while (infile.good()) {
    count++;
    sum += value;
    infile >> value;
  }
  if (infile.eof()) {
    std::cout << "End of file reached.\n";
  } else if (infile.fail()) {
    std::cout << "Input terminated by data mismatch.\n";
  } else {
    std::cout << "Input terminated for unknown reason.\n";
  }

  if (count == 0) {
    std::cout << "No data processed.\n";
  } else {
    std::cout << "Items read: " << count << std::endl;
    std::cout << "Sum: " << std::endl;
    std::cout << "Average: " << sum / count << std::endl;
  }

  infile.close();
  return EXIT_SUCCESS;
}
