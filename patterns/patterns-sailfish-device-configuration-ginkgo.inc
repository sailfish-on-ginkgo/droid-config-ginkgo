%package -n patterns-sailfish-device-configuration-ginkgo
Summary: Jolla Configuration ginkgo
Requires: patterns-sailfish-device-configuration-common-ginkgo
Requires: patterns-sailfish-device-adaptation-ginkgo

Requires: droid-config-ginkgo-sailfish
Requires: droid-config-ginkgo-pulseaudio-settings
Requires: droid-config-ginkgo-policy-settings
Requires: droid-config-ginkgo-preinit-plugin
Requires: droid-config-ginkgo-flashing
Requires: droid-config-ginkgo-bluez5
Requires: droid-hal-version-ginkgo

Requires: patterns-sailfish-cellular-apps

# Early stages of porting benefit from these:
Requires: patterns-sailfish-rnd
# dev-tools pattern will be fixed in the next release
# for now we'll use its 'exploded' version:
#Requires: patterns-sailfish-dev-tools
Recommends: jolla-developer-mode
Requires: strace
Requires: gdb
Requires: gdb-gdbserver
Requires: vim-enhanced
Requires: less
Requires: valgrind
Requires: lipstick-qt5-tools
Requires: libhybris-tests
Requires: busybox-static
Requires: openssh-server
Requires: zypper

# NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-binder-plugin
Requires: nfcd-mce-plugin

Requires: sailfish-content-graphics-z%{icon_res}

Requires: jolla-settings-networking-multisim
Requires: jolla-settings-system-flashlight

Requires: geoclue-provider-mlsdb
Requires: mapplauncherd-booster-silica-qt5-media

%description -n patterns-sailfish-device-configuration-ginkgo
Pattern with packages for xqau51 configurations

%files -n patterns-sailfish-device-configuration-ginkgo
