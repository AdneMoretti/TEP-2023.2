def solve(N, M, s, t, count): 
    if(s.find(t) != -1): 
        return 0;
    while(1):
        s = s + s;
        count += 1
        if(s.find(t)!=-1): 
            return count
        if(len(s) - (N-1) > M): 
            return -1; 
    return -1
def main(): 
    T = int(input()) 
    while(T):
        n, m = map(int, input().split())
        s =  input()
        t = input()
        count = 0
        print(solve(n, m, s, t, count))
        T-=1
main()
