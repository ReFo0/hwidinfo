#include <Windows.h>
#include <iostream>
#include <consoleapi2.h>

auto serials() -> bool
{
	system("\n\nwmic diskdrive get serialnumber");
	system("\nwmic bios get serialnumber");
	system("\nwmic cpu get serialnumber");
	system("\nwmic baseboard get serialnumber");
	system("\nwmic memorychip get serialnumber");
	system("\nwmic desktopmonitor get Caption, MonitorType, MonitorManufacturer, Name");
	system("\ngetmac");
	std::cout << "\nControl Finshed.\n";
	std::cin.get();
	return 0;

}

auto main() -> int {
	serials();
}
