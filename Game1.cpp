/**
* Ryan Nicholas
*Game 
*2019.05.06
*/

#include <iostream>
#include <string>

constexpr auto PI = 3.14159265;

using namespace std;

class Shape {
private:
	std::string name;
	int width = 1;
	int height = 1;
	int radius = 1;
public:
	
	/**
	 * set the width
	 * @param w		width
	 */
	void setWidth(int w) {
		width = w;
	}

	/**
	 * set the height
	 * @param h		height
	 */
	void setHeight(int h) {
		height = h;
	}

	void setRadius(int r) {
		radius = r;
	}

	int getRadius() {
		return radius;
	}

	/**
	 * Set the type
	 */
	void setType(string object) {
		name = object;
	}

	/**
	* Return the width
	* @return width		width 
	*/
	int getWidth() {
		return Shape::width;
	}

	/**
	* Return the height
	* @return height		height
	*/
	int getHeight() {
		return Shape::height;
	}

	/**
	 * Get the type
	 * @return name		object type
	 */
	string getType()
	{
		return name;
	}

	/**
	 * display the type
	 */
	void display() {
		std::cout << "The object is a " << name << endl;
	}
};

class Square : public Shape {
public:
	/**
	 *Initialize the square class
	 */
	Square() {
		setType("Square");
	}

	/**
	* Return the area
	* @return		return the area
	*/
	int getArea() {
		return getWidth() * getHeight();
	}
};

class Rectangle : public Shape {
public:
	/**
	* Initialize the rectangle class
	*/
	Rectangle() {

		setType("Rectangle");
	}
	
	/**
	* Return the area
	* @return		area
	*/
	int getArea() {
		return getWidth() * getHeight();
	}
};

class Circle : public Shape {
public: 
	/**
	* Initialize the Circle Class
	*/
	Circle() {
		setType("Circle");

	}

	/**
	* return the area
	* @return		return the area
	*/
	double getArea() {
		return 2 * PI * getRadius();
	}
};

/**
* The main code
*/
int main()
{
	// Initialize objects
	Rectangle rect;
	Square sqr;
	Rectangle rect2;
	Circle cir;

	// Preset dimensions
	sqr.setWidth(5);
	sqr.setHeight(5);

	rect.setWidth(10);
	rect.setHeight(20);

	rect2.setWidth(100);
	rect2.setHeight(50);

	cir.setRadius(5);

	//Display types
	rect.display();
	rect2.display();
	sqr.display();
	cir.display();

	// Display area
	cout << "The area of the Rectangle 1 is: " << rect.getArea() << endl;
	cout << "The are of the Rectangle 2 is: " << rect2.getArea() << endl;
	cout << "The area of the Square is: " << sqr.getArea() << endl;
	cout << "The area of the Circle is: " << cir.getArea() << endl;
}

