#ifndef COMMANDS_HPP
#define COMMANDS_HPP
#include <vector>
#include "struct.hpp"

namespace sukacheva
{
  double calculateTriangleArea(Point p1, Point p2, Point p3);
  double calculatePolygonArea(std::vector<Point> polygon, size_t n);
  double addArea(double area, Polygon applicant);

  void oddArea(const std::vector< Polygon >& allPolygons, std::ostream& out);
  void evenArea(const std::vector< Polygon >& allPolygons, std::ostream& out);
  void meanArea(const std::vector< Polygon >& allPolygons, std::ostream& out);
  void verticesArea(const std::vector< Polygon >& allPolygons, std::ostream& out, size_t vertices);

  void maxArea(const std::vector< Polygon >& allPolygons, std::ostream& out);
  void maxVertices(const std::vector< Polygon >& allPolygons, std::ostream& out);

  void minArea(const std::vector< Polygon >& allPolygons, std::ostream& out);
  void minVertices(const std::vector< Polygon >& allPolygons, std::ostream& out);

  void countEvenVertices(const std::vector< Polygon >& allPolygons, std::ostream& out);
  void countOddVertices(const std::vector< Polygon >& allPolygons, std::ostream& out);
  void countVertices(const std::vector< Polygon >& allPolygons, std::ostream& out, size_t vertices);

  void isRects(const std::vector< Polygon >& allPolygons, std::ostream& out);
  bool isRectangle(const Polygon& poly);

  void commandArea(const std::vector< Polygon >& allPolygons, std::istream& in, std::ostream& out);
  void commandMax(const std::vector< Polygon >& allPolygons, std::istream& in, std::ostream& out);
  void commandMin(const std::vector< Polygon >& allPolygons, std::istream& in, std::ostream& out);
  void commandCount(const std::vector< Polygon >& allPolygons, std::istream& in, std::ostream& out);
  void commandRects(const std::vector< Polygon >& allPolygons, std::istream& in, std::ostream& out);
}

#endif