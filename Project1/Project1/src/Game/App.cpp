#include "../Engine/WinMain/WinMain.h"
#include "../Engine/Renderer/Renderer.h"

void Render();

int main() {
	WinMain window(800, 600, "Game");

	float positions[] = {
		-0.5f ,-0.5f,
		0.0f, 0.5f,
		0.5f, -0.5f
	};

	VertexBuffer vb(/*Data*/);

	VertexLayout va(/*Data*/);

	IndexBuffer ib(/*Data*/);

	while (!glfwWindowShouldClose(window.getWindow())) {
		//render in here
		glClear(GL_COLOR_BUFFER_BIT);
		Render();

		//swap front and back buffers
		glfwSwapBuffers(window.getWindow());

		//Poll for and process event
		glfwPollEvents();
	}
}

void Render() {
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.5f ,-0.5f); // 0
	glVertex2f(0.0f, 0.5f  ); // 1
	glVertex2f(0.5f, -0.5f  ); // 2
	glEnd();
}