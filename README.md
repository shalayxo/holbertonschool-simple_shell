C- Simple Shell


## Authors

lex Wilson and Matthew Montgomery

##synopsis

The shell before you is a program that takes user input and translates its use by the operating system

|##file**       |Desription                                                                                           |
|---------------|-----------------------------------------------------------------------------------------------------|
|main.c	        |**shell* : Tells the user / **Main**: Starting point                                                 |
|input.c        |**_get_line**: Takes user input / **_strlen** : Returns the length of the string                     |
|split.c        |**split**: it divides the input in the arguments                                                     |
|check_command.c|**check_builtin_command**: Checks and excutes the given function       	                      |
|builtin_funcs.c|**_cd**: change the directory / **_env: prints variables. /**_stop**: Argv[] & call function         |
|exec.c         |**_execve**:Executes another program / **search_path** It searches for a string in the path          |


