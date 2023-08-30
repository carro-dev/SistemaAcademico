#pragma once
#include <iostream>

namespace DataMySql {
	class DataHandler {
	public:
		static void conexionMySQl();
		static bool login(const std::string&,const std::string& password);
	};
}


