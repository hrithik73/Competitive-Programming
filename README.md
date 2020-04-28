# Competitive-Programming
The setup of Competitive-Programming and The Implememntation of Data-Structure for Copy Paste Purpose. 
And Solution of Some of the problems

## Getting Start
Language- C <br />
For Data Structure: <br />
Compiler(Tested On)-GCC compiler  <br />
Machine-Ubuntu 19.10 <br />
Code Editor-Sublime Text Editor 3 <br />

## My Sublime Setup(Stepwise):
1).Letest version of Sublime. <br />
2).Download and install your favourite theme(mine-Material sublime)  <br />
   ->How to intall any Package in sublime <br />
     -> Go to command pattlets by clicking (Ctrl+Shift+P)  <br />
     -> Click on the Package Control:install Package <br />
     -> Search for your package and click on it. It will get install automatically <br />
 3).Install some plug-in <br />
    -> AstyleFormatter (it is also available on many other code editor it basicaly do is formate the code) <br />
    -> A file icon (for the beautifull icon look) <br />
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

Now write any code in C/C++ and Goto Tools->Build->C(the buil we have created) and press Ctrl+B it will run the code on terminal if you on ubuntu
and using gnome-terminal
Search for any other build on google and you will find for your machine as well.

## Authors

* **Hrithik Singh**
