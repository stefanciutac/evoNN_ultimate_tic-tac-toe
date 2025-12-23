#include <iostream>
#include <Eigen/Dense>
#include <ctime>
#include <cstdlib>

#include "Genome.h"
#include "NN.h"

int main()
{
    // performs forward-propagation with random inputs and random parameters (test program - will be removed)
    srand(time(0));
    G::Genome genome_1 = G::Genome({3, 5, 5, 3});
    N::NN nn = N::NN(genome_1);
    Eigen::MatrixXd inputs(3, 1);
    inputs.setRandom();

    std::cout << nn.forward_propagate(inputs) << std::endl;

    return 0;
}