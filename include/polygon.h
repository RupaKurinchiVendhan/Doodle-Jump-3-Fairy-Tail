#ifndef __POLYGON_H__
#define __POLYGON_H__

#include "vector.h"
#include "list.h"

/**
 * Computes the area of a polygon.
 *
 * @param polygon the list of vertices that make up the polygon,
 * listed in a counterclockwise direction. There is an edge between
 * each pair of consecutive vertices, plus one between the first and last.
 * @return the area of the polygon
 */
double polygon_area(list_t *polygon);

/**
 * Computes the center of mass of a polygon.
 *
 * @param polygon the list of vertices that make up the polygon,
 * listed in a counterclockwise direction. There is an edge between
 * each pair of consecutive vertices, plus one between the first and last.
 * @return the centroid of the polygon
 */
vector_t polygon_centroid(list_t *polygon);

/**
 * Translates all vertices in a polygon by a given vector.
 * Note: mutates the original polygon.
 *
 * @param polygon the list of vertices that make up the polygon
 * @param translation the vector to add to each vertex's position
 */
void polygon_translate(list_t *polygon, vector_t translation);

/**
 * Rotates vertices in a polygon by a given angle about a given point.
 * Note: mutates the original polygon.
 *
 * @param polygon the list of vertices that make up the polygon
 * @param angle the angle to rotate the polygon, in radians.
 * A positive angle means counterclockwise.
 * @param point the point to rotate around
 */
void polygon_rotate(list_t *polygon, double angle, vector_t point);

/**
 * Makes a rectangle.
 * 
 * @param bottom_left the bottom left corner's coordinates
 * @param width the width
 * @param height the height
 * @return a newly allocated list_t of points representing the rectangle
 */
list_t *make_rectangle(vector_t bottom_left, double width, double height);

/**
 * Makes a circle.
 * 
 * @param radius the radius of the circle
 * @return a newly allocated list_t of points representing the circle
 */
list_t *make_circle(double radius);

#endif // #ifndef __POLYGON_H__
