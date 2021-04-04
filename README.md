# QtCPPTemplate
A qt template c++ project. 

# Directory Usage


## ./(or $${Project}/)

Qt project files: ui window, main, *.pro, *.ui
Other project files: LICENSE(of this project), README.md

## ./bin/win32
libs for win32: *.lib, *.dll, *.a, etc.

## ./bin/win64
libs for win64: *.lib, *.dll, *.a, etc.

## ./$${ext_project_name}/

the include files of lib ext_project_name..

or modules.


## ./atlas

altas and images

## ./fonts

font files

## ./about

about windows

## logo and title

set title and logo in MainWindow::MainWindow(xx) of mainwindow.cpp

```
// set title
this->setWindowTitle("Template C++ Qt APP");
// set icon
this->setWindowIcon(QIcon(":/atlas/logo.png"));
```
