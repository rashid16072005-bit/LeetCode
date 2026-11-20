# Write your MySQL query statement below
select
product_name,
sum(t.unit) as unit
from
(select
p.product_id as product_id,
p.product_name as product_name,
o.unit as unit
from Products p
inner join Orders o
on p.product_id = o.product_id
where o.order_date >='2020-02-01' and o.order_date<='2020-02-29'
)t
group by product_id
having  sum(t.unit)>=100
