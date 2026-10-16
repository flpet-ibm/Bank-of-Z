---
name: db2-object-catalog
description: Use when the user asks to list, search, inspect, or describe Db2 database objects (schemas, tables, views, columns, indexes, aliases) using the JDBC MCP server.
---

# Db2 Object Catalog Inspector

Follow these steps to discover, list, or inspect Db2 database objects using the connected JDBC MCP server.

## Step 1 — Determine the Target Scope

Analyze the user's request to identify:
1. **Target Object Type:** Schemas, Tables, Views, Columns, Indexes, or Aliases.
2. **Schema Filter:** Specific schema (e.g., `BANKZ`, `SYSIBM`) or all schemas.
3. **Name Filter / Substring:** Specific table pattern or search term.

If the schema or search term is ambiguous, use `ask_followup_question` or list the available schemas first.

---

## Step 2 — Select the Appropriate MCP Tool or Query

### A. Listing Schemas
Use the MCP schema discovery tool:
- Call `mcp__jdbc__jdbc_get_schemas` to retrieve all schemas in the database.

### B. Listing Tables and Views within a Schema
- **Direct Table Listing:** Call `mcp__jdbc__jdbc_get_tables` with parameter `schema: "<SCHEMA_NAME>"`.
- **Filtering by Table Name Substring:** Call `mcp__jdbc__jdbc_filter_table_names` with `q: "<SUBSTRING>"` and optional `schema: "<SCHEMA_NAME>"`.

### C. Describing Table Structure (Columns & Types)
- Call `mcp__jdbc__jdbc_describe_table` with `schema: "<SCHEMA_NAME>"` and `table: "<TABLE_NAME>"`.

### D. Advanced Catalog Queries (Db2 for z/OS & LUW System Catalog)
When metadata beyond standard tables/columns is needed (indexes, foreign keys, table spaces, aliases), use `mcp__jdbc__jdbc_execute_query_md` with standard Db2 catalog SQL:

#### 1. List Tables and Views with Types:
```sql
SELECT CREATOR, NAME, TYPE, DBNAME, TSNAME, COLCOUNT 
FROM SYSIBM.SYSTABLES 
WHERE CREATOR = '<SCHEMA_NAME>' 
ORDER BY NAME;
```
*(Note: For Db2 LUW, use `SYSCAT.TABLES` where `TABSCHEMA = '<SCHEMA_NAME>'`)*

#### 2. List Indexes for a Table:
```sql
SELECT TBNAME, NAME AS INDEX_NAME, UNIQUERULE, COLCOUNT 
FROM SYSIBM.SYSINDEXES 
WHERE TBCREATOR = '<SCHEMA_NAME>' AND TBNAME = '<TABLE_NAME>';
```

#### 3. List Foreign Keys:
```sql
SELECT RELNAME, REFTBNAME, DELETRULE, UPDATERULE 
FROM SYSIBM.SYSRELS 
WHERE CREATOR = '<SCHEMA_NAME>' AND TBNAME = '<TABLE_NAME>';
```

---

## Step 3 — Format and Present Findings

Present the results cleanly to the user:
- Use Markdown tables for lists of tables, schemas, or columns.
- Group tables by schema or object type (`T` = Table, `V` = View, `A` = Alias).
- Highlight key attributes such as Primary Keys, Nullability, Data Types, and Record/Column counts.
