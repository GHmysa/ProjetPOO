#include "sqlFunction.h"

NS_sql_Function::sqlFunction::sqlFunction(void)
{
	this->oConn = gcnew NS_sql_Conn::sqlConn();
	this->oSqlMap = gcnew NS_sql_Map::sqlMap();

}
System::Data::DataSet^ NS_sql_Function::sqlFunction::selectionnerToutesLesPersonnes(System::String^ dataTableName, System::String^ tableName)
{
	System::String^ sql;

	sql = this->oSqlMap->Select(tableName);
	return this->oConn->getRows(sql, dataTableName);
}