#include <iostream>
#include <string>

using namespace std;
const long BOOT_ADDRESS = 0x123456;
const long BOOT_SECTOR = 0x345678;
const int SECTOR_SIZE = 0x9000;
class CPU 
{
public:
	void freeze() { cout << "freezing ..." << endl; }
	void jump(long position) { cout << "jumping ..." << endl;}
	void excute() { cout << "excuting ..." << endl;}
	
};

class HardDrive 
{
public:
	char* read(long lba, int size) { cout << "read ..." << endl;  return "harddrive: 1T";}
	
};

class Memory 
{
public:
    void load(long position, char *data) { cout << "load ..." << endl; }
};

class ComputerFacade 
{
private:
	CPU *processor;
	Memory *ram;
	HardDrive *hd;
public:
	ComputerFacade()
	{
		processor = new CPU();
		ram = new Memory();
		hd = new HardDrive();
	}
    void start() 
	{
		cout << ".....start ..." << endl;
		processor->freeze();
		ram->load(BOOT_ADDRESS, hd->read(BOOT_SECTOR, SECTOR_SIZE));
		processor->jump(BOOT_ADDRESS);
		processor->excute();
		cout << ".....over ..." << endl;		
	}
	
	~ComputerFacade()
	{
		delete processor;
		delete ram ;
		delete hd;
	}
};

int main () 
{
#if 0
	ComputerFacade *computer = new ComputerFacade(); 
	computer->start();
	delete computer;
#else
	ComputerFacade computer; 
	computer.start();
#endif
}
