install:
	gcc graphics.c -o libgraphics.dylib -Wl,-install_name,/usr/local/lib/libgraphics.dylib -lSDL2 -dynamiclib

clean:
	rm libgraphics.dylib