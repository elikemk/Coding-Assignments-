#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main()
{

srand((unsigned)time(0));


int years;
int grass [12][years];
int trees[12][years];
int weeds [12][years];
int total [12][ years];

string treelevel; 
string weedlevel;
string grasslevel;

cout << "Enter the number of Years: ";
cin >> years;
cout << endl;

for (int i = 0; i <= years; i++)
{  
  cout << endl << "Year " << i << ": "  << endl;
    
    for (int j = 0; j <= 12; j++)
    {

        trees[i][j] =  rand() % 2000;
        grass[i][j] =  rand() % 200;
        weeds[i][j] =  rand() % 500;
        int total = grass[i][j] + trees[i][j] + weeds[i][j];
        cout << endl << "Month " << j << " :" << endl;
        cout << "What is the pollen count from trees? " << trees[i][j] << endl;
        cout << "What is the pollen count from grasses? " << grass[i][j] << endl;
        cout << "What is the pollen count from weeds? " << weeds[i][j] << endl;
        cout << "The total pollen count is  " << total << endl;
        cout << "Avery pollen count is " <<  (total/3) << endl;
        
        
        if(trees[i][j] <= 0 && trees[i][j] >= 14){
            treelevel = "Low";
        }
        else if (trees[i][j] <= 89  && trees[i][j] >= 15){
            treelevel = "Medium";
        }
        else if (trees[i][j] <= 1499  && trees[i][j] >= 90){
            treelevel = "High";
        }
        else if ( trees[i][j] >= 15){
            treelevel = "Extremely High";
        }
      //grass
        if(grass[i][j] <= 4 && grass[i][j] >= 0){
            grasslevel = "Low";
        }
        else if (grass[i][j] <= 19  && grass[i][j] >= 5){
            grasslevel = "Medium";
        }
        else if (grass[i][j] <= 199  && grass[i][j] >= 20){
            grasslevel = "High";
        }
        else if ( grass[i][j] >= 200){
            grasslevel = "Extremely High";
        }

        if(weeds[i][j] <= 9 && weeds[i][j] >= 0){
            weedlevel = "Low";
        }
        else if (weeds[i][j] <= 49  && weeds[i][j] >= 10){
            weedlevel = "Medium";
        }
        else if (weeds[i][j] <= 499  && weeds[i][j] >= 50){
            weedlevel = "High";
        }
        else if ( weeds[i][j] >= 500){
            weedlevel = "Extremely High";
        }


  





