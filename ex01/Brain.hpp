#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <vector>

class Brain
{
	public:
		Brain();
		Brain(const Brain& copy);
		~Brain();

		Brain& operator=(const Brain& other);

		void setIdeas(int i, const std::string&);
		std::string getIdeas(int i) const;


	private:
		std::string _ideas[100];
};

#endif
