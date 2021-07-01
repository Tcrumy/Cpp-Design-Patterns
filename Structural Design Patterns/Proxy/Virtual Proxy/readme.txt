This program simulates the loading of a bitmap, however, only a txt file is loaded. The bit map proxy class in this program allows you to call it's load function without 
calling the load function of the bitmap class. The load function of the bitmap class is only called when bitmap.load() is called, or bitmapproxy.display is called. So if 
you wanted to used the bitmap class without immediately needing to load a bitmap, that can be done through the proxy class. This is based on Umar Lones "Struction Design Patterns" udemy course.
