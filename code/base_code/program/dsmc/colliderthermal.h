#pragma once
#include <colliderbase.h>

class ColliderThermal : public ColliderBase
{
public:
    ColliderThermal(double sqrt_wall_temp_over_mass_);
    virtual void collide(Random *rnd, data_type *v_in, float *normal_vector, float *tangent_vector_1, float *tangent_vector_2, bool print_details=false);
};
