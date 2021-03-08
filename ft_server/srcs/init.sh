service nginx start
service mysql start
service php7.3-fpm start

echo "CREATE DATABASE wordpress;" | mysql -u root --skip-password
echo "CREATE USER 'marta'@'localhost' IDENTIFIED BY 'password';" | mysql -u root --skip-password
echo "GRANT ALL PRIVILEGES ON wordpress.* TO 'marta'@'localhost';" | mysql -u root --skip-password
echo "FLUSH PRIVILEGES;" | mysql -u root --skip-password

bash