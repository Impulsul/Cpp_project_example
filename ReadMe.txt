CPP notes

Poti face ca o solutie a unui proiect proiect sa fie alcatuit din mai multe proiecte. Componentele sale pot fi dll-uri sau static library. Intr-un fel dll-urile sunt module pe care le pot prelua si altii, iar lib-urile sunt direct incluse in executabil.

Poti adauga pachete cu nuget packages

Includerea lor se poate face dand click dreapta pe proiect/property unde acolo ai 2 sectiuni: cea de compiler si cea de linking

Iar la linker la general ai acolo additional Library directory unde adaugi calea librariei, iar la input adaugi libraria (lib) in sine.

La fel si la compiler(c/C++) poti adauga pachetele al general la aditional include directories unde specifici calea.