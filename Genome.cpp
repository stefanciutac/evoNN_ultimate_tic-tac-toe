//
// Created by stefanc on 23/12/2025.
//

#include "Genome.h"

namespace G
{
    Genome::Genome(std::vector<int> c)
        : configuration(c)
    {
        for (size_t i = 1; i < configuration.size(); i++)  // populates the weights and biases vectors randomly
        {
            weights.push_back(Eigen::MatrixXd::Random(configuration.at(i), configuration.at(i-1)));
            biases.push_back(Eigen::MatrixXd::Random(configuration.at(i), 1));
        }
    }

    Eigen::MatrixXd Genome::get_weights(int layer)
    {
        return weights.at(layer);
    }

    std::vector<Eigen::MatrixXd> Genome::get_weights()
    {
        return weights;
    }

    Eigen::MatrixXd Genome::get_biases(int layer)
    {
        return biases.at(layer);
    }

    std::vector<Eigen::MatrixXd> Genome::get_biases()
    {
        return biases;
    }
} // G