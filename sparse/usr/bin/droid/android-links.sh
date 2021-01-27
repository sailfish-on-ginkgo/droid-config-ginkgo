#!/usr/bin/env bash
if [ ! -L /home/nemo/android_storage ]; then
    if [ ! -d /data/media/0 ]; then
        ln -s /data/media /home/nemo/android_storage
    else
        ln -s /data/media/0 /home/nemo/android_storage
    fi
fi
 
