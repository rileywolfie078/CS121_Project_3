#include <ctime>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int Horse_Number = 5
const int TRACK_LENGTH = 20

int main(){
	std::cout << "The Grand Horse Race: The Game" << std:: endl;
	srand(time(NULL));

	int horse[Horse_Number] = {0,0,0,0,0};
	int result = 0;

	while result = 0:
		printLane(0, horses);
		advance(0, horses);
		isWinner(0, horses);
		if result > 0:
			break

	return 0;
}

void printLane(int horseNum, int* horses){
	for (int i = 0; i < TRACK_LENGTH; i++){
		if (i == horse[horseNum]){
			std::cout << ".";
		}
	}

	std::cout << std::endl;
}

void advance(int horseNum, int* horses){
	int coin = rand() % 2;
	horses[horseNum] += coin;
}

bool isWinner(int horseNum, int* horses){
	if (horses[horseNum] += TRACK_LENGTH){
		result += 1;
		std::cout << horseNum + "won the race!" std::endl;
	}
}

