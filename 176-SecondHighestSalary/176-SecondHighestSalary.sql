-- Last updated: 20/07/2025, 20:57:48
# Write your MySQL query statement below
select (select distinct(salary) from employee order by salary desc limit 1 offset 1) as secondHighestSalary;