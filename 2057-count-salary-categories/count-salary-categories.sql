SELECT 'Low Salary' as category,
count(income)as accounts_count
FROM accounts
WHEre income < 20000 
union
SELECT 'Average Salary' as category,
count(income)as accounts_count
FROM accounts
WHEre income >= 20000 and income<=50000
union
SELECT 'High Salary' as category,
count(income)as accounts_count
FROM accounts
WHEre income > 50000 