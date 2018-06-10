# Discord Typer

Write stupid emoji letter sentences in [Discord](https://discordapp.com/).

![Example](./example.png?raw=true "Example")

## Using

You type your sentence and click the button. That's it.

The display box is just for show, it's functionally useless.

## Dependencies

[Cmake](https://cmake.org/) is needed for building.

[Qt5](https://www.qt.io/) and it's [Core](https://doc.qt.io/qt-5/qtcore-index.html), [Widgets](https://doc.qt.io/qt-5/qtwidgets-index.html), and [Gui](https://doc.qt.io/qt-5/qtgui-index.html) modules are required.

## Building

Linux/macOS:

```
mkdir -p build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```

Windows:

```
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

## Installation

You actually want to install this? Ok then, edit the last line of the build step with the following:

Linux/macOS: `sudo cmake --build . --target install`\
Windows: `runas /user:Administrator "cmake --build . --config Release --target install"`
