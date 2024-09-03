int sum(int n) {
    int sum = 0;
    while (n!=0) {
        sum += (n%10) * (n%10);
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow, fast;
    slow = fast = n;
    do {
        slow = sum(slow);
        fast = sum(fast);
        fast = sum(fast);
    } while(slow != fast);
    if (slow == 1)
        return 1;
    else
        return 0;
}
