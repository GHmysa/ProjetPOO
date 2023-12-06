#include "sqlMap.h"
System::String^ NS_sql_Map::sqlMap::Select(System::String^ tableName)
{
	return "SELECT * FROM [Projet].[dbo].["+tableName+"]";
}
System::String^ NS_sql_Map::sqlMap::sqlMap::Insert(void)
{
	return "";
}
System::String^ NS_sql_Map::sqlMap::sqlMap::Delete(void)
{
	return "";
}
System::String^ NS_sql_Map::sqlMap::sqlMap::Update(void)
{
	return "";
}
