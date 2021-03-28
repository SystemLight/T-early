#include <Python.h>

int main(void) {
    Py_SetPythonHome(L"C:\\Users\\Lisys\\AppData\\Local\\Programs\\Python\\Python37\\");
    Py_SetPath(L"C:\\Users\\Lisys\\AppData\\Local\\Programs\\Python\\Python37\\Lib");

    Py_Initialize();
    PyRun_SimpleString("print('hello 中文')");
    Py_Finalize();
    return 0;
}