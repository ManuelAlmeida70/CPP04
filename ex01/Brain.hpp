#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain& copy);
		~Brain();

		Brain& operator=(const Brain& other);

		void setIdeas(size_t i, const std::string&);
		std::string getIdeas(size_t i) const;


	private:
		std::string _ideas[100];
};

#endif
