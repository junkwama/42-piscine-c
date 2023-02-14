# Shell00

Some shell commands

pwd: shows where you are in the directory tree

LS: list the current files and directories  ls -la : adds more details to the previous command

The ls -l command in Unix-like systems displays a long listing format for files and directories, including various information such as file permissions, owner, group, size, modification time, and filename.

The permission output consists of ten characters, and it represents the file or directory's access permissions. The format of the permission output is as follows:

rust
Copy code
- rw- r-- r--
  |  |   |   |
  |  |   |   +----> Others' permissions (read-only)
  |  |   +--------> Group permissions (read-only)
  |  +-------------> Owner permissions (read and write)
  +-----------------> Type of file (- for regular file, d for directory, l for symbolic link, and so on)
The first character indicates the type of the file, followed by three sets of three characters that represent the owner, group, and others' permissions. Each set of permissions consists of three characters, which can be one of the following:

r (read): Allows reading the file or viewing the directory's contents.
w (write): Allows modifying the file or creating new files in the directory.
x (execute): Allows running the file as a program or accessing the directory's contents.
If the permission is not granted, a dash - is displayed instead of the corresponding letter.

For example, rw-r--r-- means the owner can read and write the file, while the group and others can only read it.


LN COMMAND 

ln -s /home/user/mydir ~/mylink

This will create a symbolic link folder called mylink in your home directory that points to the mydir directory. You can access the contents of mydir through mylink.



man [command]: gives information about the command
chmod : modifies the permissions on a file 
chmod u+w,g-x,o-x filename: Here, "u" represents the owner, "g" represents the group, and "o" represents others. "+w" adds write permission, while "-x" removes execute permission.

tar [options] archive_filename files_or_directories
-c: create a new archive file
-x: extract files from an existing archive file
-f: specify the name of the archive file
-z: compress the archive file using gzip
-j: compress the archive file using bzip2
-v: verbose mode, display progress as files are archived or extracted
-t: list the contents of an archive file


For example, to create a compressed archive file named "my_archive.tar.gz" that contains all files in the current directory and its subdirectories, you can use the following command:
	Ex: tar -czf my_archive.tar.gz .

FIND COMMAND

The find command is a powerful utility available in Unix-like operating systems that is used to search for files and directories in a specified location. Here are some of the most commonly used options for the find command:

-name: Used to search for files and directories by their name. For example, find /home/user -name myfile.txt will search for a file named "myfile.txt" in the directory "/home/user".

-type: Used to search for files based on their type. The most commonly used types are f for regular files and d for directories.

-mtime: Used to search for files based on their modification time. For example, find /home/user -mtime +7 will search for files that have been modified more than 7 days ago.

-size: Used to search for files based on their size. For example, find /home/user -size +10M will search for files larger than 10 megabytes.
-delete: to delete the find files

-exec: Used to execute a command on each file found by find. For example, find /home/user -name "*.txt" -exec grep "keyword" {} \; will search for all files with a .txt extension and execute the grep command on each file to search for a specific keyword.

-print: Used to print the name of each file found by find. For example, find /home/user -name "*.txt" -print will print the names of all files with a .txt extension in the "/home/user" directory.

These are just a few of the most commonly used options for the find command. The command is highly flexible and can be used with many other options and arguments to perform more complex searches.
Find command: 

Example 

Find all files with a size larger than 10 megabytes in the /var/log directory:
lua
Copy code
find /var/log -type f -size +10M -print
This command searches for all files in the /var/log directory that are larger than 10 megabytes and prints their names.

Find all files in the current directory and its subdirectories with a .jpg or .png extension and delete them:
bash
Copy code
find . -type f \( -name "*.jpg" -o -name "*.png" \) -exec rm {} \;
This command searches for all files in the current directory and its subdirectories with a .jpg or .png extension and deletes them. The -exec option is used to execute the rm command on each file found by find.

find . -type f \( -name "*." -o -name ".*" \) -exec rm {} \;  


FILE COMMAND:

The file command in Linux is a utility that is used to determine the type of a file. When a file is passed as an argument to the file command, it reads the contents of the file and returns information about the type of the file, such as its MIME type, encoding, and other characteristics.

The file command can be used in a number of ways, including:

Displaying the type of a single file
Displaying the type of multiple files
Recursively displaying the type of files in a directory
Displaying extended file information
Using magic numbers to determine file types
Here are some commonly used options with the file command:

-i: Print the MIME type of the file.
-b: Suppress the filename in the output and only display the file type.
-z: Use a null byte as a separator instead of a newline.
-L: Follow symbolic links and report the type of the target file.
-r: Print the raw output from the magic file.
-m: Specify an alternate magic file to use.

The file command is particularly useful when working with files that have unknown extensions or when trying to identify the type of a file that is not opening in a particular application. It is commonly used in shell scripts to automate tasks and perform actions based on file type.

We can create a custom magic file called ft_magic to detect files of 42 file types with a "42" string at the 42nd byte. Here are the steps to create the ft_magic file:

Open a terminal and create a new file called ft_magic using the touch command:
bash
Copy code
touch ft_magic
Edit the ft_magic file using a text editor of your choice:
Copy code
nano ft_magic
Add the following line to the ft_magic file:
python
Copy code
0     string     42             File is of type 42
>42   string     42             File is of type 42

The above line defines two checks for detecting the 42 file type. The first check looks for the string "42" at the beginning of the file (0 bytes), and the second check looks for the string "42" at the 42nd byte of the file.
The first field specifies the offset in bytes from the start of the file where the check should begin. In this case, the first check starts at byte 0, and the second check starts at byte 42.

The second field specifies the test to be performed on the file. In this case, we are looking for the string "42" in the file.

The third field is a description of the file type that will be output by the file command if the test is successful.

By using the string test, we can specify a string of characters to be searched for in the file. The string test can be used in a number of ways to search for different strings of characters in the file, including searching for ASCII or Unicode strings, regular expressions, or byte sequences.


Save and close the ft_magic file.

Test the ft_magic file by running the file command with the -m option to specify the custom magic file:

php
Copy code
file -m ft_magic <filename>
Replace <filename> with the name of the file you want to test.

The file command will use the ft_magic file to determine if the file is of the 42 file type. If the file contains the string "42" at either the beginning or the 42nd byte, the command will output "File is of type 42". Otherwise, it will output the default file type detection information.c

#Chmod rwx 421




