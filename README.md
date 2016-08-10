## CLab-Web
该项目以**flask**框架为基础的**CLab库**的Web交互工具。

## 使用方式
### 依赖安装
+ 确保 **git** 环境
+ 确保 **python 2.7** 环境
+ 确保 **C/C++** 编译环境
+ 首先在本地的workspace中初始化git环境，并进行clone

```
$ git init
$ git clone https://github.com/TalkWIthKeyboard/CLab-Web.git
```
+ 安装pip工具

```
$ apt-get install python-pip
```
+ 进入项目文件夹中，安装python虚拟环境与flask环境以及插件

```
$ sh install.sh
```
+ 进入CLab作者主页下载CLab10，并将其放在app/static下

```
http://www.itu.dk/~rmj/pmwiki/pmwiki.php?n=Main.CLab
```
### 使用方法
+ 进入项目文件夹中，启动虚拟环境

```
$ source flask/bin/activate
```
+ 本地调试模式启动

```
$ python run.py
```

+ 入口路由

```
127.0.0.1:5005/clab/uploading
```