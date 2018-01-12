/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Text.hpp
 * Author: Ronen Gilead-Raz <ronengi@gmail.com>
 *
 * Created on January 12, 2018, 12:41 AM
 */

#ifndef TEXT_HPP
#define TEXT_HPP


#include <gtkmm/drawingarea.h>
#include "Shape.hpp"


namespace My_gtk3 {

    class Text : public Shape {
    public:
        Text() = delete;
        Text(std::string msg);
        Text(std::string msg, Point tl);
        Text(std::string msg, Point tl, std::string ffamily, Pango::Weight fweight);
        using Shape::set_color;
        void draw(const Cairo::RefPtr<Cairo::Context>& cr, Gtk::DrawingArea& area, double width, double height) const override;
    private:
        std::string message;
        std::string font_family;
        Pango::Weight font_weight;
    };

} // namespace My_gtk3


#endif /* TEXT_HPP */
