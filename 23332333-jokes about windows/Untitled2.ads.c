//Here is the source code for Micosoft Windows Vista :P


/**
* (c) 2007 Misrocoft Corp.
* All rights reserved
*/

#include


class WindowsVista extends WindowsXP implements Nothing
{
boolean beta = true;

WindowsVista()
{
checkIfHardwareIsCompatible();
/** Ok. The idiot seems to have some high end hardware.
* Lets make his life miserable
*/

runInternetExplorer7();
}


void checkIfHardwareIsCompatible()
{
/*
* Lets make sure that half the world cannot run this OS while
* we fix all the bugs
*/
if((installedRam < 2GB) && (processorSpeed < 4GHz))
{
MessageBox("Your System does not seem to be capable of running zero err.. aero glass and the like. Please upgrade the hardware and try again.");
WaitTillPoorGuyReadsTheMessage();
bsod();
}
}


void runInternetExplorer7()
{
IE7 ie7 = new IE7();

ie7.featureSet = firefox_features
+ safari_features
+ opera_features + lot_of_bugs;

ie7.run();
WaitWhileThePoorGuyLooksAtTheNewInterface();
bsod();

}

/**
* return true when product is stable.
*/
boolean isReadyForRelease()
{
int lastReportedNumberOfBugs = 3457888E+08
int totalNoOfNewFeatures = 600;
boolean readyForRelease = false;


sendFeatureSetToMarketingGuys();

while (marketingGuysAreAtIt)
{
Thread fixBugsWhileInBeta = new fixBugsWhileInBeta();

fixBugsWhileInBeta.assignProgrammer(oneBug);
fixBugsWhileInBeta.start();

if(programmersAreNotSufficient)
{
hireFromXBOXDivision();
}

if(aMonthHasPassed)
{
announce("Windows Vista Consumer Version Will be delayed by one more month");
dropAFewFeatures();
totalNoOfNewFeatures = totalNoOfNewFeatures - 10;
}

/** Boss strictly told me that we should have no more than * 7000 bugs
* when we ship the item
*/
if(lastReportedNumberOfBugs-- == 7000)
return true;

}

}

int main(void)
{
WindowsVista vista = new WindowsVista();
vista.runWindowsXP();
return plentyOfMoneyforBilly;
}

}

/*
这就是我今天在国外的网站上偶然看到的。
就是这两个网站：
http://www.adelaider.com/?thread=6909
http://forums.invisionpower.com/lofiversion/index.php/t230440.html
*/
