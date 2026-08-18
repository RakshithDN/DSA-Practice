# Write your MySQL query statement below
select w.id as Id
from weather w
inner join weather h
on datediff(w.recordDate, h.recordDate)=1
where w.temperature>h.temperature