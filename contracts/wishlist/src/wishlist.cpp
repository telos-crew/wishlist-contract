#include "../include/wishlist.hpp"

ACTION wishlist::auth(string nonce)
{
    //authenticate
    require_auth(creator);
}
