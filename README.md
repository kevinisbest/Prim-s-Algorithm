# Prim-s-Algorithm
輸入：其格式如下：

n m

i1 j1 w1

i2 j2 w2

..

im jm wm

s

其中n,m為正整數，n代表圖的點數，m代表圖的邊數。對於 1<=k<=m，{ik,jk}代表第k邊且ik!=jk，而 wk為一正浮點數代表該邊之weight。s為一正整數滿足1<=s<=n。請注意我們假設圖為無向圖。


輸出：將s當作起始點，Prim’s algorithm所達到之minimum spanning tree與其Weight。輸出格式如下：

p1p2…pn

v

其中p1,…,pn為n個分別以一格空白區隔之非負整數序列，pi代表在所得到之minimum spanning tree中，編號i之點之parent編號，假如是root，則填0。而v為該minimum spanning tree之weight。

輸入範例：

Input

8 10

1 2 15

1 4 7

1 8 10

3 4 9

4 5 12

4 6 5

5 6 6

6 7 14

6 8 8

7 8 3

1

Output

0 1 4 1 6 4 8 6

53

補充說明：參數之範圍為n<=50、m<=200。

