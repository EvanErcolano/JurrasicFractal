## JurrasicFractal
Experimenting with Dynamic Programming by programming some Fractals (Harter–Heighway dragon) in C++. The basic flow of the fractal can be described as :

Recurse (iterationNum) {
    If (iiterationNum > 0) {
        If (line does not exist) {
            Draw a horizontal line
        } else {
            Copy existing line(s) grouping
            Paste them
            Rotate the new copy of lines by 90 degrees Counter Clockwise
            Combine it with the original line(s)
        }
        Recurse(iterationNum-1)
    } else {
            // pattern is done
     }
} 

## Dependencies
I'm using a drawing library for C++. You can find the library (library.h) here (http://rabbit.eng.miami.edu/class/library/index.html), you need the header and the object file.


![alt text](http://mathworld.wolfram.com/images/gifs/DragonCurve.gif "Harter–Heighway dragon")
