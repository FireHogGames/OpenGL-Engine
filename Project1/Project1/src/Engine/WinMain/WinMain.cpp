#include "WinMain.h"

WinMain::WinMain(int width, int height, const char* title) {

	//Initialize glfw3.lib
	if (!glfwInit())
		glfwTerminate();

	//Create a window with the given values
	window = glfwCreateWindow(width, height, title, NULL, NULL);

	if (!window) {
		glfwTerminate();
	}

	//Make the window's context current
	glfwMakeContextCurrent(window);


}

void WinMain::Tick() {
	
}

WinMain::~WinMain() {
	glfwTerminate();
}

GLFWwindow* WinMain::getWindow() {
	return window;
}