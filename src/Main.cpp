#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main()
{
	// Initialise GLFW
	glfwInit();

	// Tell GLFW what version of OpenGL we are using
	// In this case we are using OpenGL 3.3
	// Disturbingly I installed glad for version 4.4
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,  3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Tell GLFW we are using the CORE profile
	// So that means we only have the modern functions
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create a GLFWwindow object of 800 by 800 pixels, naming it "YouTubeOpenGL"
	// Fourth argument is for full screen. Fith argument does not matter.


	// Exercise Easy 2. Change the window size to x=400, y=225

	//GLFWwindow* window = glfwCreateWindow(800, 800, "YouTubeOpenGL", NULL, NULL);
	GLFWwindow* window = glfwCreateWindow(400, 225, "YouTubeOpenGL", NULL, NULL);

	//Error check if the window fails to create
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Introduce the window into the current context
	glfwMakeContextCurrent(window);

	// Load GLAD so it configures OPENGL		
	gladLoadGL();

	// Specify the viewport of OpenGL in the Window
	// In this case the viewport goes from x =0, y = 0, to x = 800, y = 800
	// Bottom left to top right? Confirmed.


	// Exercise Easy 2. Change the window size to x=400, y=225
	//glViewport(0, 0, 800, 800);
	glViewport(0, 0, 400, 225);


	// Specify the color of the background
	// Exercise Easy 1.
	// Change the color to orange using RGB normalized decimal

	//glClearColor(0.07f, 0.13f, 0.17f, 1.0f);

	glClearColor(0.811f, 0.517f, 0.047f, 1.0f);

	// Clean the back buffer and assign the new color to it
	glClear(GL_COLOR_BUFFER_BIT);
	// Swap the back buffer with the front buffer
	glfwSwapBuffers(window);

	// Main while loop
	while (!glfwWindowShouldClose(window))
	{
		// Take care of all the GLFW events
		glfwPollEvents();	
	}

	// Delete window before ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW
	glfwTerminate();
	return 0;
}