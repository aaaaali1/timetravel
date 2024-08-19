# GitHub与Git基本使用学习笔记
---
## 一、Git下载与GitHub注册
1. Git下载
访问Git官网下载适用于你操作系统的Git版本。
安装过程中遵循安装向导的指示完成安装。
2. GitHub注册
访问GitHub官网。
点击页面右上角的“Sign up”按钮。
填写注册信息，包括用户名、邮箱和密码等。
验证邮箱地址，完成注册。
## 二、Git文件状态简介
Git管理文件时，文件会处于以下几种状态之一：

已修改（Modified）：文件已被修改但还未提交到暂存区。
已暂存（Staged）：文件已被标记为将要提交到版本库中的一组更改。
已提交（Committed）：文件已安全地保存在本地数据库中。
未跟踪（Untracked）：新创建的文件，Git还未开始跟踪其版本。
## 三、初次运行Git前的配置
在使用Git之前，你需要进行一些基本配置，以设置你的用户名和邮箱地址，这些信息会出现在你的每次提交中。

### 设置全局用户名  
git config --global user.name "你的用户名"  
  
### 设置全局邮箱地址  
git config --global user.email "你的邮箱"
### 注意：如果你使用的是Windows系统，并希望Git Bash能像Linux shell那样显示颜色，你可以通过以下命令设置：
git config --global color.ui auto
## 四、Git常用命令介绍
## 1. 初始化仓库
### 在当前目录下初始化一个新的Git仓库  
git init
## 2. 添加文件到暂存区
### 添加所有已修改的文件到暂存区  
git add .  
  
### 或者添加指定文件到暂存区  
git add 文件名
## 3. 提交更改
### 将暂存区的更改提交到本地仓库，并附上提交信息  
git commit -m "提交信息"
## 4. 查看文件状态
### 查看当前工作区和暂存区的状态  
git status
## 5. 查看提交历史
### 查看提交历史  
git log  
  
### 简化显示提交历史  
git log --oneline
## 6. 撤销操作
撤销工作区的修改（未暂存）：
### 撤销指定文件的修改  
git checkout -- 文件名  
 
### 撤销所有文件的修改  
git checkout -- .
### 撤销暂存区的修改（回退到工作区）：
git reset HEAD 文件名
撤销提交（回退到上一次提交）：
### 撤销最近一次提交，但保留修改到暂存区  
git reset --soft HEAD~1  
 
### 撤销最近一次提交，并撤销暂存区的修改，保留工作区的修改  
git reset --mixed HEAD~1 或 git reset HEAD~1  
 
### 彻底撤销最近一次提交，并丢弃所有修改  
git reset --hard HEAD~1
## 7. 连接到GitHub仓库
### 添加远程仓库（通常用于首次将本地仓库与GitHub上的仓库关联）：
git remote add origin 仓库的URL
推送本地更改到GitHub：
### 推送master分支到远程仓库（Git 2.28及之前版本）  
git push -u origin master  
 
### 或推送main分支（GitHub新创建的仓库默认分支名可能已更改为main）  
git push -u origin main
### 从GitHub拉取最新更改：
git pull origin 分支名
