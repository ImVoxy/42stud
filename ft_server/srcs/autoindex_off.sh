#!/bin/bash

sed -i "s/autoindex on;/autoindex off;/g" /etc/nginx/conf.d/nginx.conf
service nginx restart
