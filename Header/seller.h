#ifndef _SELLER_H_
#define _SELLER_H_

#include "head.h"

class Seller :public Account {
private:int type;
	   string name;
	   Date dob;
	   int phone;
	   string title;
public:
	Seller();
	void inputData(fstream& user_data);
	void outputData(fstream& fin);
	void viewProfile();
	void viewMenu(Database& account_list,int &switchS);// Store and execute function, pass in Database for function edit, search account
	int checkAccount();
	int checkName(const string& searchname);
	void editProfile();
	int Type();
	string Name();
	string getAddress();
	Date Dob();
	int Phone();
	void export_file(ofstream& fout);
};

#endif