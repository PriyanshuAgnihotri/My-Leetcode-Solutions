/* Write your PL/SQL query statement below */
# Write your MySQL query statement below (e1->Employees , e2->EmployeeUNI)
SELECT e2.unique_id,e1.name FROM Employees AS e1 LEFT JOIN EMployeeUNI AS e2 ON e1.id=e2.id;