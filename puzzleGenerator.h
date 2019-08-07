/*
	Header file for puzzleGenerator class. This is used to generate a rowCol x rowCol puzzle that is represented by a vector of strings.
	Shapes are applied at psuedo-random quantity, position to a blank (zeroed) puzzle in order to create a puzzle problem for user/algorith
	to solve.
*/

#include <string>
#include <vector>

using namespace std;

typedef vector<string> shape;


class puzzleGenerator {
	
	public:
		puzzleGenerator(int rowCol);
		void generate();
		vector<string> getPuzzle();
		vector<shape> getShapes();	
	protected:
		vector<shape> shapes; /*hold various shapes used to generate/solve puzzle*/
		vector<shape> usedShapes; /*hold shapes used to generate the puzzle*/
		vector<string> puzzleGrid; /*holds puzzle state*/

};