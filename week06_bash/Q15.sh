#! /bin/bash

file_wordcnt(){
    thefile=$1
    word_cnt=$(cat $thefile | wc -w)
    echo "${thefile} 파일의 단어는 ${word_cnt} 개 입니다."  
}

read -p "Enter a file name: " FILE
file_wordcnt $FILE