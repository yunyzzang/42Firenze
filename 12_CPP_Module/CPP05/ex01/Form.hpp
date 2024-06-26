#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string name_;
	bool signed_;
	const int gradeSign_;
	const int gradeExecute_;
public:
	Form();
	Form(std::string name, const int &gradeSign, const int &gradeExecute);
	Form(const Form &copy);
	Form& operator=(const Form &copy);
	~Form();

	std::string getName() const;
	bool getSigned() const;
	int getGradeSign() const;
	int getGradeExecute() const;

	void beSigned(Bureaucrat& br);

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what () const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif
