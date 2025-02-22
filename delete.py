import glob
import os

files = []
# Delete all files in the current directory with the *.exe extension
for filename in glob.glob('*.exe'):
    print('Deleting', filename)
    files.append(filename)
answer=input("Do you want to delete these files?[y/n]");
print(files)

if answer=='y':
    for file in files:
        os.remove(file)
    print('All done.')
else:
    print('No files were deleted.')

    
