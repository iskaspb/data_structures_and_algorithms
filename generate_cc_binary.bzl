
def generate_cc_binaries(srcs):
    for src in srcs:
        if not src.endswith(".cpp"):
            fail("Error: CPP source files must have a .cpp extension. Invalid file: {}".format(src))

        name = src[:-4]
        native.cc_binary(
            name = name,
            srcs = [src],
            copts = [
                "-pipe",
                "-O2",
                "-std=c++14"
            ],
            linkopts = ["-lm"],
        )