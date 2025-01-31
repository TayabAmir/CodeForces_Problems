from collections import defaultdict
def main(n,arr):
    c = defaultdict(list)
    for i in range(n):
        c[arr[i]].append(i+1)
    
    out = []
 
    for k in sorted(c.keys()):
        if len(c[k]) == 1:
            print(-1)
            return
        out.extend(c[k][1:])
        out.append(c[k][0])
 
    print(*out)
 
if __name__ == "__main__":
    for _ in range(int(input().strip())):
        n, = map( int , input().strip().split() )
        arr = list( map( int , input().strip().split() ) )
        main(n,arr)