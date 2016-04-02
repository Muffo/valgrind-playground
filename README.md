# valgrind-playground
Intentionally wrong sample code - useful to learn and practice with Valgrind


## Build

```
mkdir bin
cd bin
cmake ..
make
```

## Run

```
valgrind ./memleak

valgrind --track-origins=yes ./uninit_buf
valgrind --track-origins=yes ./uninit_var


valgrind ./outofbounds
```

