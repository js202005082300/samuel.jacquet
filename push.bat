@echo off
chcp 65001
::git config --global user.email "js201910271836@outlook.com"
::git config --global user.name "js"
::git pull https://github.com/js202005082300/samuel.jacquet.github.io.git
::git remote add origin https://github.com/js202005082300/samuel.jacquet.github.io.git
git add *
git commit -a -m "màj site"
git push https://github.com/js202005082300/samuel.jacquet.github.io.git
pause&exit