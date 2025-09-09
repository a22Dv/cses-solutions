import os
import sys

def main() -> None:
    if len(sys.argv) != 2:
        print("Invalid no. of arguments...")
        return
    name: str = sys.argv[1]
    os.chdir(sys.argv[1])
    os.system(f"build.bat")
    os.system(f"{name}.exe")

if __name__ == "__main__":
    main()
