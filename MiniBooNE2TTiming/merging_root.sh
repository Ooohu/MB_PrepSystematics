#usage . merging_root.sh filelist <outputname>.root
	files="$(cat $1 | tr "\n" " ")"
		hadd -f2 $2 $files
