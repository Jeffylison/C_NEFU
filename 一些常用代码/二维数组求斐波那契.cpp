void Mul(int a[][2],int b[][2],int c[][2]) {
    int t[][2] = { {0,0}, {0,0} };
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            for(int k = 0; k < 2; k++)
                t[i][j] = (t[i][j] + a[i][k] * b[k][j]);
    
    memcpy(c,t,sizeof t);
}

int f_final(int n) {
    if(n < 2) return n;
    
    int res[][2]    = { {1,0},{0,1} };      // 1
    int t[][2]      = { {1,1},{1,0} };      
    int k = n - 1;
    while(k > 0) {
        if(k & 1) Mul(res,t,res);
        Mul(t,t,t);
        k >>= 1;
    }
    
    int x[] = {1,0};
    int c[] = {0,0};
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            c[i] = (c[i] + x[j] * res[j][i]);
    return c[0];
}
