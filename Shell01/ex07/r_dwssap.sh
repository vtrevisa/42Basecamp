#!/bin/shc
cat /etc/passwd | sed 's/#.*//' | sed 's/:.*//g' | sed -n '0~2 p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed 's/,/,\ /g' | sed 's/,\ $/./'
