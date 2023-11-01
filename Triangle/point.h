#ifndef _POINT_
#define _POINT_

#include <vector>
#include <cstring>
#include <json/value.h>
#include <cmath>

struct point{
    
    point(std::vector<double> &coordinates): m_coordinates(coordinates){
        m_dimension = coordinates.size(); }
        
    point(size_t dim): m_dimension(dim){
        for(size_t i = 0; i < dim; ++i)
            m_coordinates.push_back(0.0);
    }

    // set x y z coordinate based on i
    void setCoordinate(size_t i, double val){
        m_coordinates[i] = val;
    }
    
    // comparison of two points
    bool operator==(point comOp) const{
        return m_coordinates == comOp.m_coordinates && m_dimension == comOp.m_dimension;
    }

    // Adding two points
    point operator+(point addOp) const{
        point result(m_dimension);
        for(size_t i = 0; i < m_dimension; i++)
            result.m_coordinates[i] = m_coordinates[i] + addOp.m_coordinates[i];
        return result;
    }
    
    // Subtracting two points
    point operator-(point addOp) const{
        point result(m_dimension);
        for(size_t i = 0; i < m_dimension; i++)
            result.m_coordinates[i] = m_coordinates[i] - addOp.m_coordinates[i];
        return result;
    }

    // cross products of two points
    point crossProduct(point addOp) const{
        if (m_dimension != addOp.m_dimension)
            throw std::runtime_error("Dimension must match");
        if (m_dimension <= 2)
            throw std::runtime_error("Dimension is not supported");
        
        point result(m_dimension);
        result.m_coordinates[0] = m_coordinates[1]*addOp.m_coordinates[2] - addOp.m_coordinates[1]*m_coordinates[2];
        result.m_coordinates[1] = m_coordinates[2]*addOp.m_coordinates[0] - m_coordinates[0]*addOp.m_coordinates[2];
        result.m_coordinates[2] = m_coordinates[0]*addOp.m_coordinates[1] - addOp.m_coordinates[0]*m_coordinates[1];

        return result;
    }
    // Dot products of two points
    double dot(point addOpt) const{
        if (addOpt.m_dimension != m_dimension)
            throw std::runtime_error("Dimensions must match");
        double result = 0.0;
        for (size_t i = 0; i < addOpt.m_coordinates.size(); ++i)
            result += addOpt.m_coordinates[i] * m_coordinates[i];
        return result;
    }

    // Norm of each point
    double norm(){ 
        double result = 0.0;
        for (auto c : m_coordinates)
            result += c * c;
        return sqrt(result);}

    double getCoordinate(size_t i) const { return m_coordinates[i];}
    size_t getDimension() const { return m_dimension;}
    
private:

    std::vector<double> m_coordinates; // coordinate value of point
    size_t m_dimension; // dimension of point
};
#endif