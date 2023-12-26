rm out build -rf
mkdir out
mkdir build && cd build
cmake .. -DBUILD_TYPE=Debug
make -j4