# Competitive-Programming
The setup of Competitive-Programming and The Implememntation of Data-Structure for Copy Paste Purpose. 
And Solution of Some of the problems

## Getting Start
Language- C
For Data Structure:
Compiler(Tested On)-GCC compiler
Machine-Ubuntu 19.10
Code Editor-Sublime Text Editor 3

.........................................................................
## My Sublime Setup(Stepwise):
1).Letest version of Sublime.
2).Download and install your favourite theme(mine-Material sublime)
   ->How to intall any Package in sublime
     -> Go to command pattlets by clicking (Ctrl+Shift+P)
     -> Click on the Package Control:install Package
     -> Search for your package and click on it. It will get install automatically
 3).Install some plug-in
    -> AstyleFormatter (it is also available on many other code editor it basicaly do is formate the code)
    -> A file icon (for the beautifull icon look)
      .
      .
 4). Go to tools->build->new build and paste this and code and save the file name as C.sublime-build
 ```
 {
"cmd": ["g++", "-std=c++14", "$file", "-o", "${file_path}/${file_base_name}"],
"file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
"working_dir": "${file_path}",
"selector": "source.c",
"variants":
[
{
"name": "Run",
"cmd": ["bash", "-c", "g++ -std=c++14 '${file}' -o '${file_path}/${file_base_name}' && gnome-terminal -x bash -c '\"${file_path}/${file_base_name}\" ; read'"]
}
]
}
```
 it is for C as well as C++

Now write any code in c and save it and build it with the this build and it will run the code on terminal if you on ubuntu
and using gnome-terminal
Search for any other build on google and you will find for your machine as well.


.......................................................................................................................
