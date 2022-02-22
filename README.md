# twapbot

In finance, time-weighted average price (TWAP) is the average price of a security over a specified time. 
TWAP orders are a strategy of executing trades evenly over a specified time period.
TWAP is a trading algorithm
 Volume-weighted average price (VWAP) balances execution with volume.

A C++ TWAP trading bot built from our [SDK](https://github.com/leannejdong/sdk/tree/feature/async-api/cpp)

**Declaimer**: This bot was created purely for demonstration of our SDK. I am not personally responsible for any losses 
caused by this bot.

## Build commands

### general linux distributions

```shell
mkdir build
cd build
export CONAN_RUN_TESTS=1
echo $CONAN_RUN_TESTS
cmake .. -DUNIT_TESTS=1 -DBUILD_TESTING=1 -DCMAKE_BUILD_TYPE=Debug
make
```
<!---
Note: everytime you run `conan create` you don't need to wait for your changes to be merged in develop branch.
The `create` command will update your local cache and you can run the examples with the updates.
--->
In order to build the test suite add `-DBUILD_TESTING` definition.

# Package Managers

## Conan

Add bitwyre remote https://conan.bitwyre.id/artifactory/api/conan/bitwyre to your list of remotes

```
conan remote add bitwyre https://conan.bitwyre.id/artifactory/api/conan/bitwyre
```

Then inside your `conanfile.py` or `conanfile.txt` add `bitwyresdk/[>=1.0]`

# Debug exception with GDB

```
cd build
gdb bin/twapbot
catch throw
r
bt
fr12
print response
```