import pathlib
import tkinter as tk
import ctypes

if __name__ == "__main__": 
    # Load the shared library into ctypes
    
    vitvnode_so = ctypes.CDLL("build/libvitvnodesystem.so")
    vitvnode_so.free