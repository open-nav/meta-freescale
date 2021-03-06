# Copyright (C) 2012-2018 O.S. Systems Software LTDA.
# Released under the MIT license (see COPYING.MIT for the terms)

inherit fsl-u-boot-localversion

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=30503fd321432fc713238f582193b78e"

SRC_URI = "git://github.com/Freescale/u-boot-fslc.git;branch=${SRCBRANCH}"

SRCREV = "62f2841dc4c272d627b8691e10d5878537968a62"
SRCBRANCH = "2018.09+fslc"

PV = "v2018.09+git${SRCPV}"

S = "${WORKDIR}/git"
