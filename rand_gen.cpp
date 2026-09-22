

#include <iostream>
#include <thread> 
#include <cstdlib>
#include <ctime> 
using namespace std;

// Number Guessing Game 
// A simple C++ console game where the player guesses a randomly generated number.

int main()
{

srand(time(0));
char answer;

do {

cout << "WeLcOMe t0 RAnDom nUmBeR g3NerAt0r!" << endl; 
this_thread::sleep_for(1s);
cout << "Try and guess a number between 1 and 100." << endl;
this_thread::sleep_for(1s);
cout << "If you can get it in under 10 guesses... \nyou get a prize!" << endl;
cout << endl;
cout << endl;
this_thread::sleep_for(1s);
cout << "----------------------------" << endl;
cout << endl;
cout << endl;

int secret = rand() % 100 + 1; 
int guess; 
int guesses = 0;

do {

guesses ++;

    this_thread::sleep_for(1s);
    cout << "Guess a random number between 1 and 100: " << endl;
    cin >> guess;

      if (guesses == 40) {

    cout << ".. 40 guesses? seriously ? \n..you do know its only out of 100 right?" << endl; 
    this_thread::sleep_for(1s);
    cout << "you're running out of options here.. lock in" << endl; 
    cout << endl;
    cout << endl;

}

       if (guess != secret && guess == 69)
{
    cout << "I see what you did there ;) Not the answer though... guess again!! " << endl; 

} else if (guess > secret)
{
    cout << "Too high! Try again" << endl;
}else if (guess < secret)
{
    cout << "Too low! Try again" << endl; 
} else {
    cout << endl;
    cout << endl;
    cout << "Amaze! Amaze! Amaze! You guessed correctly." << endl;
    cout << endl;
    cout << endl;
    cout << "You got it in " << guesses << " guesses!" << endl; 
    cout << endl; 
    cout << endl; 
}

} while (guess != secret);

if (guesses < 10){
    cout << "... Wow you got it in under 10 guesses, i'm impressed! \nHere's the gift I promised: " << endl; 
    cout << endl;
    cout << endl;
    this_thread::sleep_for(2s);
    cout << "    sorry .. this is awkward.. it takes a second to load..." << endl; 
    this_thread::sleep_for(2s);
    cout << "ahh, here it is! enjoy!" << endl; 
    cout << endl; 
    cout << endl;
    this_thread::sleep_for(1s);
    cout << R"(
    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢯⠙⠩⠀⡇⠊⠽⢖⠆⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠱⣠⠀⢁⣄⠔⠁⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣷⣶⣾⣾⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⡔⠙⠈⢱⡟⣧⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⡠⠊⠀⠀⣀⡀⠀⠘⠕⢄⠀⠀⠀⠀⠀
⠀⠀⠀⢀⠞⠀⠀⢀⣠⣿⣧⣀⠀⠀⢄⠱⡀⠀⠀⠀
⠀⠀⡰⠃⠀⠀⢠⣿⠿⣿⡟⢿⣷⡄⠀⠑⢜⢆⠀⠀
⠀⢰⠁⠀⠀⠀⠸⣿⣦⣿⡇⠀⠛⠋⠀⠨⡐⢍⢆⠀
⠀⡇⠀⠀⠀⠀⠀⠙⠻⣿⣿⣿⣦⡀⠀⢀⠨⡒⠙⡄
⢠⠁⡀⠀⠀⠀⣤⡀⠀⣿⡇⢈⣿⡷⠀⠠⢕⠢⠁⡇
⠸⠀⡕⠀⠀⠀⢻⣿⣶⣿⣷⣾⡿⠁⠀⠨⣐⠨⢀⠃
⠀⠣⣩⠘⠀⠀⠀⠈⠙⣿⡏⠁⠀⢀⠠⢁⡂⢉⠎⠀
⠀⠀⠈⠓⠬⢀⣀⠀⠀⠈⠀⠀⠀⢐⣬⠴⠒⠁⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀
)";

    cout << endl;
    cout << endl;     
    this_thread::sleep_for(1s);
    cout << "-- pls dont spend it all in one spot --" << endl;  
    cout << endl;
    cout << endl;
    this_thread::sleep_for(1s);
    cout << "Thanks for playing!" << endl;
    cout << endl;

} else {

    this_thread::sleep_for(2s);
cout << "Sadly, not under 10 guesses :( but try again! \nmaybe you'll win a prize next time." << endl;
this_thread::sleep_for(1s);
cout << "Thanks for playing!" << endl; 
} 

this_thread::sleep_for(1s);
cout << "Want to play again? (y/n)" << endl; 
cin >> answer;

if (answer != 'y'){
    cout << "aww really?";
    this_thread::sleep_for(1s);
    cout << "so what- u rob me of my prize money and then just leave?" << endl;
    cout << "its fine, congrats on the win i guess..." << endl;
    this_thread::sleep_for(2s);
    cout << "i hate to see you go, but i love to watch you leave \n   i mean.. cya!" << endl;
}

} while (answer == 'y');


return 0;

}
