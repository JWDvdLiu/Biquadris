#include "TextView.h"
#include "Model.h"
#include <iostream>
#include <vector>

using namespace std;

TextView::TextView(Controller*c, Model*m) : View(c, m) {};

TextView::~TextView() {};
void TextView::update() {
	//print both boards;
}
void TextView::printBoardOne() {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 11; j++) {
			cout << model->getBoardOne()->getColor(i, j);
		}
		cout << endl;
	}
}
void TextView::printBoardTwo() {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 11; j++) {
			cout << model->getBoardTwo()->getColor(i, j);
		}
		cout << endl;
	}
}
void TextView::printInfoOne() {
	cout << model->getBoardOne()->getLvl << endl;
}
void TextView::printInfoTwo() {
	cout << model->getBoardTwo()->getLvl << endl;
}
void TextView::update() {
	Model::State state = model->state();
	if (state == Model::State::NEW_GAME) {
		//print boards
	}
	else if (state == Model::State::CURR_BLOCK) {

	}
	else if (state == Model::State::CLEAR_ROW) {

	}
	else if (state == Model::State::LVL_UP) {

	}
	else if (state == Model::State::SCORE_CHANGE) {

	}
	else if (state == Model::State::NEXT_BLOCK) {

	}
	else if (state == Model::State::RESTART) {

	}


}