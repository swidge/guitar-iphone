if __name__ == '__main__':
  import os
  import os.path
  import shutil
  from sys import argv
  
  argc = len(argv)
  
  if (argc != 2):
    print "usage: ocscript [filename]"
    exit()
  
  new_file_name = "copy_"+argv[1]
  
  shutil.copyfile(argv[1], new_file_name)