#!/bin/bash
echo -1000 > /proc/self/oom_score_adj
echo enabled > /sys/class/input/event2/device/power/wakeup
