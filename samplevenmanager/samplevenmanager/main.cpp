
#include <oadr/manager/VENManager.h>

#include "VENImpl.h"

#include "easylogging++.h"

#include <ostream>
#include <csignal>

shared_ptr<IVENManager> venManager;

string vtnURL;
string venName;

VENManagerConfig config;

bool logToStdout = true;

using namespace samplevenmanager;
using namespace std;

INITIALIZE_EASYLOGGINGPP

/********************************************************************************/

void signalHandler (int signum)
{
	venManager->stop();
}

/********************************************************************************/
void printUsage()
{
	cout << "Usage: " << endl;
	cout << "\n    ./venmgr <vtn url> <ven name> <defaultOpt in/out> true" << endl;
	cout << "Ex. ./venmgr http(s)://123.456.78.90:8080/ TH_VEN in true\n" << endl;
}

/********************************************************************************/

bool parseParams(int argc, char **argv)
{
	if (argc < 4)			// Support default opt argument.
		return false;

	config.vtnURL = argv[1];
	config.venName = argv[2];

	if (strcmp(argv[3], "in") == 0)
		config.optType = oadr2b::ei::OptTypeType::optIn;
	else
		config.optType = oadr2b::ei::OptTypeType::optOut;

	if (argc == 5 && strcmp(argv[4], "false") == 0)
		logToStdout = false;

	return true;
}

/********************************************************************************/

int main(int argc, char **argv)
{
	if (!parseParams(argc, argv))
	{
		printUsage();
		return 0;
	}

	shared_ptr<VENImpl> venImpl(new VENImpl(config.venName, logToStdout));

	config.services.eventService = venImpl.get();
	config.services.oadrMessage = venImpl.get();
	config.services.reportService = venImpl.get();
	config.services.exceptionService = venImpl.get();

	venManager = shared_ptr<IVENManager>(VENManager::init(config));

	signal(SIGINT, signalHandler);

	venManager->run();

	return 0;
}
