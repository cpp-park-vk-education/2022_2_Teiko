#include "../include/client.h"

Client::~Client() {
    delete _con;
}
