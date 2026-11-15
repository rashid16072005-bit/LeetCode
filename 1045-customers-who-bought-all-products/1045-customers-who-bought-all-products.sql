# Write your MySQL query statement below
SELECT customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = (SELECT COUNT(*) FROM Product);


-- select 
-- c.customer_id
-- from
-- (select 
-- c.customer_id,
-- c.product_key,
-- p.product_key
-- from customer c
-- join product p
-- on c.product_key = p.product_key)t
-- group by c.customer_id
-- having (count())