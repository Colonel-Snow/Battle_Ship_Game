#include <vector>
#include <iostream>

class Game{
	friend std::ostream& operator<<(std::ostream&, Game&);
	public:
		Game();
		~Game() = default;
		void placePieceVertical(int, int, int);
        void placePieceHorizontal(int, int, int);
		bool checkForHit(int, int);
		void processHit(int, int);
		bool checkForGameOver();
	private:
		std::vector<std::vector<int>> _board;
		int _boardSize = 5;
};
