#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(std::string const &s1) :type(s1) {}
ATarget::ATarget(ATarget const &o) { *this = o; }
ATarget &ATarget::operator=(ATarget const &o) {
  if (this != &o) {
    this->type = o.type;
  }
  return (*this);
}
ATarget::~ATarget() {}
std::string const &ATarget::getType() const { return this->type; }
void ATarget::getHitBySpell(ASpell const &spell) const {
  std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}