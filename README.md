# quickBlocks

QuickBlocks is a collection of software libraries, applications, and tools that allow you to access Ethereum virtual machine (EVM) based blockchain data (a) more quickly, (b) with higher information content, and (c) in an fully decentralized way, (d) in a fully automated way, (e) in a fully zero maintenance way.

That's a mouthful. We'll break it down.

## More Quickly

We interact with the Ethereum node via the RPC interface to accumulate and cache block, transaction, receipt, and event log data. Prior to storing the data we do everything we can think of to make later retrieval of that data as quick as possible without losing sight of the fact that our solution is fully decentralized. Some of the optimizations we make are

1. attach receipts and logs to transactions
2. identify in-error transactions using the node's trace functionality
3. identify potentially-internal transactions
4. store the blocks optimized for quick, later retrieval

## More Informationally Rich

If given an ABI definition for a particular smart contract, QuickBlocks is able to decode all of the transactional data including generated event logs. Instead of dealing with 'hashes' and 'merkel roots' and 'sha3', the developer/user deals with the data in the very familiar language: that of their own smart contracts.

Instead of this:

You get this:

## Fully Decentralized

Unlike any other block chain scrapers you may find (such as http://etherscan.io), QuickBlocks is fully decentralized. The system interacts only with your local node. (Although, it can, if you wish, interact with any node). As a result, you could conceivably disconnect your machine from the Internet, and as long as the node was running, QuickBlocks would work. You wouldn't get fresh blocks, but QuickBlocks would still operate. That's what we mean by `decentralized`.

## Fully Automatic yet Customizable

The code necessary to provide the above mentioned richer data (i.e. data in the language of your own smart contract) is generated automatically (programmatically) from the ABI. A fully functional `c-callable static library` is created. At the same time, due to the fact that the generated code is C++, you can program it to do anything you like. See some examples (TODO).

## Fully Maintenance Free

Every smart contract, once deployed, is immutable. That means that the automatically generated C++ code is also immutable (if you want it to). You could literally automatically generate a data delivery layer for your smart contract that requires no further interaction. It can simply run forever, standing off-chain, but beside your smart contract, and deliver all your contact's data at high speed.

## Structure of the Project

1. [src](src) - source code for the QuickBlocks libraries, core applications, tools, and sample monitors.
2. bin - location of primary executables generated by QuickBlocks
3. docs - documentation
