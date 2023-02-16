cat /etc/passwd | sed '/^#/d' | awk 'NR!=2' | awk -F ':*:' '{print $1}' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | sed 's/$/./'
