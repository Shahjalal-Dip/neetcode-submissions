SELECT name 
From sales_person
Where sales_id NOT IN (
SELECT sales_id
From orders o
INNER JOIN company c on c.com_id = o.com_id
Where name LIKE 'CRIMSON');
