# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 14:32:10 by alpascal          #+#    #+#              #
#    Updated: 2020/10/07 21:33:57 by alpascal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# IMAGE
FROM debian:buster
MAINTAINER Alexandre PASCAL <alpascal@student.42.fr>

ENV index_var "on"

# INSTALL & UPDATE
RUN apt-get update && apt-get -y upgrade
RUN apt-get install -y 	wget
RUN apt-get install -y 	curl
RUN apt-get install -y 	nginx
RUN apt-get install -y 	default-mysql-server
RUN apt-get install -y 	php7.3 php7.3-fpm php7.3-mysql php-json php-mbstring
RUN apt-get install -y	mariadb-server
RUN mkdir -p /var/www/lesite

# SSL
RUN mkdir -p /etc/nginx/ssl
RUN openssl req	-x509 \
		-nodes \
		-days 365 \
		-newkey rsa:2048 \
		-out /etc/nginx/ssl/lesite.crt \
		-keyout /etc/nginx/ssl/lesite.key \
		-subj "/C=FR/ST=Paris/0=42/OU=alpascal/CN=lesite"

# PHPMA INSTALL
RUN wget https://files.phpmyadmin.net/phpMyAdmin/5.0.2/phpMyAdmin-5.0.2-all-languages.tar.gz
RUN tar -xvf phpMyAdmin-5.0.2-all-languages.tar.gz
RUN mv ./phpMyAdmin-5.0.2-all-languages/ /var/www/lesite/phpmyadmin/
RUN rm -rf phpMyAdmin-5.0.2-all-languages.tar.gz

# WP INSTALL
RUN mkdir -p /var/www/lesite/wordpress
COPY srcs/wordpress.tar.gz /tmp
RUN tar -xzf /tmp/wordpress.tar.gz --strip-components=1 -C /var/www/lesite/wordpress/

# COPY CONFIG FILES
ADD srcs/wp-config.php /var/www/lesite/wordpress/
ADD srcs/nginx.conf /etc/nginx/conf.d/nginx.conf
ADD srcs/nginx.conf /etc/nginx/sites-available/default
ADD srcs/config.inc.php /var/www/lesite/phpmyadmin/config.inc.php
ADD srcs/autoindex_off.sh /var/www/lesite/

# Ports
EXPOSE	80 443

# START SERVICES
CMD	service nginx start \
	&& service mysql start \
	&& echo "CREATE DATABASE wordpress;" | mysql -u root --skip-password \
	&& echo "GRANT ALL PRIVILEGES ON wordpress.* TO 'root'@'localhost' WITH GRANT OPTION;" | mysql -u root --skip-password \
	&& echo "FLUSH PRIVILEGES;" | mysql -u root --skip-password \
	&& echo "update mysql.user set plugin='mysql_native_password' where user='root';" | mysql -u root --skip-password \
	&& service php7.3-fpm start \
	&& chmod +x /var/www/lesite/autoindex_off.sh \
	&& chmod 755 /etc/nginx/conf.d/nginx.conf \
	&& echo "cd /var/www/lesite/" > ~/.bashrc \
	&& ./var/www/lesite/autoindex_off.sh \
	&& bash
#	&& tail -f /dev/null
