# Write your MySQL query statement below


select 
Department,
Employee,
Salary
from 
(
    select *,DENSE_RANK() over(partition by Department order by Salary DESC) as SalaryRank
    from
        (
            select 
            e.name as Employee,
            e.salary as Salary,
            d.name as Department
            from employee as e
            left join department as d
            on e.departmentid = d.id
        )t
)q
where SalaryRank<4