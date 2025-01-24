import os
import subprocess

# Specify file extensions to format
extensions = (".cpp", ".hpp", ".c", ".h")
# Walk through the directory
for root, _, files in os.walk("./data"):
    for file in files:
        if file.endswith(extensions):
            filepath = os.path.join(root, file)
            subprocess.run(["clang-format", "-i", "--style=Google", filepath])
            
# Walk through the directory
for root, _, files in os.walk("./include"):
    for file in files:
        if file.endswith(extensions):
            filepath = os.path.join(root, file)
            subprocess.run(["clang-format", "-i", "--style=Google", filepath])

# Walk through the directory
for root, _, files in os.walk("./tests"):
    for file in files:
        if file.endswith(extensions):
            filepath = os.path.join(root, file)
            subprocess.run(["clang-format", "-i", "--style=Google", filepath])