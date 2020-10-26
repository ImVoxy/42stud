#!/bin/bash

sed -i "s/autoindex off;/autoindex on;/g" /etc/nginx/conf.d/nginx.conf
service nginx restart
