# Write your MySQL query statement below
-- select email from Person group by email having count(email)>1;
SELECT email
FROM Person
GROUP BY email
HAVING COUNT(email)>1;