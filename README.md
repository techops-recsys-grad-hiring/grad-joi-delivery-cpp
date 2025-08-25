# grad-joi-delivery-cpp

## Requirements

1. CMake 3.23 above is **required**.

Check [here](https://cmake.org/download/) for installation if you get a older version.

2. Conan 2.0 above is **required**.

Check [here](https://docs.conan.io/2/installation.html) for installation if you get a older version.

The project makes use of Conan to help you out carrying some common tasks such as building the project or running it.

Technically, Conan is not must have, but in order to simplify environment setup, following guideline is based on Conan.

### Build the project

0. Setup a profile for Conan, if this is the first time you get Conan 2.x run on your machine.

```shell
conan profile detect
```

Now, assuming you are already at the root of this repository, follow:

1. Install or build the dependencies


```shell
conan install . --output-folder=build -s build_type=Debug --build=missing
```

2. Generate build system for this repository

```shell
cmake --preset conan-debug
```

> ☀️ If you are building on **Windows with Visual Studio** (Generator), please use `conan-default` instead of, like:
>
> ```shell
> cmake --preset conan-default
> ```

3. Build this repository

```shell
cmake --build build
```

> ☀️ If you are building on **Windows with Visual Studio** (Generator), and prefer IDE, you could find a generate project file in `build` directory and open it with Visual Studio for building and test running.

> ⚡️With option `-j<number>` (e.g. -j4 ) could enable parallel build job, which could usually accelerate your build.

### Run the tests

Unit tests can be executed as follows.

- Run unit tests only

  ```shell
  $ ctest .
  ```
