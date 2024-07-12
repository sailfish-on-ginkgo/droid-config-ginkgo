#!/bin/bash
mount -t overlay overlay -o lowerdir=/usr/libexec/droid-hybris/vendor:/vendor /vendor ||:

# hack for vendor-*.mount, why sometime they not work?
if ! mount|grep -q /vendor/dsp; then
  /bin/mount /dev/mmcblk0p67 /vendor/dsp -t ext4 -o ro,nosuid,nodev,barrier=1 ||:
fi
if ! mount|grep -q /vendor/firmware_mnt; then 
  /bin/mount /dev/mmcblk0p80 /vendor/firmware_mnt -t vfat -o ro,shortname=lower,uid=0,gid=1000,dmask=227,fmask=337 ||:
fi
if ! mount|grep -q /vendor/bt_firmware; then
  /bin/mount /dev/mmcblk0p36 /vendor/bt_firmware -t vfat -o ro,shortname=lower,uid=1002,gid=3002,dmask=227,fmask=337 ||:
fi
if ! mount|grep -q /mnt/vendor/persist; then
  /bin/mount /dev/mmcblk0p69 /mnt/vendor/persist -t ext4 -o noatime,nosuid,nodev,barrier=1 ||:
fi

