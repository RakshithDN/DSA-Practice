# Write your MySQL query statement below
select s.user_id,ifnull(round(sum(c.action='confirmed')/count(*),2),0)as confirmation_rate
from signups s
left join confirmations c
on s.user_id=c.user_id
group by user_id