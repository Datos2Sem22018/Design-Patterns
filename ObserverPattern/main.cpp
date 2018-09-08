#include <iostream>
#include <vector>
using namespace std;

class Subject;

/*
 * Observer
 * defines an updating interface for objects that should be notified
 * of changes in a subject
 */
class Observer {
public:
  virtual int getState() = 0;
  virtual void update(Subject *subject) = 0;
};

/*
 * Concrete Observer
 * stores state of interest to ConcreteObserver objects and
 * sends a notification to its observers when its state changes
 */
class ConcreteObserver : public Observer {
public:
  ConcreteObserver(int state)
    : observer_state(state) {}

  int getState() {
    return observer_state;
  }

  void update(Subject *subject);

private:
  int observer_state;
};

/*
 * Subject
 * knows its observers and provides an interface for attaching
 * and detaching observers
 */
class Subject {
public:
  void attach(Observer *observer) {
    observers.push_back(observer);
  }

  void detach(int index) {
    observers.erase(observers.begin() + index);
  }

  void notify() {
    for (unsigned int i = 0; i < observers.size(); i++) {
      observers.at(i)->update(this);
    }
  }

  virtual int getState() = 0;
  virtual void setState(int s) = 0;

private:
  vector<Observer *> observers;
};

/*
 * Concrete Subject
 * stores state that should stay consistent with the subject's
 */
class ConcreteSubject : public Subject {
public:
  int getState() {
    return subject_state;
  }

  void setState(int s) {
    subject_state = s;
  }

private:
  int subject_state;
};

void ConcreteObserver::update(Subject *subject) {
  observer_state = subject->getState();
  cout << "Observer state updated." << endl;
}


int main()
{
  ConcreteObserver observer1(1);
  ConcreteObserver observer2(4);

  cout << "Observer 1 state: " << observer1.getState() << endl;
  cout << "Observer 2 state: " << observer2.getState() << endl;

  //Creates a new Subject to update the states
  //and define the observes to update
  Subject *subject = new ConcreteSubject;
  subject->attach(&observer1);
  subject->attach(&observer2);

  //Define the new subject "10"
  subject->setState(10);
  subject->notify();

  cout << "Observer 1 state: " << observer1.getState() << endl;
  cout << "Observer 2 state: " << observer2.getState() << endl;

  return 0;
}