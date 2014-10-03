I used `find . -name 'README.md' -exec cat {} \; > out.txt` to concat the majority of the repository's text into one file

I googled `dictionary.txt` and downloaded the first one (oracles I think)

From there just used basic C++ to output non duplicate non dictionary words to a file. I didnt wanna bother filtering symbols out naiively cause I thought that might eliminate potential typos. i didnt force lowercase cause it's really annoying to do in C++

