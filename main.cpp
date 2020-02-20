//Stephen Hawkins 2/20/19
//Unit 6 Assignment - Sorting
#include <iostream> 
#include "accounts.h"
using namespace std;

void printArray(int[], int);
void sortArrayDsc(int[], int);

int main()
{

  //Bubble Sort ASC method per task 2 Unit 6 assignment
  cout << "\nStart: " << cpuTime() << endl;
  //call the sort function
  sortArrayDsc(accountBalances,maxAccounts);
  printArray(accountBalances, maxAccounts);
  cout << "\nEnd: " <<cpuTime() << endl;
   
  return 0;
}

void printArray(int arrayVals[], int size)
{
  cout << "\nPrinted values in Array: " <<endl;
for(int i = 0; i < size; i++)
  {
  cout << arrayVals[i] << ",";
  }
}
void sortArrayDsc(int arrayVals[], int size)
{
  int temp = 0;
  for(int left = 0; left < size; left++)
  {
    for(int right = left+1; right < size; right++)
    {
      
      if(arrayVals[left] < arrayVals[right])
      {
        //classic swap algorithm
        temp = arrayVals[left];
        arrayVals[left] = arrayVals[right];
        arrayVals[right] = temp;
      }
    }
  }
}