#!/bin/bash
echo -1000 > /proc/self/oom_score_adj
echo 1 > /proc/tp_gesture
mcetool --set-doubletap-wakeup=always

