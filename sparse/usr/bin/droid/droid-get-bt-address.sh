#!/bin/sh
echo "droid-get-bt-address: Setting up bluetooth address"

hexchars="0123456789ABCDEF"
addresspath="/var/lib/bluetooth/"
addressfile="$addresspath/board-address"

# use real bluetooth address
ls $addresspath|grep ':'
if [ "$?" -eq "0" ]; then
   ls $addresspath|grep ':'|head -n 1 > $addressfile
   exit 0
fi

if [ ! -f "$addressfile" ]; then
    count=10
    mac=$( for i in $(seq $count) ; do echo -n ${hexchars:$(( $RANDOM % 16 )):1} ; done | sed -e 's/\(..\)/:\1/g' )
    echo "File not found, generating new address"
    mkdir -p "$addresspath"
    chmod 0755 "$addresspath"
    echo 00$mac > "$addressfile"
fi

