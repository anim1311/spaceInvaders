#include<GL/glew.h>
#include<GLFW/glfw3.h>


int main(void) {

	GLFWwindow* window;

	// initialise GLFW

	if (!glfwInit()) {
		return -1;

	}

	// create a windowed mode and its openGL context

	window = glfwCreateWindow(640, 480, "Opengl!", NULL, NULL);

	if (!window) {

		glfwTerminate();
		return -1;
	}

	//make the windows context current 

	// loop untill the user closes the window

	while (!glfwWindowShouldClose(window)) {

		glClear(GL_COLOR_BUFFER_BIT);

		// render the opengl

		// swap fornt and back buffers
		glfwSwapBuffers(window);
		
		// pool for events
		glfwPollEvents();

	}

	glfwDestroyWindow(window);
	glfwTerminate();
}