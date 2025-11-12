#! /bin/bash

file_wordcnt(){
    files=$(ls *.txt)
    for file in $files; do
        word_cnt=$(cat $file | wc -w)
        echo "${file} 파일의 단어는 ${word_cnt} 개 입니다." 
    done
}

file_wordcnt 
