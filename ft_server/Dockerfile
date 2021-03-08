FROM debian:buster-slim

RUN apt-get update

RUN apt-get install -y wget vim 

RUN apt-get -y install nginx

RUN apt-get -y install mariadb-server

WORKDIR /var/www/html/

RUN apt-get -y install php7.3 php-mysql php-fpm php-pdo php-gd php-cli php-mbstring

RUN mkdir /var/www/html/phpmyadmin

RUN wget https://files.phpmyadmin.net/phpMyAdmin/5.0.1/phpMyAdmin-5.0.1-english.tar.gz

RUN tar -xf phpMyAdmin-5.0.1-english.tar.gz && rm -rf phpMyAdmin-5.0.1-english.tar.gz

COPY ./srcs/my_nginx-config /etc/nginx/sites-available/default

RUN mv phpMyAdmin-5.0.1-english phpmyadmin

COPY ./srcs/config.inc.php phpmyadmin/phpMyAdmin-5.0.1-english

RUN wget https://wordpress.org/latest.tar.gz

RUN tar -xvzf latest.tar.gz && rm -rf latest.tar.gz

COPY ./srcs/wp-config.php wordpress/

RUN openssl req -x509 -nodes -days 365 -subj "/C=IT/ST=Italy/L=Rome/O=pbarbaro/OU=42rome/CN=pbarbaro" -newkey rsa:2048 -keyout /etc/ssl/private/nginx-selfsigned.key -out /etc/ssl/certs/nginx-selfsigned.crt

COPY ./srcs/autoindex /bin/

RUN chmod +x /bin/autoindex

RUN chown -R www-data:www-data *

RUN chmod -R 755 /var/www/*

COPY ./srcs/init.sh /

RUN chmod +x /init.sh

CMD /init.sh

