#ifndef __PYCXNETWORK_H__
#define __PYCXNETWORK_H__

#include <Python.h>

PyObject * PyCXNetworkRewire(PyObject*, PyObject*);

PyObject *PyCXRandomSeedDev(PyObject*, PyObject*);
PyObject *PyCXRandomSeed(PyObject*, PyObject*);

#endif
