# C-learning

自学C语言

参考教材 `C Primer Plus` (第六版) 中文版

欢迎各位指正错误!

# 配置环境

操作系统 `Windows11`

使用的代码编辑器 [ VScode ]( https://code.visualstudio.com/ )

编译器 [ MinGW-w64 ]( https://sourceforge.net/projects/mingw-w64/ )

## 安装编译器

[ MinGW-w64 ]( https://sourceforge.net/projects/mingw-w64/ )

## 配置VSCode

[ VScode ]( https://code.visualstudio.com/ )

[ 中文语言包 ](https://marketplace.visualstudio.com/items?itemName=MS-CEINTL.vscode-language-pack-zh-hans)

[ C/C++扩展 ](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

三个配置文件(注意改路径)

### c_cpp_properties.json

```json
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
                "C:/MinGW/lib/gcc/mingw32/6.3.0/include/c++"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "compilerPath": "C:/MinGW/bin/gcc.exe",
            "cStandard": "c11",
            "cppStandard": "c++17",
            "intelliSenseMode": "${default}"
        }
    ],
    "version": 4
}
```

### launch.json

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(Windows) Launch",
            "type": "cppvsdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}.exe",
            "stopAtEntry": false,
            "preLaunchTask": "g++.exe build active file",
            "cwd": "${fileDirname}",
            "environment": [],
            "console": "externalTerminal"
        }
    ]
}

```

### tasks.json

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "type": "shell",
            "label": "g++.exe build active file",
            "command": "C:/MinGW/bin/g++.exe",
            "args": [
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe",
                "-fexec-charset=GBK"
            ],
            "options": {
                "cwd": "C:/MinGW/bin/"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": "build"
        },
        {
            "type": "cppbuild",
            "label": "C/C++: gcc.exe 生成活动文件",
            "command": "C:/MinGW/bin/gcc.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "C:/MinGW/bin"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "调试器生成的任务。"
        }
    ]
}
```