# Write your MySQL query statement below
Select p1.product_name, sum(p2.unit) as unit
from Orders as p2 join Products as p1
on p1.product_id = p2.product_id
where p2.order_date like "2020-02%"
group by p2.product_id
having unit>=100