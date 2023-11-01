#include <iostream>
#include "triangle.h"
#include "point.h"

#include <json/json.h>

int main(int argc, char **argv){
    // -------- 2D example --------
    /*point a0(2), a1(2), a2(2);
    a0.setCoordinate(0, 0.0);
    a0.setCoordinate(1, 0.0);
    
    a1.setCoordinate(0, 10.0);
    a1.setCoordinate(1, 0.0);

    a2.setCoordinate(0, 0.0);
    a2.setCoordinate(1, 5.0);
    std::vector<point> points = {a0, a1, a2};*/
    std::vector<double> c1 = {0.0, 0.0,1.0};
    std::vector<double> c2 = {10.0,0.0,1.0};
    std::vector<double> c3 = {1.0,2.0,1.0};
    
    point a0(c1), a1(c2), a2(c3);
    
    std::vector<point> points = {a0, a1, a2};
    Triangle T(points);

    Json::StreamWriterBuilder writer;
    std::string jsonString = Json::writeString(writer, T.dump2json());

    
    std::cout << "The area of your triangle is: " << T.getArea() << std::endl;
    std::cout << "The perimeter of your triangle is: " << T.getPerimeter() << std::endl;

    std::cout << jsonString << std::endl;

    // Pointers --------------------------------------------------------
    /*double area = T.getArea();
    double *area_ptr = &area;
    std::cout << "Pointer of area: " << area_ptr << std::endl;
    std::cout << "reference: " << &area << std::endl;
    std::cout << "value of area pointer: " << *area_ptr << std::endl;
    area = 5;
    std::cout << "Pointer of area after change: " << area_ptr << std::endl;
    std::cout << "value of area pointer after change: " << *area_ptr << std::endl;*/

    return 0;
}