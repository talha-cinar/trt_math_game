#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void start_game();
void game_loop();

struct State
{
  vector<int> nums;
};

int main(void)
{
  start_game();
  game_loop();
}

void start_game()
{
  cout << "********************" << endl;
  cout << "The Game Starts" << endl;
  
}

void game_loop()
{
  srand(time(0));
  vector<int> rand_nums; 
  rand_nums.push_back(rand() % 10);   
  rand_nums.push_back(rand() % 10);   
  rand_nums.push_back(rand() % 10);   
  rand_nums.push_back(rand() % 10);   
  rand_nums.push_back(rand() % 10);   
  int two_digit= 20 + rand() % 80; 
  if(two_digit % 2 !=0 && two_digit % 5 !=0)
  {
    two_digit--;
  }
  rand_nums.push_back(two_digit);

  int first_num =0;
  int second_num=0;
  char bn =0;
  do 
  {
    cout << "usage 5 * 6 ";
    cin >> first_num >> bn >> second_num;
    switch(bn)
    {
      case '+':
        todo();
      break;

      case '-':
        todo();
      break;

      case '*':
        todo();
      break;

      case '/':
        todo();
      break;

      default:
        cout << "unsported operation";
      break;

    }
  }while(1);
}
