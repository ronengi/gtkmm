/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "Open_polyline.hpp"

namespace My_gtk3 {

    Open_polyline::Open_polyline(std::initializer_list<Point> lst)
        : Shape(lst)
    { }

    void Open_polyline::draw_specific(const Cairo::RefPtr<Cairo::Context>& cr, Gtk::DrawingArea& area,  double width, double height) const {
        int np = number_of_points();
        if(np < 2)
            return;
        cr->move_to(point(0).x, point(0).y);
        for(int i = 1; i < np; ++i )
            cr->line_to(point(i).x, point(i).y);
        cr->stroke();
    }

} // namespace My_gtk3
