# mytemplates

> https://docs.github.com/en/actions/using-workflows/workflow-syntax-for-github-actions

# Permissions

## touch test
```
touch test
```
spaces 2 or tabs 8

## ls -l
```
ls -l
```
rw-rw-r-- (664) or rw-r--r-- (644)
> chmod go+w test
> 
> rw-rw-rw (666)
```
chmod --help
chmod go+w test
ls -l
chmod go-w test
ls -l
```
## man sha256sum
```
man sha256sum
```
## man ln
```
man ln
```
## man man
```
man man
```
## echo
```
echo man
echo --help
echo --version

man echo
```
## date
```
man date
date +%Y
date +%m
date +%d
date '+%Y %m %d'
```

## /bin/sh
e3...55
```
man /bin/sh
ls -l test
sha256sum test

#!/bin/sh
echo 'param list='$@
echo 'number='$#
echo 'script='$0
echo 'parm1='$1
echo 'parm2='$2
echo `date +%Y`

man cat
cat test
man head
man tail
head -n1 test
tail -n2 test

/bin/sh ./test Hello, World!

echo defer
man touch

man git
git --version

git clone --depth 1 https://github.com/####/####.git
```

## pep
>
> https://github.com/python/peps/
>
> https://peps.python.org/pep-0007/
>
> https://peps.python.org/pep-0008/">PEP-8</blockquote>
>
> ## Tabs or Spaces
> Spaces are the preferred indentation method
>
> Tabs should be used solely to remain consistent with code that is already indented with tabs.
>
> Python disallows mixing tabs and spaces for indentation.

## yamel
>
> https://en.wikipedia.org/wiki/YAML
>
> https://en.wikipedia.org/wiki/Serialization
>
> https://en.wikipedia.org/wiki/Lightweight_markup_language

Another or A'int
---------------

unwritten.

unwritten law. <br>
unwritten rule. <br>
