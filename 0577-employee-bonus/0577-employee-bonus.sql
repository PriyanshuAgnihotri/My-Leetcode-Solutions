# Write your MySQL query statement below
SELECT E.Name, B.bonus FROM Employee E
LEFT JOIN Bonus B
ON E.empId = B.empid
WHERE B.bonus IS NULL OR  B.bonus < 1000
