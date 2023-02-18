nb=0
for fichier in `find .`
do
	nb=`expr $nb + 1`
done
echo $nb
