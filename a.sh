PWD = $(sh -c 'pwd')
PWD = ${PWD}/
select EXT in $(find . -name docs -type d)
  do
    echo $EXT
    echo $PWD
    for f in `find $EXT -name "*.png" -maxdepth 1`;
      do
        SOURCE=$PWD${f#.}
        TARGET=$PWD${f#./}
        TARGET=$PWD${f%.png}.pdf
        echo -e "$SOURCE->$TARGET"
        convert $SOURCE $TARGET
      done
  done
done