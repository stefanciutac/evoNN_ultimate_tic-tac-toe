//
// Created by stefanc on 23/12/2025.
//

#include <cmath>
#include <Eigen/Dense>

#include "NN.h"
#include "Genome.h"

namespace N
{
    NN::NN(G::Genome g)
        : parameters(g)
    {
    }

    void NN::set_genome(G::Genome genome)  // sets the parameters of the nn according to the genome passed to it
    {
        parameters = genome;
    }

    Eigen::MatrixXd NN::relu_activation(Eigen::MatrixXd layer)  // applies the ReLU activation function to every element
    {
        return layer.cwiseMax(0.0);
    }

    Eigen::MatrixXd NN::forward_propagate(Eigen::MatrixXd inputs)  // outputs final layer values after forward-prop
    {
        Eigen::MatrixXd previous_layer = inputs;
        for (size_t i = 0; i < parameters.get_weights().size(); i++)
        {
            previous_layer = relu_activation(parameters.get_weights(i) * previous_layer + parameters.get_biases(i));
        }
        return previous_layer;
    }
} // N