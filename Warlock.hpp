#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock
{
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const &other);
		Warlock &operator=(Warlock const &other);
		
		std::map<std::string, ASpell*> spells;
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(std::string const &title);

		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spell);
		void launchSpell(std::string const &spell, ATarget const &target);
};
