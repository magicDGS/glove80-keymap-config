FROM docker.io/zmkfirmware/zmk-build-arm:stable

ARG KEYMAP_DRAWER_URL

# INSTALL Just & local tooling
RUN apt-get -y update \
    && apt-get -y install \
    just \
    yq

# INSTALL python tools:
# - keymap-drawer
RUN apt-get -y update \
    && apt-get -y install --no-install-recommends \
    python3-pip \
    && PIP_BREAK_SYSTEM_PACKAGES=1 pip3 install \
    "${KEYMAP_DRAWER_URL}" \
    && apt-get remove -y --purge \
    python3-pip
