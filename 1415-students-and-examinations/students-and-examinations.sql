# Write your MySQL query statement below
select s.student_id,s.student_name,b.subject_name, count(e.subject_name)as attended_exams
from students s
CROSS JOIN subjects b
LEFT JOIN examinations e 
    ON s.student_id = e.student_id 
    AND b.subject_name = e.subject_name
group by s.student_id,s.student_name,b.subject_name
order by student_id