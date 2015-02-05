#ifndef LTADD_H
#define LTADD_H

#include "tool/Tool.h"

class LTAdd : public Tool
{
public:
    void action(Model *model, QPoint last_position, QPoint current_position, float distance, float x_rot, float y_rot, float z_rot);
};

#endif // LTADD_H