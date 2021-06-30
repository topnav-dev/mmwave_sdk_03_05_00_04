#!/bin/bash

# PWD
SDK_PATH=`pwd -L`

# TEMPFILE
RMTEMP="rm -rf .temp"
if test -f ".temp"; then
    bash -c $RMTEMP
    echo ".temp exists then remove."
fi
TEMP=`mktemp .temp`

# FUNC
func_in_FLODER_then_1to3() {
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
## find . -name "docs" -exec grep '\@image\ html' {} \;

func_in_FLODER_then_1to2()
for FLODER in $(find . -name $1 -type d)
  do
    # echo -e "FLODER=$FLODER"
    for FILE in `find $FLODER -name "*.$2" -maxdepth $3`;
      do
        grep -A 1 '\@image\ html' $FILE >> .temp
      done
  done
# find . -name "*.h" -exec grep '\@image\ html' {} \;

# MAIN
echo "1.####################################################################"
func_in_FLODER_then_1to3 "docs" "png" "1" "pdf"
echo "2.####################################################################"
func_in_FLODER_then_1to2 "include" "h" "1"
echo "####################################################################"
echo "SDK_PATH=$SDK_PATH"
echo "RMTEMP=$RMTEMP"
echo "TEMP = $TEMP"
echo "FLODER = $FLODER"
cat .temp
# bash -c $RMTEMP