rm out build -rf
mkdir out
mkdir build && cd build
cmake .. -DBUILD_TYPE=Debug -DBUILD_TRACE=1
make -j4