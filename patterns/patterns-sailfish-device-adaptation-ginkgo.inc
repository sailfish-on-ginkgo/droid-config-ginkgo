%package -n patterns-sailfish-device-adaptation-ginkgo
Summary: Jolla HW Adaptation ginkgo
Requires: droid-hal-ginkgo
Requires: droid-hal-ginkgo-img-boot
Requires: droid-hal-ginkgo-kernel-modules
Requires: droid-config-ginkgo-sailfish
Requires: droid-config-ginkgo-pulseaudio-settings
Requires: droid-config-ginkgo-policy-settings
Requires: droid-config-ginkgo-preinit-plugin
Requires: droid-config-ginkgo-flashing
Requires: droid-config-ginkgo-bluez5
Requires: droid-hal-version-ginkgo
Requires: droid-hal-ginkgo-detritus

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Bluetooth
Requires: bluebinder

# Telephony
Requires: ofono-ril-binder-plugin
Requires: dummy_netd

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Enable after droidmedia is tested working for Android 10 BSPs
Requires: gstreamer1.0-droid
Requires: gmp-droid

# For camera dummy audioflinger is needed
Requires: audiosystem-passthrough-dummy-af

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-daemon-encsfa

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
Requires: jolla-mediaplayer-radio

# For torch
Requires: jolla-settings-system-flashlight

# Additional packages
Requires: sd-utils

# For suspend to work with enabled Wi-Fi on newer Qualcomm devices
Requires: sailfish-connman-plugin-suspend

%description -n patterns-sailfish-device-adaptation-ginkgo
Pattern with packages for ginkgo HW Adaptation

%files -n patterns-sailfish-device-adaptation-ginkgo
