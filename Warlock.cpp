#include "Warlock.hpp"

Warlock::Warlock(std::string const &s1, std::string const &s2) : name(s1), title(s2) {
  std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
  std::cout << this->name << ": My job here is done!\n";
}

std::string const &Warlock::getName() const { return (this->name);}
std::string const &Warlock::getTitle() const { return (this->title);}

void Warlock::setTitle(std::string const &title) { this->title = title;}

void Warlock::introduce() const {
  std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void Warlock::learnSpell(ASpell *spell) {
  this->spells.insert(std::make_pair(spell->getName(), spell));
}

void Warlock::forgetSpell(std::string const &spell) {
  this->spells.erase(spell);
}

void Warlock::launchSpell(std::string const &spell, ATarget const &target) {
  if (this->spells.find(spell) != this->spells.end())
    this->spells[spell]->launch(target);
}