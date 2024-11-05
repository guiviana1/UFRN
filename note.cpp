#include <iostream>
#include <cstdlib>
#include <ctime>

bool quit(std::string& resposta) {
                if (resposta == "Y") {
                    return true;
                    
                }
                else if (resposta == "N") {
                    std::cout << "Alright! We'll keep going!" << '\n';
                    return false;
                }
                else {
                    std::cout << "I couldn't get it right!" << '\n';
                    std::cout << "Do you wish to quit? (Y / N):" << '\n';
                    std::cin >> resposta;
                    return quit(resposta);
                }
}

bool range(int guess_number) {
    if (0 <= guess_number && guess_number <= 50) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    int guess;
    int secret;
    bool got_it = false;
    bool quitt = false;
    std::string answer;

    srand(time(0));
    secret = rand() % 51;

    std::cout << "Valor secreto é: " << secret << '\n';

    for (int i = 0; i < 10; i++) {

        int last_guess;

        if (i == 0) { //primeira iteração que vai verificar se acertou de primeira ou não
            std::cout << "Make your first guess between 0 and 50! You only got 10 tries!" << '\n';
            std::cin >> guess;
            range(guess);

            if (range(guess)) {
                last_guess = guess;
            }
            else if (!range(guess)) {
                std::cout << "Try with a number between 0 and 50!" << '\n';
            }

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
                std::cout << "Do you wish to quit? (Y / N): " << '\n';

                std::cin >> answer;

                quit(answer);

                if (quit(answer) == true) {
                    quitt = true;
                    std::cout << "QUIT!" << '\n';
                    return 0;
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
                else if (abs(secret - guess) == abs(secret - last_guess)) {
                    std::cout << "You're getting closer! It's HOT" << '\n' << '\n';
                }
            }
            last_guess = guess;
        }
    }
        if (!got_it) {
            std::cout << "It seems like you ran out of guesses!" << '\n';
            std::cout << "The correct number was " << secret << ". Try again!" << '\n';
        }
    return 0;
}