#ifndef FITTING_H
#define FITTING_H

#include <string>
#include <vector>

// Base class for a Fitting
class Fitting {
public:
    std::string name;
    std::string sku1;
    std::string sku2;
    std::string type;
    double price;
    std::vector<std::string> threads;
    int considerFlag;

    Fitting(const std::string& sku1, const std::string& sku2, const std::string& name, double price, const std::string& type, int considerFlag);
    virtual ~Fitting() = default;
    virtual void print() const;
};

// Derived classes for specific fitting types
class StandardFitting : public Fitting {
public:
    StandardFitting(const std::string& sku1, const std::string& sku2, const std::string& name, double price, const std::string& type, int considerFlag, const std::vector<std::string>& threads);
    void print() const override;
};

class TeeFitting : public Fitting {
public:
    TeeFitting(const std::string& sku1, const std::string& sku2, const std::string& name, double price, const std::string& type, int considerFlag, const std::vector<std::string>& threads);
    void print() const override;
};

class NippleFitting : public Fitting {
public:
    double length;
    NippleFitting(const std::string& sku1, const std::string& sku2, const std::string& name, double price, const std::string& type, int considerFlag, double length);
    void print() const override;
};

class ValveFitting : public Fitting {
public:
    ValveFitting(const std::string& sku1, const std::string& sku2, const std::string& name, double price, const std::string& type, int considerFlag);
    void print() const override;
};

// Function to read fittings from a CSV file
std::vector<Fitting*> readFittingsFromCSV(const std::string& filename);

#endif // FITTING_H
