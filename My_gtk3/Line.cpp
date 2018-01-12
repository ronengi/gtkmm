/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Line.hpp"

namespace My_gtk3 {

    Line::Line(Point p1, Point p2) {
        add(p1);
        add(p2);
        default_color();
        to_fill = false;
    }

    void Line::draw(const Cairo::RefPtr<Cairo::Context>& cr, Gtk::DrawingArea& area, double width, double height) const {
        cr->save();
        cr->set_line_width(1.0);
        cr->set_source_rgb(color().r, color().g, color().b);
        cr->restore();
    }

} // namespace My_gtk3