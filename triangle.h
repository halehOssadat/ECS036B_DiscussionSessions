#ifndef _TRIANGLE_
#define _TRIANGLE_

#include "point.h"

struct Triangle{
    Triangle(const std::vector<point> &points): m_points(points){
        edges();
        std::cout << "triggered" << std::endl;
        m_area = computeArea();
        m_perimeter = computePerimeter();
    }   
    
    // Compute the edge length of triangles
    void edges(){
        edgeLengths.resize(m_points.size());
        for (size_t i = 0; i < m_points.size(); ++i)
            for (size_t j = i + 1; j < m_points.size(); ++j){                
               point p = m_points[j] - m_points[i];
               edgeLengths.push_back(p.norm());
            }
                
    }
    
    // Compute the area of triangle
    double computeArea(){
        if (m_points.size() < 3)
            return 0.0;
        else if (m_points[0].getDimension() == 2){
            point p1 = m_points[1] - m_points[0];
            point p2 = m_points[2] - m_points[0];
            return 0.5 * (p1.getCoordinate(0) * p2.getCoordinate(1) - p1.getCoordinate(1) * p2.getCoordinate(0));}
        else{
            point p1 = m_points[1] - m_points[0];
            point p2 = m_points[2] - m_points[0];

            return 0.5 * (p1.crossProduct(p2)).norm();
        }    
    } 

    // Compute the perimeter of the triangle
    double computePerimeter() {
        double result = 0.0;
        for (auto e : edgeLengths){
            result += e;
        }
        return result;
    }

    // Function for printing the area and perimeter using json::value
    Json::Value dump2json(){
        Json::Value result;
        result["Area"] = m_area;
        result["Perimeter"] = m_perimeter;
        return result;
    }

    double getArea() const { return m_area;}
    double getPerimeter() const { return m_perimeter;}


private:
    std::vector<point> m_points;
    std::vector<double> edgeLengths;
    double m_area;
    double m_perimeter;
};
#endif