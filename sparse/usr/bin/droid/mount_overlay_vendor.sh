#!/bin/bash
mount -t overlay overlay -o lowerdir=/usr/libexec/droid-hybris/vendor:/vendor /vendor

# hack for vendor-*.mount, why sometime they not work?
/bin/mount /dev/mmcblk0p67 /vendor/dsp -t ext4 -o ro,nosuid,nodev,barrier=1
/bin/mount /dev/mmcblk0p80 /vendor/firmware_mnt -t vfat -o ro,shortname=lower,uid=0,gid=1000,dmask=227,fmask=337
/bin/mount /dev/mmcblk0p36 /vendor/bt_firmware -t vfat -o ro,shortname=lower,uid=1002,gid=3002,dmask=227,fmask=337
/bin/mount /dev/mmcblk0p69 /mnt/vendor/persist -t ext4 -o noatime,nosuid,nodev,barrier=1
