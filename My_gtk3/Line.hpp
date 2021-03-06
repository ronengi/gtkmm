/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Line.hpp
 * Author: Ronen Gilead-Raz <ronengi@gmail.com>
 *
 * Created on January 9, 2018, 1:39 AM
 */

#ifndef LINE_HPP
#define LINE_HPP

#include "Shape.hpp"

namespace My_gtk3 {

    class Line : public Shape {
    public:
        Line(Point p1, Point p2);
        void draw_specific(const Cairo::RefPtr<Cairo::Context>& cr, Gtk::DrawingArea& area, double width, double height) const override;
    };

} // namespace My_gtk3

#endif /* LINE_HPP */
