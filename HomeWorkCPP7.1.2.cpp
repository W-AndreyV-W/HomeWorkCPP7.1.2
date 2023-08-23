#include <iostream>
#include "sql_select_query_builder.h"

int main()
{
    SqlSelectQueryBuilder query_builder;
    query_builder.AddColumns({ "name", "phone" });
    query_builder.AddFrom("students");
    query_builder.AddWhere({ { "id", "42" }, { "name", "John" } });

    std::cout << query_builder.BuildQuery() << std::endl;
}