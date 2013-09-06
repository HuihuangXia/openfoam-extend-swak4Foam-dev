#! /bin/bash

boxName=$1

echo
echo "Init script for $boxName"
echo

rpm -Uhv http://fedora.aau.at/epel/6/x86_64/epel-release-6-8.noarch.rpm

# yum install mercurial
rpm -Uhv http://pkgs.repoforge.org/mercurial/mercurial-2.2.2-1.el6.rfx.x86_64.rpm
# Don't want to add too many repositories

yum install -y bison
yum install -y flex
yum install -y ccache

# needed by CentFOAM
yum install -y libXt-devel mesa-libOSMesa tcl tix  tk

# Not needed. Just to keep Bernhard happy
yum install -y emacs

cd /home/vagrant/

of21Dir=/home/vagrant/centFOAM/OpenFOAM/OpenFOAM-2.1.1
if [ ! -e $of21Dir ]
then
    su vagrant - -c "/vagrant/ThirdParty/centFOAM.py --OF21"
fi

# half a Gig. Currently 2.1 is enough
# su vagrant - -c "/vagrant/ThirdParty/centFOAM.py --OF21"

of16Dir=/home/vagrant/centFOAM/OpenFOAM/OpenFOAM-1.6-ext
if [ ! -e $of16Dir ]
then
    su vagrant - -c "/vagrant/ThirdParty/centFOAM.py --OF16"
fi

ln -s ./centFOAM/OpenFOAM/ .

/vagrant/initScriptGeneral.sh

echo
echo "Ended"
