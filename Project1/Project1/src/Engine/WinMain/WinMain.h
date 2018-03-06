#pragma once

#include <GL\glfw3.h>

class WinMain {
public:
	WinMain(int width, int height, const char* title);
	~WinMain();
	void Tick();

	GLFWwindow* getWindow();

private:
	GLFWwindow* window;
};