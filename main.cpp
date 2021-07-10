// Created by Jesus Vasquez-Cipriano on 4/19/2021.
// Copyright © 2021 Jesus Vasquez-Cipriano. All rights reserved.

// Description: A program to read PGM image files, create PPM image files, and display results to standard-out, based on user selection.

#include <iostream>
#include <fstream>
#include <cstdlib>

const int file_size = 28*28;

int main(int argc, const char * argv[]) {
   
    unsigned char images[file_size][10];
    
    std::ifstream inStream;
 
    inStream.open("digit_00.pgm");
    
    if (!inStream.is_open())
    {
        std::cout << "file not found";
        inStream.close();
        return 0;
    }
    
    int i = 0, next = 0;
  
    std::string n1;
    inStream >> n1 >> n1 >> n1 >> n1;
    
    while (inStream >> next)
    {
        images[i][0] = static_cast<unsigned char>(next);
        std::cout << static_cast<int>(images[i][0]);
        
        if ((i+1)%28 == 0)
        {
            std::cout << "\n";
        }
        i++;
    }
    
    for (int i = 0; i <28*28; i++)
    {
        if (images[i][0] > 150)
            std::cout << "*" << " ";
        else
            std::cout << "   ";
        if ((i+1)%28 == 0)
        {
            std::cout << "\n";
        }
    }
    
    inStream.close();
    return 0;
       }

// Extra Code for Test Purposes (To Be Deleted):

    /*
    int index = 0;
    for (int i = 0; i <file_size; i++)
    {
        
        if ((int)images[i][0] >= 150)
        {
            std::cout << "*";
            index = images[i][0];
            std::cout << index;
            return 0;
        }
        else
        {
            std::cout << " ";
        }
    }
    
    std::cout << index;
    std::cout << "count: " << count;
   
    
*/


    /*
    int count = 0;
    for (int i = 0; i <file_size; i++)
    {
        inStream >> images[i][0];
        //std::cout << images[i][0] << " ";
        count++;
    }
     
     */
     // std::cout << images[88][0];
      
    
 
    
    /*
     unsigned char images [28*28][1];

    std::ifstream inStream;
    std::ofstream outStream;
    inStream.open("digit_00.pgm");
    if (inStream.fail())
    {
        std::cout << "Input file opening failed.\n";
        exit(1);
    }
    outStream.open("copied3");
    if (outStream.fail())
    {
        std::cout << "Output file opening failed.\n";
        exit(1);
    }
    
    for (int i = 0; i <28*28; i++)
    {
        inStream >> images[i][0];
    }
    
    for (int i = 0; i <28*28; i++)
    {
        outStream << images[i][0];
    }
     
     inStream.close();
    outStream.close();
    return 0;
     
         */
    
    
    
    /*
    int count = 0;
    for (int i = 0; i <28*28; i++)
       {
        std::cout << images[i][0];
        count++;
       }
    
    std::cout << "\ncount is :" << count;
*/

/*
 int row = 0;
    for (int i =0; i < 28*28; i++)
    {
         std::cout << images[i][0] << " ";
         if(((row+1) %28) ==0)
              std::cout << "\n";
        ++row;
    }
 */
