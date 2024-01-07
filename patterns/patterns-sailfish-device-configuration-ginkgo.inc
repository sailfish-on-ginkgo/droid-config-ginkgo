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

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps

# Early stages of porting benefit from these:
Requires: patterns-sailfish-device-tools

# jolla-rnd-device will enable usb-moded even when UI is not yet
# brought up (useful during development, available since update10)
Requires: jolla-rnd-device

Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
Requires: jolla-settings-networking-multisim

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Sailfish OS CSD tool for hardware testing
# needs some configuration to get all features working

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like
Requires: mapplauncherd-booster-silica-qt5-media

# some apps useful
Requires: sailfish-office
Requires: jolla-calculator
Requires: jolla-email
Requires: jolla-notes
Requires: jolla-clock
Requires: jolla-mediaplayer
Requires: jolla-calendar
Requires: sailfish-weather

#Debug tools
Recommends: vim
Recommends: strace
Recommends: unzip
Recommends: git
Recommends: mce-tools

#Sailfish porter tools
Recommends: jolla-developer-mode
Recommends: sailfishsilica-qt5-demos
Recommends: busybox-static
Recommends: net-tools
Recommends: openssh-clients
Recommends: openssh-server
Recommends: vim-enhanced
Recommends: zypper
Recommends: strace
Recommends: jolla-rnd-device

%description -n patterns-sailfish-device-configuration-ginkgo
Pattern with packages for xqau51 configurations

%files -n patterns-sailfish-device-configuration-ginkgo
