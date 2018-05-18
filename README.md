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

```
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

## Installation

Linux/macOS: `sudo make install`\
Windows: `runas /user:Administrator "msbuild /p:Configuration=Release INSTALL.vcxproj"`
