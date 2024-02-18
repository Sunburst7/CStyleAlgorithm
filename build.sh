rm out build -rf
mkdir out
mkdir build && cd build
cmake .. -DBUILD_DEBUG=ON -DBUILD_TRACE=ON
make -j4