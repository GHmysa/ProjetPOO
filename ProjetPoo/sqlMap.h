#pragma once
namespace NS_sql_Map{
	ref class sqlMap
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
	public:
		System::String^ Select(System::String^);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
	};
}


