UPDATE employees
   SET salary = CASE
                 WHEN employee_id % 2 != 0 AND name NOT LIKE 'M%' 
                 THEN salary
                 ELSE 0
               END;

SELECT employee_id, salary AS bonus
FROM employees
ORDER BY employee_id;