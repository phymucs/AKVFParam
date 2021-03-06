#ifndef ENERGY_H
#define ENERGY_H

#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <map>
#include <set>
#include <vector>


class Energy {

public:
  virtual double compute_energy(const Eigen::MatrixXd& V, const Eigen::MatrixXi& F,
                                Eigen::MatrixXd& uv) = 0;

  virtual void compute_grad(const Eigen::MatrixXd& V, const Eigen::MatrixXi& F,
                            Eigen::MatrixXd& uv, Eigen::MatrixXd& grad) = 0;

  int norm = 2;
};

#endif // ENERGY_H
