#!/bin/bash
SDK_PATH=$(sh -c 'pwd -L')
echo "SDK_PATH=$SDK_PATH"
TEMP=$(sh -c 'mktemp xxtmp')
RMTEMP=$(rm -rf $TEMP)
# chmod +x $TEMP
echo "TEMP=$TEMP"

func_in_file_then_1to3() {
  select FLODER in $(find . -name $1 -type d)
  do
    # echo -e "FLODER=$FLODER"
    for FILE in `find $FLODER -name "*.$2" -maxdepth $3`;
      do
        FILE=${FILE#\.}
        SOURCE=$SDK_PATH${FILE}
        TARGET=$SDK_PATH${FILE%.$2}.$4
        echo -e "[$SOURCE] -> [$TARGET]"
        convert $SOURCE $TARGET
      done
    break
  done
}

func_in_FLODER_then()
for FLODER in $(find . -name $1 -type d)
  do
    # echo -e "FLODER=$FLODER"
    for FILE in `find $FLODER -name "*.$2" -maxdepth $3`;
      do
        grep -A 1 '\@image\ html' $FILE
      done
  done
# find . -name "*.h" -exec grep '\@image\ html' {} \;

echo "1.####################################################################"
# func_in_file_then_1to3 "docs" "png" "1" "pdf"
echo "2.####################################################################"
# func_in_FLODER_then "include" "h" "1"
# echo -e "3.####################################################################"
# eval $RMTEMP
# $RMTEMP