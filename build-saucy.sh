#!/bin/bash

#

echo "Installing dependencies..."
sudo add-apt-repository ppa:otto-kesselgulasch/gimp-edge
sudo apt-get install gtk-doc-tools libbabl-dev libgegl-dev gegl libopenraw1 libgexiv2-dev libtiff-dev
sudo apt-get install liblcms2-dev libgs-dev libwebkit-dev libxmpi4-dev libpoppler-dev libjasper-dev
sudo apt-get install libmng-dev libopenexr-dev libaa1-dev libpoppler-glib-dev libwmf-dev xvfb


echo "Configuring..."
./autogen.sh
# Reconfigure to build statically
./configure --enable-static

echo "Making..."
make -j5

echo "Installing..."
make install -j5

echo "Done"
