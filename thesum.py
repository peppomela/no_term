import os

sum=0
value=0
filename='sum.dat'

if not os.path.isfile(filename):
    print "Impossibile aprire il file!"
    sum=0
else:
    f=open(filename,'r')
    print "\nLeggo il file sum.dat ..."
    line=f.readline()
    somma=int(line)
    f.close()
    
print "\nIl valore letto e' = ",sum
value = input("\nInserisci il valore da sommare = ")
sum=sum+value
print "\nla somma e' = ",sum
print "\nSalvo il file con il nuovo valore ...",sum
f=open(filename,'w')
f.write(str(somma))
f.close()
