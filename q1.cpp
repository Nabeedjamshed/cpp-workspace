#include <iostream>

class ComboLock {
private:
    int secret1;
    int secret2;
    int secret3;
    int current_position;
    bool isFirstTurn;
    bool isSecondTurn;
    bool isThirdTurn;

public:
    ComboLock(int secret1, int secret2, int secret3) {
        if (secret1 < 0 || secret1 > 39 || secret2 < 0 || secret2 > 39 || secret3 < 0 || secret3 > 39) {
            std::cerr << "Combination numbers must be between 0 and 39." << std::endl;
            exit(1);
        }
        this->secret1 = secret1;
        this->secret2 = secret2;
        this->secret3 = secret3;
        reset();
    }

    void reset() {
        current_position = 0;
        isFirstTurn = true;
        isSecondTurn = false;
        isThirdTurn = false;
    }

    void turnLeft(int ticks) {
        current_position = (current_position - ticks + 40) % 40;
        if (isFirstTurn && current_position == secret2) {
            isFirstTurn = false;
            isSecondTurn = true;
        } else if (isSecondTurn && current_position == secret3) {
            isSecondTurn = false;
            isThirdTurn = true;
        } else {
            reset(); // Reset if the sequence is incorrect
        }
    }

    void turnRight(int ticks) {
        current_position = (current_position + ticks) % 40;
        if (isFirstTurn && current_position == secret1) {
            isFirstTurn = false;
            isSecondTurn = true;
        } else {
            reset(); // Reset if the sequence is incorrect
        }
    }

    bool open() {
        return isThirdTurn;
    }
};

int main() {
    ComboLock lock(10, 20, 30); // Correct combination is (10, 20, 30)
    int ticks;

    lock.turnRight(10); // Turn right to first secret number
    lock.turnLeft(30);  // Turn left to second secret number
    lock.turnRight(10); // Turn right to third secret number

    if (lock.open())
        std::cout << "The lock is open!" << std::endl;
    else
        std::cout << "Incorrect combination. The lock remains closed." << std::endl;

    return 0;
}
