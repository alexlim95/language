# Go to home directory
cd ~

# You can change what anaconda version you want at 
# https://repo.continuum.io/archive/
# Anaconda3-X.X.X-Linux-x86_64.sh for x86 64-bit 
wget https://repo.continuum.io/archive/Anaconda3-5.0.1-Linux-x86_64.sh
bash Anaconda3-4.2.0-Linux-x86_64.sh -b -p ~/anaconda
rm Anaconda3-4.2.0-Linux-x86_64.sh
echo 'export PATH="~/anaconda/bin:$PATH"' >> ~/.bashrc 

# Refresh basically
source .bashrc

conda update conda
