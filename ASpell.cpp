#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(std::string const &s1, std::string const &s2) :name(s1), effects(s2) {}
ASpell::ASpell(ASpell const &o) {
  *this = o;
}
ASpell &ASpell::operator=(ASpell const &o) {
  if (this != &o) {
    this->name = o.name;
    this->effects = o.effects;
  }
  return (*this);
}
ASpell::~ASpell() {}
std::string const &ASpell::getName() const { return this->name; }
std::string const &ASpell::getEffects() const { return this->effects; }
void ASpell::launch(ATarget const &target) const {
  target.getHitBySpell((*this));
}