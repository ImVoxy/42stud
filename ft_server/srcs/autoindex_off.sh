#!/bin/bash

if [ $index_var = "off" ]
then
	sed -i "s/autoindex on;/autoindex off;/g" /etc/nginx/conf.d/nginx.conf
	service nginx restart
fi
