#
# Copyright 2014 myOS Group. All rights reserved.
#

echo
echo "****************************** Building libraries ******************************"

#CAN_CLEAN=NO
TARGET=Universal

cd objc
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

cd icu
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

cd pixman
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

cd png
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

cd freetype
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

cd expat
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

cd fontconfig
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

cd cairo
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

cd lcms
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

#cd MAGLESv1_enc
#source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
#cd ..

#cd MARenderControl_enc
#source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
#cd ..

#cd MAOpenglSystemCommon
#source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
#cd ..

#cd MAOpenglCodecCommon
#source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
#cd ..

cd MAEGL
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

cd MAKit
source ${MYOS_PATH}/android/sdk/scripts/common-build.sh
cd ..

#CAN_CLEAN=YES
