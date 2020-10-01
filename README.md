# Competitive-Programming 💻
The setup of Competitive-Programming and The Implememntation of Data-Structures Some of these can be used for Copy-Paste <br />
And Solution of Some of the problems.

## Getting Started 🚀
- Language- C <br />
- For Data Structure: <br />
- Compiler(Tested On)-GCC compiler.  <br />
- Machine-Ubuntu 19.10 or Later <br />
- Code Editor-Sublime Text Editor 3 <br />

## My Sublime Setup(Stepwise) with Competitive Programming ⚙️
1).Letest version of Sublime. <br />
2).Download and install your favourite theme(mine-Material sublime)  <br />
   ->How to install any Package in sublime? <br />
      - Go to command pattlets by clicking (Ctrl+Shift+P).  <br />
      - Click on the Package Control:install Package. <br />
      - Search for your package and click on it. It will get install automatically. <br />
 3).Install some plug-in <br />
    -> AstyleFormatter. (it is also available on many other code editor it basicaly do is formate the code) <br />
    -> A file icon. (for the beautifull icon look) <br />
      .
      . <br />
 4). Go to tools->build->new build and paste this and code and save the file name as C.sublime-build.
```
{
    "cmd": ["g++", "-std=c++14", "$file", "-o", "${file_path}/${file_base_name}"],
    "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
    "working_dir": "${file_path}",
    "selector": "source.c",
    "variants": [{
        "name": "Run",
        "cmd": ["bash", "-c", "g++ -std=c++14 '${file}' -o '${file_path}/${file_base_name}' && gnome-terminal -x bash -c '\"${file_path}/${file_base_name}\" ; read'"]
    }]
}
```
- This works for C as well as C++.

- Now write any code in C/C++ and Goto Tools->Build->C(the build we have created) and press Ctrl+B it will directly run the code on terminal if you on ubuntu and using gnome-terminal(bash) or chamge the terminal in script Whichever Terminal you are using.
Search for any other build on google and you will find for your machine as well.

## Resourses 📚
- [Awesome Resource](https://github.com/hrithik73/Competitive-Programming/blob/master/Resource/README.md)

## Contributing 🤝
This is 100% free and open source. We encourage and support an active, healthy community that accepts contributions from the public – including you. There are a couple of ways in which you can contribute to the growing community of Competitive Programming.

- Fix a bug.
- Create an issue .
- Add more resources to learn Competitive Programming.
- Write and improve some documentation. Documentation is very critical to us. We would appreciate help in adding multiple languages to our docs.

## Authors ✒️

* [**Hrithik Singh**](https://github.com/hrithik73)
*[**Hitesh Garg**](https://github.com/hiteshgarg123)
