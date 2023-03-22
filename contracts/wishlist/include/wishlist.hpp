// Example contract that can create, update, and delete tasks.
//
// @author Awesome Developer Person
// @contract wishlist
// @version v1.1.0

#include <eosio/eosio.hpp>
#include <eosio/singleton.hpp>
#include <eosio/action.hpp>

using namespace std;
using namespace eosio;

CONTRACT wishlist : public contract
{
    public:

    wishlist(name self, name code, datastream<const char*> ds) : contract(self, code, ds) {};
    ~wishlist() {};

    //======================== task actions ========================

    //create a new task
    //auth: creator
    ACTION auth(string nonce);

};