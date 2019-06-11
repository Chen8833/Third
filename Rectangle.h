#ifndef Rectangle_H
#define Rectangle_H
class Rectangle
{
public:
	Rectangle();
	Rectangle(double,double);
	double getWidth()const;
	double getHeight()const;
	double getArea()const;
    static int getNumOfRect();
	void setWidth(double);
	void setHeight(double);
private:
	double width;
	double height;
	static int numOfRect;
};

#endif 

