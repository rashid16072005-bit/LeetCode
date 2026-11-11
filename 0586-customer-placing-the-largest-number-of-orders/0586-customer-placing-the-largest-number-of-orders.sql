# Write your MySQL query statement below
select customer_number from (
    select customer_number,count(customer_number) as nCount from orders group by customer_number
    order by nCount DESC
)t
limit 1;