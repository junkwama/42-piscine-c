#Ex01



The id command line tool in macOS (and most Unix-based systems) is used to display information about the current user or a specified user, including user and group IDs, the primary group, and the supplementary groups.

The basic syntax of the id command is id [options] [username]. If a username is not specified, id will display information about the current user. Some commonly used options with the id command are:

-u: displays only the user ID (UID) of the user.
-g: displays only the primary group ID (GID) of the user.
-G: displays a comma-separated list of the supplementary group IDs of the user.
-n: displays the user or group name instead of the numeric ID.

-r: displays the real user ID instead of the effective user ID.
-u -n: displays the username associated with the UID.
-g -n: displays the group name associated with the GID.
-G -n: displays the names of the supplementary groups separated by spaces.
-z: displays only the numeric IDs, separated by spaces, with no labels or other information.

*The ''|"* on command line takes the result of the previous command gives it as the parameter to the following command 

*tr:* command replaces a string by an other in on the output console 

Example: *id -nG | tr ' ' ','  *

In this example, id -Gn is used to display the names of the supplementary groups for the current user, separated by spaces. The tr ' ' ',' command is then used to replace the spaces with commas.

You can replace the comma delimiter with any other character or string that you prefer. For example, to use a semicolon as the delimiter, you can modify the command as follows:

bash
Copy code
id -Gn | tr ' ' ';'
In this example, id -Gn is used to display the names of the supplementary groups for the current user, separated by spaces. The tr ' ' ',' command is then used to replace the spaces with commas.
You can replace the comma delimiter with any other character or string that you prefer. For example, to use a semicolon as the delimiter, you can modify the command as follows:


###ENVIRONNEMENT VIRIABLE 

*export VAR_NAME="value"* : to create an env file
*echo $VAR_NAME:* to print the content of the env variable









