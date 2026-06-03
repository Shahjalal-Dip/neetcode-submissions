SELECT name 
From customers
WHERE name NOT IN (
    SELECT c.name
    FROM customers c
    INNER JOIN orders o ON o.customer_id = c.id
);