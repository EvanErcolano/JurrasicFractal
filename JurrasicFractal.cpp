#include <iostream>
#include "library.h"
#include <vector>
#include <math.h>

void drawLines(vector<int> angles) {
	for (int i = 0; i < angles.size(); i++) {
		set_heading_degrees(angles[i]);
		draw_distance(4);
	}
}

vector<int> makeIteration(vector<int> angles) { 
	int count = angles.size() - 1; 

	while(count >= 0) {				// Duplicate the old iterations and turn them by 90 degrees
		angles.push_back((90 + angles[count]) % 360);						
		count--;				
	}
	return angles;
}

void input() {
	int iterations;
	int count = 0;
	vector<int> angles; 			// a vector storing the angles at which lines will be drawn

	cout << "Which iteration # ?" << endl;
	cin >> iterations;
	iterations = iterations - 1;	// accomodating for the iterations being 0 indexed.
	angles.push_back(180);			// insert the first line (first iteration) to start the pattern.

	while (count < iterations) {	// while we haven't done all the iterations - make the current iteration and repeat.
		angles = makeIteration(angles);
		count++;
	}

	make_window(1000, 1000);
	move_to(450, 700); 				// moving our cursor to a position on Window
	drawLines(angles);
}


void main() {
	input();
}

