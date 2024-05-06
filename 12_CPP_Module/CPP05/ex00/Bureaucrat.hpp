#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat {
private:
    std::string name_;
    int grade_;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat& operator=(const Bureaucrat &copy);
    ~Bureaucrat();
    
    std::string getName() const;
    int getGrade() const;
    void increment(int amount);
    void decrement(int amount);

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char *what () const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br);

#endif
