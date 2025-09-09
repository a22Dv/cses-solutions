import os
import sys

# This convenience script is local to my machine.
# it assumes clang-cl is installed in the system and is in its PATH.
# this script is also Windows-specific.


def main() -> None:
    if len(sys.argv) != 2:
        print("Invalid no. of arguments...")
        return
    name: str = sys.argv[1]
    os.mkdir(name)
    with open(f"{name}/{name}.c", "w") as FILE:
        FILE.write(
            f"// Problem Set: {name.replace("_", " ").title()}\n\n"
            "#include <stdio.h>\n"
            "#include <string.h>\n"
            "#include <math.h>\n"
            "#include <stdint.h>\n"
            "#include <stdlib.h>\n"
            "#include <stdbool.h>\n"
            "#include <limits.h>\n"
            "#include <ctype.h>\n\n"
            "#define EXLRG_BUFFER 65536\n"
            "#define LRG_BUFFER 8192\n"
            "#define SML_BUFFER 128\n\n"
            "#define MAX(a, b) ((a) >= (b) ? (a) : (b))\n"
            "#define MIN(a, b) ((a) <= (b) ? (a) : (b))\n\n"
            "typedef long long unsigned int llu;\n"     
            "typedef double dbl;\n\n"
            "int main() {\n"
            f'    printf("Successfully ran {name}.exe\\n");\n'
            "    return 0;\n"
            "}\n"
        )
    with open(f"{name}/build.bat", "w") as FILE:
        FILE.write("@echo off\n" f"clang-cl /D_CRT_SECURE_NO_WARNINGS {name}.c\n")
    os.chdir(name)
    os.system(f"build.bat")
    if os.system(f"{name}.exe") == 0:
        print(f"Successfully created problem-set [{name}]...")
        os.system(f"code -r {name}.c")
    else:
        print(
            f"Encountered an unexpected failure when creating problem-set [{name}]..."
        )


if __name__ == "__main__":
    main()
