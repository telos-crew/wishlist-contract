# EOSIO Contract Template
A template repository for EOSIO contracts.

## Dependencies

* eosio.cdt
* nodeos, cleos, keosd
* nodejs (tests)

## Setup

To begin, navigate to the project directory: `eosio-contract-template/`

    mkdir build && mkdir build/wishlist

    chmod +x build.sh

    chmod +x deploy.sh

The `wishlist` contract has already been implemented and is build-ready.

## Build

    ./build.sh wishlist

## Deploy

    ./deploy.sh wishlist account-name { mainnet | testnet | local }

## Test

    ./test.sh wishlist

