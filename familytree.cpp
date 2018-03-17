#include <iostream>
#include <memory>
#include <algorithm>

#include "familytree.hh"





using namespace std;


Familytree::Familytree()
{

}

Familytree::~Familytree()
{

}

// Luodaan vectori henkilot johon tallennetaan Person struckteja (henkilo)





void Familytree::addNewPerson(const std::string &id, const int &height, std::ostream &output) {

    // Luodaan henkilo
    shared_ptr<Person> henkilo(new Person);

    // Määritellään id ja pituus
    henkilo->id_ = id;
    henkilo->height_ = height;

    // Lisätään henkilö map:n

    henkilot.insert( { id, henkilo} );

    //henkilot.push_back(henkilo);

}








void Familytree::printPersons(std::ostream &output) const {
    for ( auto henkilo : henkilot ) {
        cout << henkilo.first << " " << henkilo.second->height_ << " " << &henkilo.second->id_ << endl;
    }


    for ( auto i : henkilot ) {
        cout << i.second->id_ << endl;
        for ( auto b : i.second->parents_ ) {
            cout << b << endl;
        }
    }

}

void Familytree::addRelation(const std::string &child, const std::vector<std::string> &parents, std::ostream &output) {


    cout << "PAALAPSI: " << ";" << child << ";" << &child << endl;

    auto it = henkilot.find(child);

    if ( it != henkilot.end() ) {

        for ( auto a : parents ) {
            cout << henkilot[a] << endl;

            henkilot[child]->parents_(henkilot[a]);

        }
    }












    /*


    for ( auto lapsi : henkilot ) {
        if (not lapsi->id_.compare(child) ) {
            for ( auto henkilo : henkilot ) {
                for ( auto vanhempi : parents ) {
                    if ( henkilo->id_.compare(vanhempi) ) {

                    } else {
                    cout << "henkilo: "          << henkilo          << ";&henkilo;"          << &henkilo         <<
                            ";henkilo->id_;"     << henkilo->id_     << ";&henkilo->id_;"     << &henkilo->id_    <<
                            ";henkilo->height_;" << henkilo->height_ << ";&henkilo->height_;" << &henkilo->height_ <<
                            endl;


                    //lapsi->parents_.push_back(&henkilo->id_);
                    //lapsi->parents_[0] = &henkilo->id_;


                    //std::vector<Person*> parents_{nullptr, nullptr};

                    lapsi->parents_.push_back(nullptr);
                    }
                }
            }
        }
    }

    */

/*

    if ( find(henkilot.begin(), henkilot.end(), apu_pointer) != henkilot.end() ) {
        cout << "asd" << endl;
    }

    */

/*

    if ( find(henkilot.begin(), henkilot.end(), lapsi) != henkilot.end() ) {
        cout << "asd" << endl;
    }
*/


    /*

    for ( auto i : parents ) {
        cout << "PAAHUOLTAJA: " << ";" << i << ";" << &i << endl;

        cout << henkilot.at();

        for ( auto henkilo : henkilot ) {
            henkilo->parents_.at(0) = nullptr;

            //cout << henkilo->id_ << endl;
            //henkilo->parents_.push_back(i);
        }


    }

    */


    cout << "---------------------------" << endl;

}

void Familytree::printChildren(const std::string &id, std::ostream &output) const
{

}

void Familytree::printParents(const std::string &id, std::ostream &output) const
{

}

void Familytree::printSiblings(const std::string &id, std::ostream &output) const
{

}

void Familytree::printCousins(const std::string &id, std::ostream &output) const
{

}

void Familytree::printTallestInLineage(const std::string &id, std::ostream &output) const
{

}

void Familytree::printShortestInLineage(const std::string &id, std::ostream &output) const
{

}

void Familytree::printGrandChildrenN(const std::string &id, const int n, std::ostream &output) const
{

}

void Familytree::printGrandParentsN(const std::string &id, const int n, std::ostream &output) const
{

}
