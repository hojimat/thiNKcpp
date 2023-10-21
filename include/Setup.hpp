#ifndef PARAMS_HPP
#define PARAMS_HPP

struct Params {
    // TASK RELATED
    short p; // population / number of agents
    short n; // number of tasks per agent
    short k; // number of internal coupled bits
    short c; // number of external coupled bits
    short s; // number of externally coupled agents
    float rho; // correlation between sets of tasks
    // TIME RELATED
    short t; // number of periods
};

#endif // PARAMS_HPP