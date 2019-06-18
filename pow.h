
#include "global.h"
#include "sha256.h"


class ProofOfWork
{
	public: 
			//vector to store transaction ids
			std::vector<uint64_t> transactions;

			//vector to store block ids
			std::vector<string> block_ledger;

			//Creates the current block id from transaction
			std::string createCurrentBlockId();

			//Initiates proof of work on the current transaction
			void proofOfWork();

			//Store the current transaction id to transactions vector
			void storeTransactions(uint64_t txn_id);

			//Validate a transaction to check if the transaction id is already been used
			bool validateTransaction(uint64_t txn_id);

			//Store the block ids to globalLedger file
			void dumpToFile(string curr_block_id);

			//Create a nounce string to be appended with challenge string
    		std::string addNounce(uint l , std::string charIndex);

			//Generates the challenge string 
		    std::string generateChallenge(uint64_t);

		    //Append the challenge string with the nounce
		    std::string attemptGenerate(string challenge); 
};
