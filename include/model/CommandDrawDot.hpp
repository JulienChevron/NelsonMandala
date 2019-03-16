//
// Created by chopinet on 13/03/19.
//

#ifndef MANDALA_COMMANDDRAWINGPOINT_HPP
#define MANDALA_COMMANDDRAWINGPOINT_HPP

#include "model/CommandDraw.hpp"

class CommandDrawDot : public CommandDraw {
public:
    CommandDrawDot(const QPoint &coord, const QPen &pen);

    void draw(QPainter &painter) const override;

    void undo(QPainter &painter) override;

private:
    const QPoint &coord;
    const QPen &pen;
};


#endif //MANDALA_COMMANDDRAWINGPOINT_HPP
