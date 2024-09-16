int minBitFlips(int start, int goal) {
    int ans = start^goal;
    int res = 0;
    while(ans!=0)
    {
        res += ans&1;
        ans >>=1;
    }
    return res;
}
