#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    int guess;
    int secret;
    bool got_it;

    srand(time(0));
    secret = rand() % 51;

    std::cout << "Valor secreto é: " << secret << '\n';

    for (int i = 0; i < 10; i++) {

        int last_guess;

        if (i == 0) { //primeira iteração que vai verificar se acertou de primeira ou não
            std::cout << "Make your first guess between 0 and 50! You only got 10 tries!" << '\n';
            std::cin >> guess;
            last_guess = guess;

            if (guess == secret) {
                std::cout << "You guessed it right! You won after " << (i+1) << " tries!" << '\n';
                got_it = true;
                break;
            }
            else {
                std::cout << "Wrong answer! Keep trying!" << '\n' << '\n';
            }
        }
        
        else {
            std::cout << "Make a guess!" << '\n';
            std::cin >> guess;
            
            if (guess < 0) { //checa se veio um número menor e se o usuário quer sair;
                std::cout  << "Do you wish to quit?" << '\n';
                std::cout << "Y / N" << '\n';

                std::string answer;
                std::cin >> answer;

                if (answer == "Y") {
                    std::cout << "Quiting..." << '\n';
                    break;
                }
                else if (answer == "N") {
                    std::cout << "Alright! We'll keep going!" << '\n';
                }
                else {
                    std::cout << "I couldn't get it right! Do you wish to quit?" << '\n';
                    std::cout << "Y / N" << '\n';

                    std::cin >> answer;
                    if (answer == "Y") {
                        std::cout << "Quiting..." << '\n';
                    break;
                    }
                    else if (answer == "N") {
                        std::cout << "Alright! We'll keep going!" << '\n';
                    }
                }
            }

            else if (guess == secret) { //checa se ele acertou o elemento;
                std::cout << "You guessed it right! You won after " << (i+1) << " tries!" << '\n';
                got_it = true;
                break;
            }

            else { //se não for um valor menor que zero ou um valor exatamente igual a secret 
                if (abs(secret - guess) < abs(secret - last_guess)) {
                    std::cout << "You're getting closer! It's HOT" << '\n' << '\n';
                }
                else if (abs(secret - guess) > abs(secret - last_guess)) {
                    std::cout << "You did it bad! It's COLD" << '\n' << '\n';
                }
            }
            last_guess = guess;
        }
    }

    if (!got_it) {
        std::cout << "It seems like you ran out of guesses! Try again!" << '\n';
    }

    return 0;
}