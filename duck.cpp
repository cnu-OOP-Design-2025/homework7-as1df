#include "duck.h"

/* TODO */
void Duck::performFly(){
    flyBehavior -> fly();
}
/* TODO */
void Duck::performQuack(){
    quackBehavior -> quack();
}
/* TODO */
void Duck::setFlyBehavior(FlyBehavior* fb){
    this -> flyBehavior = fb;
}
/* TODO */
void Duck::setQuackBehavior(QuackBehavior* qb){
    this -> quackBehavior = qb;
}


/* TODO */
MallardDuck::MallardDuck() {
    this -> setFlyBehavior(new FlyWithWings());
    this -> setQuackBehavior(new Quack());
}
/* TODO */
RedheadDuck::RedheadDuck() {
    this -> setFlyBehavior(new FlyWithWings());
    this -> setQuackBehavior(new Quack());
}
/* TODO */
RubberDuck::RubberDuck() {
    this -> setFlyBehavior(new FlyNoWay());
    this -> setQuackBehavior(new Squeak());
}
/* TODO */
DecoyDuck::DecoyDuck() {
    this -> setFlyBehavior(new FlyNoWay());
    this -> setQuackBehavior(new MuteQuack());
}
/* TODO */
ModelDuck::ModelDuck() {
    this -> setFlyBehavior(new FlyNoWay());
    this -> setQuackBehavior(new MuteQuack());
}