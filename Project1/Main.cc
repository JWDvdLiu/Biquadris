#include "Model.h"
#include "Controller.h"
#include "TextView.h"
//#include "WindowView.h"

int main(int argc, char * argv[]) {
	Model m = Model("Sequence1.txt","Sequence2.txt");
	Controller controller(&m);  
	TextView view(&controller, &m);
	controller.startGame();
	//WindowView view(&controller, &m);
}