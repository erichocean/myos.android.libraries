#
# Copyright 2014 myOS Group. All rights reserved.
#

echo
echo "****************************** Cleaning libraries ******************************"

cd objc
make clean
cd ..

cd icu
make clean
cd ..

cd pixman
make clean
cd ..

cd png
make clean
cd ..

cd freetype
make clean
cd ..

cd expat
make clean
cd ..

cd fontconfig
make clean
cd ..

cd cairo
make clean
cd ..

cd lcms
make clean
cd ..

cd MAGLESv1_enc
make clean
cd ..

#cd MARenderControl_enc
#make clean
#cd ..

#cd MAOpenglSystemCommon
#make clean
#cd ..

#cd MAOpenglCodecCommon
#make clean
#cd ..

cd MAEGL
make clean
cd ..

cd MAKit
make clean
cd ..
