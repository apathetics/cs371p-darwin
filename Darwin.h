#ifndef DARWIN_H
#define DARWIN_H

#include <iostream>
#include <vector>


using namespace std;

class Species {
	private:
		vector<string> instructions;		// instruction list
		char species;

	public:
		Species();							// No default species; put '.' instead
		Species(char s);					// Initialize species char
		void add_instruction(string inst);	// push_back instruction to instruction vector
};

class Creature {
	private:
		Species species;
		int pc;								// program counter
		int direction;						// W: 0, N: 1, E: 2, S: 3

	public:
		Creature();							// No default species; put '.' instead
		Creature(Species s, int d);			// give creature a species and a direction
};

class World {
private:
	vector<vector<Creature*> > grid;		// world grid vector of creature pointers
	int rows;
	int cols;
	int turn;								// # of times darwin(each creature) will run

public:
	World(int r, int c);
	void print_world();
	void simulate(int num_turns);
};


#endif